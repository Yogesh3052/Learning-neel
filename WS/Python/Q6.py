# Write a program to compute the distance between two points on the surface of earth.
# Sample Output:
# Print the the distance between two points on the surface of earth:
# -----------------------------------------------------------------------
# Input the latitude of coordinate 1: 25
# Input the longitude of coordinate 1: 35
# Input the latitude of coordinate 2: 35.5
# Input the longitude of coordinate 2: 25.5
# The distance between those points is: 1480.08

from math import acos, sin, cos
PI = 3.14


lo1 = eval(input("Enter the longitude of 1st co-ordinate : "))
la1 = eval(input("Enter the latitude of 1st co-ordinate : "))
lo2 = eval(input("Enter the longitude of 2st co-ordinate : "))
la2 = eval(input("Enter the latitude of 2st co-ordinate : "))

lo1 = lo1 * (PI/180)
lo2 = lo2 * (PI/180)
la1 = la1 * (PI/180)
la2 = la2 * (PI/180)

earth_radius = 6400

distance = earth_radius * acos((sin(la1) * sin(la2)) + (cos(la1)*cos(la2)*cos(lo1-lo2)));

print("The Distance between the points : ", distance)