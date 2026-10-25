class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        st = ""

        for c in s:
            if c.isalnum():
                st += c
        
        return st == st[::-1]