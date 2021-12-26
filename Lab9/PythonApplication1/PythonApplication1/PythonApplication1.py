def findMatch(ryadok, n, x, y):
    for i in range(n):
        if ryadok[i] == x:
            j = i
            print("Word:")
            while ryadok[j] != y:
                print(ryadok[j])
                j=j+1
            print(y+"")
            i = j

ryadok=input("String: ")
n = len(ryadok)
x=input()
y=input()
findMatch(ryadok,n,x,y)