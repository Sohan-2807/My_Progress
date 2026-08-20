try:
    with open("file.py","r+") as f:
        line = f.readline()
        while line:
            if len(line) >= 3:
                print(line[:2] + "#" + line[3:], end='')
            else:
                print(line, end='')
            line = f.readline()
except FileNotFoundError:
    print("File not found")
           
        