class Solution:
    def reverseString(self, s):
        """
        Do not return anything, modify s in-place instead.
        """
        n =len(s)
        for i in range(n//2):
            s[i],s[n-i-1] = s[n-i-1],s[i]
            
    def reserve(self,s):
        left = 0
        right = n-1
        while left<right:
            s[left],s[right] = s[right],s[left]
            left+=1
            right-=1
        
        
s=["h","e","l","l","o"]
Solution().reverseString(s)
print(s)
