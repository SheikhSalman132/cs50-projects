import csv

Scratch, C, Python = 0, 0, 0
counts = {}

with open("fav.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        fav = row["problem"]
        if fav in counts:
         counts[fav] += 1
        else: 
              counts [fav]= 1 

    fava = input("favrouit: ")
    if fava in counts:
        print(f"{fava}:{counts[fav]}")