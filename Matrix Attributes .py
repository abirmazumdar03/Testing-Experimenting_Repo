def Attributes(matrix):
    print("Matrix Element : ")
    for i in matrix:
        print(i)
    
    print("Shape of the Array : 4X2")
    print("Dimension of Array = 2")

def Accept():
    matrix=[];temp=[]

    for i in range(4):
        temp=[]
        for j in range(2):
            temp.append(int(input("Enter an Element : ")))
        matrix.append(temp)
    
    Attributes(matrix)

Accept()
#I was added here in via GIT HUB 
