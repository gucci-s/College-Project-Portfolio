#Shipping calculator

weight = float(input("\nHow much does the package weight?"))
groundPrice = 0.00
dronePrice = 0.00
premiumGround = 125.00

# Ground Shipping
if weight <= 2:
  groundPrice = weight * 1.50 + 20
elif weight <= 6:
  groundPrice = weight * 3.00 + 20
elif weight <= 10:
  groundPrice = weight * 4.00 + 20
else:
  groundPrice = weight * 4.75 + 20

# Drone Shipping
if weight <= 2:
  dronePrice = weight * 4.50
elif weight <= 6:
  dronePrice = weight * 9.00
elif weight <= 10:
  dronePrice = weight * 12.00
else:
  dronePrice = weight * 14.25

# using "%" operator to format the output 
print("\nShipping rates are as follows: ")
print("\nGround shipping rate: $%.2f" % groundPrice)
print("Drone shipping rate: $%.2f" % dronePrice)
print("Premium Ground Shipping flat rate: $%.2f" % premiumGround)



