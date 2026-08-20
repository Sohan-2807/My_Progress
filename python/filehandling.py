try :
    with open("file.py" , "r") as f:
        n = 0
        content = f.read().split()
        for i in content :
            if i == "can":
                n += 1
    print(n)
except FileNotFoundError:
    
    print("File not found")
        