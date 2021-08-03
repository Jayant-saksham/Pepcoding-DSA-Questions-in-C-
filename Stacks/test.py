inFileName = input("Enter file name : ")
content = None
with open(inFileName, 'r') as p:
    content = p.read()

outFileName = input("Enter outfilename : ")
with open(outFileName, 'w') as p:
    p.write(content)







