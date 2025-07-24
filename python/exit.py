import sys 

if len(sys.argv) < 2:
   print("cLI missing ")
   sys.exit(1)

name = ' '.join(sys.argv[1:])
first_name = name.split()[0]
print(f"AOA {name} ")

sys.exit(0)