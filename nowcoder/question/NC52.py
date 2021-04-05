class Solution:
    def isValid(self , s ):
        # write code here
        stack = []
        mp = {')':'(', ']':'[', '}':'{'}
        for i in range(len(s)):
            if not(s[i] in mp):
                stack.append(s[i])
            elif (len(stack) == 0) or (stack[len(stack) - 1] != mp[s[i]]):
                return False
            else:
                stack.pop()
        if(len(stack) == 0):
            return True
        else:
            return False