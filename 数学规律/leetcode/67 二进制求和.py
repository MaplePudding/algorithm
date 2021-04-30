class Solution:
    def addBinary(self, a: str, b: str) -> str:
        carry = 0
        res = ""
        if len(a) < len(b):
            a = '0' * (len(b) - len(a)) + a
        else:
            b = '0' * (len(a) - len(b)) + b
        
        for i in range(len(a) - 1, -1, -1):
            if int(a[i]) + int(b[i]) + carry >= 2:
                res = str(int(a[i]) + int(b[i]) + carry - 2) + res
                carry = 1
            else:
                res = str(int(a[i]) + int(b[i]) + carry) + res
                carry = 0
        if carry:
            res = str(carry) + res
        return res