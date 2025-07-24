import csv

Scratch, C, Python = 0, 0, 0

with open("fav.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        fav = row["language"]
        if fav == "Scratch":
            Scratch += 1
        elif fav == "C":
            C += 1
        elif fav == "Python":
            Python += 1

print(f"Scratch: {Scratch}")
print(f"C: {C}")
print(f"Python: {Python}")
