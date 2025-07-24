
import csv
file = open("phonebook.csv", "a")

for i in range(3):
    name = input("name: ")
    phone = input("phone: ")

    writer = csv.writer(file)
    writer.writerow([name, phone])

file.close()

print("the csv fiel is in hello folder")