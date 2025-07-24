import sys 


names= ["salman", "ali", "umer", "furqan"]
name = input("NAME ")
for n in names:
               if name == n :
                print("found")
                sys.exit(0)

print("name not found")