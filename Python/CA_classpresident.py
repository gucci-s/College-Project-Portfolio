#Class president results

votes = ["Jake", "Jake", "Laurie", "Laurie", "Laurie", "Jake", "Jake", "Jake", "Laurie", "Cassie", "Cassie", "Jake", "Jake", "Cassie", "Laurie", "Cassie", "Jake", "Jake", "Cassie", "Laurie"]


jake_votes = votes.count("Jake")
laurie_votes = votes.count("Laurie")
cassie_votes = votes.count("Cassie")
total_votes = (len(votes))

print("Total votes:", total_votes)
print("Votes for Jake:", jake_votes)
print("Votes for Laurie:", laurie_votes)
print("Votes for Cassie:", cassie_votes)

if jake_votes > laurie_votes and cassie_votes:
  print("Jake is the winner!")
elif laurie_votes > jake_votes and cassie_votes:
  print("Laurie is the winner!")
elif cassie_votes > jake_votes and laurie_votes:
  print("Cassie is the winner!")
else:
  print("We have a tie!")
