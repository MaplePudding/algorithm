class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        L = len(s)
        if L<2:
            return L
        head = 0
        tail = 1
        # 设置初始窗口大小为1
        cnt = 1
        while tail<L:
            while tail<L and s[tail] not in s[head:tail]:
                tail += 1
            cnt = max(cnt, tail-head)
            if tail != L:
                # 计算头指针的移动步数
                head += s[head:tail].index(s[tail])+1
        return cnt