class Solution:
    def minEditCost(self , str1 , str2 , ic , dc , rc ):
        len1,len2=len(str1)+1,len(str2)+1
        dp=[0 for i in range(len2)]
        for i in range(1,len2):
            dp[i]=i*ic
        for i in range(1,len1):
            prev=dp[0]
            dp[0]=i*dc
            for j in range(1,len2):
                tmp=dp[j]
                if str1[i-1]==str2[j-1]:
                    dp[j]=prev
                else:
                    dp[j]=min(dp[j-1]+ic,tmp+dc,prev+rc)
                prev=tmp
        return dp[j]