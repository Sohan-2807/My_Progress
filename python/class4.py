class mathTool:
    def perimeter(self,*args):
        if len(args) == 1 :
            return 4*args[0]
        elif len(args) == 2:
            return 2 *(args[0] + args[1])
        else:
            return "Invalid number of arguments"
tool = mathTool()   
print(tool.perimeter(5))
print(tool.perimeter(5,10))
print(tool.perimeter(5,10,15))
