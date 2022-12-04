#Write a Python program to find 2nd largest number in three number? 
a=int(input("Enter the numner: "))
b=int(input("Enter second number: "))
c=int(input("Enter third number: "))
if(a>b and a<c):
    print("a is 2nd largest")
elif (b>a and b<c):
    print("b is 2nd largest")
else:
    print("c is 2nd largest")
