class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        MIN_INT, MAX_INT = -2147483648, 2147483647  
        flag = 1                                    
        if dividend < 0: flag, dividend = -flag, -dividend
        if divisor < 0: flag, divisor  = -flag, -divisor 
        
        def div(dividend, divisor):                 
            if dividend < divisor:
                return 0
            cur = divisor
            multiple = 1
            while cur + cur < dividend:             
                cur += cur                          
                multiple += multiple
            return multiple + div(dividend - cur, divisor)
        res = div(dividend, divisor)

        res = res if flag > 0 else -res             
        
        if res < MIN_INT:                           
            return MIN_INT
        elif MIN_INT <= res <= MAX_INT:
            return res
        else:
            return MAX_INT