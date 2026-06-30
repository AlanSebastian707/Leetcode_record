class Solution(object):
    def lengthOfLongestSubstring(self, s):
        l=0
        r=0
        maxlength=0
        S=set()
        n=len(s)
        for r in range(n):
           while s[r] in S:
              S.remove(s[l])
              l+=1
           maxlength=max(maxlength,r-l+1)
           S.add(s[r])
        return maxlength         
        