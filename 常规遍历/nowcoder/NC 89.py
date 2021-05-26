class Solution:
    def trans(self, s, n):
        temp = s.split(" ")[::-1]
         #字符串拼接
        result = ' '.join(temp)
         #大小写转换
        result2 = result.swapcase()
        return result2
