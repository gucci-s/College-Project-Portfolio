#Magic 8 ball

#random is a .randint() function from the random module 
#it will generate a random number
import random

name = "Sarah"
question = "Will I ever be good at Python?"
answer = ""
random_number = random.randint(1, 13)
#print(random_number) chekcing integrity of randint function


if random_number == 1:
  answer = "Yes - definitely!"
elif random_number == 2:
  answer = "It is decidedly so."
elif random_number == 3:
  answer = "Without a doubt!"
elif random_number == 4:
  answer = "Reply hazy, try again"
elif random_number == 5:
  answer = "Ask again later"
elif random_number == 6:
  answer = "Better not tell you now!"
elif random_number == 7:
  answer = "My sources say no!"
elif random_number == 8:
  answer = "Outlook not so good!"
elif random_number == 9:
  answer = "Very doubtful!"
elif random_number == 10:
  answer = "You don't want the answer!!"
elif random_number == 11:
  answer = "I don't know what do you think?"
elif random_number == 12:
  answer == "I don't feel like answering you"
else:
  answer = "Error!!!"

if name == "":
  print("Question: ", question)
else:
  print(name, "asks: ", question)
print("Magic 8-Ball's answer: ", answer)

