#Receipts program


#define inventory, descriptions and prices
lovely_loveseat_description = (
"Lovely Loveseat: "
"Tufted polyester blend on wood. "
"32 inches high x 40 inches wide x 30 inches deep. "
"Color choices: Red or white"
)
lovely_loveseat_price = 254.00

stylish_settee_description = (
"Stylish Settee: "
"Faux leather on birch. "
"29.50 inches high x 54.75 inches wide x 28 inches deep. "
"Color choices: Black"
)
stylish_settee_price = 180.50

luxurious_lamp_description = (
"Luxurious Lamp: "
"Glass and iron. "
"36 inches tall. "
"Color: Brown with cream shade."
)
luxurious_lamp_price = 52.15

#Sales Tax
sales_tax = 8.8 / 100

#running tally of customer expenses starting at 0
customer_one_total = 0

#list of the descriptions of things they are purchasing
customer_one_itemization = ""

#adding things customer is buying
customer_one_total += lovely_loveseat_price

customer_one_itemization += lovely_loveseat_description

customer_one_total += luxurious_lamp_price

customer_one_itemization += luxurious_lamp_description

#totaling price

customer_one_tax = customer_one_total * sales_tax
customer_one_total = customer_one_total + customer_one_tax

print("Customer One Items: ")
print("\n" + customer_one_itemization)
print("\nCustomer One Total: ${:.2f}".format(customer_one_total))
