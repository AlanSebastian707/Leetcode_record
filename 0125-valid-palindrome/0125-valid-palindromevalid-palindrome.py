class Solution(object):
    def isPalindrome(self, s):
     def StringConvert(s):
        sl=[]
        s=s.lower()    
        for i in s:
            if i.isalnum():
                sl.append(i)
            else:
                continue
        return  "".join(sl)
     sc=StringConvert(s)
     return (sc==sc[::-1])


        