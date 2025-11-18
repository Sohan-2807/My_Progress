class mathTool:
    def area(self,a,b=None):
        if b is None:
            return a*a
        else:
            return a*b
tool = mathTool()
print(tool.area(5))      
print(tool.area(5,10))   