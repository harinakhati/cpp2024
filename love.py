name1 = input("Enter your name : ")
name2 = input("Enter your partner name : ")

com_name = name1 + name2

low_name = com_name.lower()
count = 0

t = low_name.count("t")
r = low_name.count("r")
u = low_name.count("u")
e = low_name.count("e")

true = t+r+u+e


l = low_name.count("l")
o = low_name.count("o")
v = low_name.count("v")
e = low_name.count("e")

love = l+o+v+e

truelove = int(str(true) + str(love))

print(f"The love percent of {name1} and {name2} is {truelove}%")

if (truelove < 10) or (truelove >90):
    print(f"Your love score is {truelove}, You go together like coke and mentos.")
elif (truelove >= 40) and (truelove <= 50):
    print(f"Your score is {truelove}, you are great together.")
else:
    print(f"Your score is {truelove}")