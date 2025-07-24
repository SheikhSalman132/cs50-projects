import sys 


names= ["salman", "ali", "umer", "Ahmad"]
name = input("NAME ")
for n in names:
               if name == n :
                print("found")
                sys.exit(0)

print("name not found")
