class Solution:
    def solve(self , s , t ):
        mlen = max(len(s), len(t))
        s = s.zfill(mlen)
        t = t.zfill(mlen)
        carry = 0
        res = ''
        for i in range(-1, -mlen-1, -1):
            last = ord(s[i]) + ord(t[i]) - ord('0') + carry
            if last > ord('9'):
                carry = 1
                res += chr(last - 10)
            else:
                carry = 0
                res += chr(last)
        if carry:
            res += str(carry)
        return res[::-1]