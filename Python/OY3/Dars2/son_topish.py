import random

secret = random.randint(1, 100)

while True:
    son = int(input("Taxminingizni kiriting: "))

    if son < secret:
        print("Kattaroq son kiriting")
    elif son > secret:
        print("Kichikroq son kiriting")
    else:
        print("🎉 Topdingiz")
        break
