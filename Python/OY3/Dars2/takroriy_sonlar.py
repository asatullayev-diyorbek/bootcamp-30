numbers = [ 2, 5, 2, 8, 5, 9, 2, 8, 10]
tekshirildi = []

for son in numbers:
    count = 0
    if son in tekshirildi:
        continue

    for i in numbers:
        if son == i:
            count += 1
            
    tekshirildi.append(son)
    print(f"{son} -> {count} marta")