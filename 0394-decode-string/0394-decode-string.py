class Solution(object):
    def decodeString(self, s):
        """
        :type s: str
        :rtype: str
        """
        stack = []
        top=0
        d = ""
        r = ""
        x = 0
        for i in range(len(s)):
            if(s[i].isdigit()):
                x = (x*10)+int(s[i])
            elif(s[i] == "["):
                stack.append(x)
                stack.append(d)
                x = 0
                d = ""
            elif(s[i] == ']'):
                a = stack.pop()
                b = stack.pop()
                d = a+d*b
            else:
                d += s[i]
        while(stack):
            d = stack.pop()+d
        return d
            
