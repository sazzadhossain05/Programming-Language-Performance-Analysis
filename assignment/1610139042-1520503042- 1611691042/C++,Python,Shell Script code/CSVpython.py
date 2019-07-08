import csv
def menu():
        
    print("Press 1 to Search by industry")
    print("Press 2 to Search by level")
    print("Press 3 to Search by line_code")
    print("Press 4 to Search by value")
    
    choice = input()
    if choice == "1":  
        industry_input = input("Enter industry:")
        with open('data1.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if industry_input == row[1]:
                    print(row)

    
    if choice == "2":  
        level_input = input("Enter level:")
        with open('data1.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if level_input == row[2]:
                    print(row)

    if choice == "3":  
        line_code_input = input("Enter line_code:")
        with open('data1.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if line_code_input == row[3]:
                    print(row)

    
    if choice == "4":  
        value_input = input("Enter value:")
        with open('data1.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if value_input == row[4]:
                    print(row)
menu()