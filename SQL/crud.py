def crud():
    print("CRUD Options:")
    print("C - Create / Insert")
    print("R - Read")
    print("U - Update")
    print("D - Delete")

    option = input("Choose (C/R/U/D): ").upper()
    actions = {
        "C": "Create / Insert",
        "R": "Read",
        "U": "Update",
        "D": "Delete"
    }
    print(actions.get(option, "Invalid input."))

def functions():
    print("\nSQL Functions and Keywords (A to Z):")
    print("AVG: Returns the average value.")
    print("COUNT: Counts the number of rows.")
    print("DISTINCT: Selects only distinct (different) values.")
    print("GROUP BY: Groups rows that have the same values.")
    print("LIKE: Searches for a specified pattern in a column.")
    print("LIMIT: Specifies the number of records to return.")
    print("LOWER: Converts a field to lowercase.")
    print("MAX: Returns the largest value.")
    print("MIN: Returns the smallest value.")
    print("ORDER BY: Sorts the result-set.")
    print("UPPER: Converts a field to uppercase.")
    print("WHERE: Filters records based on a condition.")

def main():
    print("Choose one: CRUD or FUNCTIONS")
    choice = input("Type 'crud' or 'fun': ").strip().upper()

    if choice == "CRUD":
        crud()
    elif choice == "FUN":
        functions()
    else:
        print("Invalid choice.")

if __name__ == "__main__":
    main()
