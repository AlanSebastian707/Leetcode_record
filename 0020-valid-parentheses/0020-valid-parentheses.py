class Solution(object):
    def isValid(self, s):
        stack=[]
        table={")":"(","}":"{","]":"["}
        for i in s:
            if i in table:
             if stack and stack[-1]==table[i]:
                stack.pop()
             else:
                return False
            else:
                stack.append(i)
        return True if not stack else False        
                       
        