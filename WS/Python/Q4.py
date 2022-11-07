# Write a program which accepts the radius of a circle from the user and compute the area and circumference.
# Sample Output:
# Find the area and circumference of any circle :
# ----------------------------------------------------
# Input the radius(1/2 of diameter) of a circle : 5
# The area of the circle is : 78.5397
# The circumference of the circle is : 31.4159

pi  = 3.1428
rad = int(input("Input the radius(1/2 of diameter) of a circle : "))
print("The area of the circle is : ",pi * rad * rad)
print("The circumference of the circle is : ",2 * pi * rad)