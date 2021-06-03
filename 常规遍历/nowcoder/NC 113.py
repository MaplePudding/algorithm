class Solution:
    def solve(self , IP ):
        # write code here
        v4 = IP.split('.')
        v6 = IP.split(':')
        if len(v4) == 4:
            for i in v4:
                if i[0] == '0' or int(i) > 255:
                    return 'Neither'
            return 'IPv4'
        if len(v6) == 8:
            for i in v6:
                if len(i) > 4 :
                    return 'Neither'
            return 'IPv6'