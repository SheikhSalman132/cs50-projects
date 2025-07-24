
def main(): 
           get_hight()


def get_hight():
                 while True:
                         try:
                             x = int(input("X:"))
                             y = int(input("Y:"))
                             if x <= 0 or y <= 0:
                                raise ValueError 
                                return x,y
                         except ValueError:
                                         print("give true value ")       

  



main()