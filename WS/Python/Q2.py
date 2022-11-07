# Any character is entered by the user; write a program to determine whether the character entered is a capital letter, 
# a small case letter, a digit or a special symbol
ch = input("Enter Character : ")
val = ord(ch)
print("ASCII value of Character is ",val)

if (val >= 65 and val<= 90):
    print("\nCharacter is 'Capital' letter")
elif (val >= 97 and val<= 122):
    print("\nCharacter is 'Small' letter")
elif (val >= 48 and val<= 57):
    print("\nCharacter is a 'Digit'")
elif ((val >= 0 and val<= 47) or (val >= 58 and val<= 64) or (val >= 91 and val<= 96) or (val >= 123 and val<= 127) ):
    print("\nCharacter is special character")
