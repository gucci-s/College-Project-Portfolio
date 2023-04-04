#Temprature conversions using user input


print("Fahrenheit to Celsius Calculator")
def f_to_c(f_temp):
  c_temp = (f_temp - 32) * 5/9
  return c_temp

fahrenheit = input("\nPlease enter temp in Fahrenheit: ")
f100_in_celsius = f_to_c(int(fahrenheit))
print(int(f100_in_celsius))

print("Celsius to Fahrenheit Calculator")
def c_to_f(c_temp):
  f_temp = c_temp * (9/5) + 32
  return f_temp

celsius = input("\nPlease enter temp in Celsius: ")
c0_in_fahrenheit = c_to_f(int(celsius))
print(int(c0_in_fahrenheit))

#Creating functions to use in calculations of force, mass, distance

print("\n\nUsing the force: Calculating various speeds & distances")

#Using the force
train_mass = 22680
train_acceleration = 10
train_distance = 100
bomb_mass = 1

#Get force function
def get_force(mass, acceleration):
  return mass * acceleration

train_force = get_force(train_mass, train_acceleration)

print("\nThe GE train supplies {:,} Newtons of force.".format(train_force))


#Get Energy function
def get_energy(mass, c = 3*10**8):
  return mass * c ** 2

bomb_energy = get_energy(bomb_mass)

print("\nA 1kg bomb supplies {:,} Joules.".format(bomb_energy))

#Get work function

def get_work(mass, acceleration, distance):
  return get_force(mass, acceleration) * distance

train_work = get_work(train_mass, train_acceleration, train_distance)

print("\nThe GE train does {:,} Joules of work over {:,} meters.".format(train_work, train_distance))

#Using the {:,} .format method allows for output to have commas in the number results




