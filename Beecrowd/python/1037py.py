num = float(input())
if(num >= 0):
    if(num >= 0 and num <= 25): 
        print("Intervalo [0,25]")
    if(num > 25 and num <= 50): 
        print("Intervalo (25,50]")
    if(num > 50 and num <= 75): 
        print("Intervalo (50,75]")
    if(num > 75 and num <= 100): 
        print("Intervalo (75,100]")
if(num > 100 or num < 0):
        print("Fora de intervalo")