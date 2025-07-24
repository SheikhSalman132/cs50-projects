def main():
    x, y = value()
    compare(x, y)

def value():
    x = input("X: ")
    y = input("y: ")
    return x, y

def compare(x, y):
    if x == y:
        print("both are equal")
    else:
        print("not equal")

main()
