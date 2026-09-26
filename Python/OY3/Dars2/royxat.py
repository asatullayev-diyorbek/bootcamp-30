# # array, massiv => ro'yxat
# # sonlar = [4, 6, 2, 7, 2, 5]

# # print(sonlar)
# # print(*sonlar)
# # print(sonlar[::-1])

# # for i in sonlar:
# #     print(i)

# # # sonlar.sort(reverse=True)
# # sonlar.reverse()
# # print(sonlar)

# # print(sonlar.count(2))

# # # oxiriga yangi element qo'shish
# # sonlar.append(8)
# # print(sonlar)

# # sonlar.insert(3, 13)
# # print(sonlar)

# # yangi_sonlar = sonlar.copy()
# # print(yangi_sonlar)

# # yangi_sonlar[3] = 17
# # print(yangi_sonlar)
# # print(sonlar)


# sonlar = [4, 6, 2, 7, 2, 5]
# yoshlar = [14, 15, 17,19, 10]

# sonlar.extend(yoshlar)
# print(sonlar)
# print(len(sonlar))

# kesilgan = sonlar.pop(6)
# print(sonlar)
# print(kesilgan)


# # remove - qiymat bo'yicha o'chiradi
# sonlar.remove(6)
# print(sonlar)

# # del - index bo'yicha o'chiradi
# print(sonlar)
# del sonlar[5]
# print(sonlar)


# sonlar.clear()
# print(sonlar)

sonlar = []

for i in range(5):
    son = int(input("Sonni kiriting: "))
    sonlar.append(son)

print(sonlar)
print(sum(sonlar))
print(max(sonlar))
print(min(sonlar))