#Practicing using
# .insert(), .pop(), range(), len(), .count(), .sort() and sorted()

inventory = ["twin bed", "twin bed", "headboard", "queen bed", "king bed", "dresser", "dresser", "table", "table", "nightstand", "nightstand", "king bed", "king bed", "twin bed", "twin bed", "sheets", "sheets", "pillow", "pillow"]

#using len() to find the length of the index (list)
inventory_len = len(inventory)

print(inventory_len)

#using [] index to get the first item from the index
first = inventory[0]
print(first)

#using slice method [] to pick the last item using negative
last = inventory[-1]
print(last)

#using [:] method to slice idex 2-6 not including 6
inventory_2_6 = inventory[2:6]
print(inventory_2_6)

#using [:] method to slice the first 3 items to print
first_3 = inventory[:3]
print(first_3)

#using .count() to see how many twin beds in inventory
twin_beds = inventory.count("twin bed")
print(twin_beds)

#Using .pop() to remove the 5th element
removed_item = inventory.pop(4)
print(removed_item)

#inserting using .insertt() expects 2 values the index and the new item
inventory.insert(10,"19th Century Bed Frame")
print(inventory)

#reverse sort using .sort()
inventory.sort(reverse=True)
print(inventory)

#sorting using sorted() which is assigned a new variable
sorted_inventory = sorted(inventory)
print(sorted_inventory)
