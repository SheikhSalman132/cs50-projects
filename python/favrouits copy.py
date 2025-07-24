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

             

for fav in sorted(counts, key=lambda problem: counts[problem], reverse = True ):
     print(f"{fav}: {counts[fav]}")
