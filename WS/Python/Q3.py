import datetime
import time

current_time = datetime.datetime.now()

print("Second :", current_time.second)
print("Minute : ", current_time.minute)
print("Hour : ", current_time.hour)
print("Day : ", current_time.day)
print("Month : ", current_time.month)
print("Year :", current_time.year)

print("weekday = ",current_time.weekday)
print("day of year = ",((current_time - datetime.datetime(current_time.year, 1, 1)).days + 1))
print("Current Date = ",current_time.day,"/",current_time.month,"/",current_time.year)
print("Current Time = ",(time.strftime("%H:%M:%S", time.localtime())))