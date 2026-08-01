class Solution(object):
    def minWindow(self, s, t):
        if not s or not t:
            return ""

        # Frequency map of characters required
        need = {}
        for c in t:
            need[c] = need.get(c, 0) + 1

        required = len(need)      # Number of unique characters to match
        formed = 0                # Number of unique characters currently satisfied

        window = {}

        l = 0
        min_len = float('inf')
        ans = ""

        for r in range(len(s)):
            c = s[r]

            # Expand window
            window[c] = window.get(c, 0) + 1

            # Check if one required character is satisfied
            if c in need and window[c] == need[c]:
                formed += 1

            # Contract window while it is valid
            while formed == required:

                # Update answer
                if r - l + 1 < min_len:
                    min_len = r - l + 1
                    ans = s[l:r + 1]

                # Remove left character
                left = s[l]
                window[left] -= 1

                # Window became invalid
                if left in need and window[left] < need[left]:
                    formed -= 1

                l += 1

        return ans