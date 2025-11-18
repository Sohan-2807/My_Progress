class mathTool:
    def add(self,*args):
        return sum(args)
tool = mathTool()
print(tool.add(5,10))
print(tool.add(5,10,15,20))
print(tool.add(1,2,3,4,5))