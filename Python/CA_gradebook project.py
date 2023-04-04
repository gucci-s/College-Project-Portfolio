#Using append, indexing, remove to modify code

last_semester_gradebook = [["politics", 80], ["latin", 96], ["dance", 97], ["architecture", 65]]

# Your code below: 

subjects = ["physics", "calculus", "poetry", "history"]
grades = [98, 97, 85, 88]

gradebook = [["physics, 98"], ["calculus", 97], ["poetry", 85], ["history", 88]]

#adding two classed though the append fucntion
gradebook.append(["computer science", 100])

gradebook.append(["visual arts", 93])

print("\n",gradebook)

#using indexing to add 5 points to visual arts class
#indexing starts at 0
#first[] = visual arts second[] = 93
#-1 on each takes you to the last list and information on list
#it could also be [5][1] to change the grade as well
gradebook[-1][-1] = 98

print("\n",gradebook)

#remove function to remove grade,indexing [2] allows program to know
#where to remove the value
gradebook[2].remove(85)

print("\n",gradebook)

#adding PASS to poetry class
gradebook[2].append("Pass")

print("\n", gradebook)

full_gradebook = last_semester_gradebook + gradebook

print("\n", full_gradebook)

