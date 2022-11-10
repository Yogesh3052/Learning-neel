# Write a program to add two binary numbers.
# Sample Output:
# Addition of two binary numbers:
# -----------------------------------
# Input the 1st binary number: 1010
# Input the 2nd binary number: 0011
# The sum of two binary numbers is: 1101
num1 = input("Enter 1st Binary Number : ")
num2 = input("Enter 2st Binary Number : ")

sum = str(bin(int(num1,2) + int(num2,2)))

print("Binary Addition : ",sum)