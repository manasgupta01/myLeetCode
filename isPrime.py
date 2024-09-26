import math

def isPrime(a):
    for i in range (2,int(math.sqrt(a))+1):
        if(a%i==0):
            return 0
    return 1

print("hello world")

a = input("enter a number: ")
print(a)
b = input("enter a number: ")
# print(b)
for i in range(int(a),int(b)):
    if(i!=1 and isPrime(i)):
        print(i)
