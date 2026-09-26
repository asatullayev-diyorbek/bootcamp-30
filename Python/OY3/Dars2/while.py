# son = int(input("Sonni kiriting: "))
# raqamlar_yigindisi = 0

# while son > 0:
#     raqamlar_yigindisi += son % 10
#     son = son // 10

# print(raqamlar_yigindisi)


# cheksiz sikl

login = "admin"
parol = "4321"
urinishlar = 5

while True:
    l = input("Login: ")
    p = input("Parol: ")

    if l == login  and p == parol:
        break

    print("❌ Login yoki parol xato")

    urinishlar -= 1
    if urinishlar == 0:
        break

if urinishlar == 0:
    print("Urinishlar soni ortib ketdi")
else:
    print("✅ Tizimga xush kelibsiz!") 