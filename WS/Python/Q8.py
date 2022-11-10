def prime(n):
    for i in range(2,n):
        if(n%i == 0):
            return 0
    return 1

n = int(input("Enter number : "))
i = 2
lst =[]
sum  = 0
while(1):
    if(prime(i)):
        lst.append(i)
        sum += i
        if(len(lst)==n):
            break
    i+=1
    
print("Sum of first", n ,"Prime numbers : ",sum)