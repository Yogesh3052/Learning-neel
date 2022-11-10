marks = int(input("Enter Marks : "))

if(100>= marks >= 60):
    print("First Division")
elif(60 > marks >= 50):
    print("Second Division")
elif(50 > marks >= 40):
    print("Third Division")
elif(40 > marks >= 0):
    print("Fail")
else:
    print("Invalid Input")
    
       