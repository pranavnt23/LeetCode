class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        y=0
        s = s.replace("IV", "IIII").replace("IX", "VIIII")
        s = s.replace("XL", "XXXX").replace("XC", "LXXXX")
        s = s.replace("CD", "CCCC").replace("CM", "DCCCC")
        for i in range(len(s)):
            if s[i]=="I":
                y+= 1   
            elif s[i]== "V":
                y+= 5
            elif s[i]== "X":
                y+= 10
            elif s[i]== "L":
                y+= 50
            elif s[i]== "C":
                y+= 100
            elif s[i]== "D":
                y+= 500
            elif s[i]== "M":
                y+= 1000
        return y