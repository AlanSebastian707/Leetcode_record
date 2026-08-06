class Solution(object):
    def smallestNumber(self, n, t):
       def product(n): 
          p=1
          temp=n
          while(temp>0):
              d=temp%10
              p*=d
              temp=temp//10
          return p    
       running=True
       i=n
       while running:
           p=product(i)
           if p%t==0:
               running=False
               return i
           else:
               i+=1         
          