import random
temperature=random.randint(1,100)
humidity=random.randint(1,100)
print("Temperature is =",temperature)
print("Humidity is =",humidity)
if(temperature<15):
    print("Temperature is low and humidity is high")
    print("ALARM OFF")
elif(temperature>15) and (temperature<59):
    print("Temperature is normal and humidity is also normal")
    print("ALARM OFF")
else:
    print("enter the correct value")
    
