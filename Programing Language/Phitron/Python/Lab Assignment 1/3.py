import pyjokes
def tell_some_jokes():
    print(pyjokes.get_joke())
 
ch = input("Do you want to have a joke : (Y/N) ")
while ch=='Y' or ch=='y':
    if(ch=='Y' or ch=='y'):
        tell_some_jokes()
    ch = input("Do you want to have a joke : (Y/N) ")
