arr = [98, 115, 97, 97, 101, 125, 96, 118, 35]
decoded = [chr(x ^ 0x12) for x in arr]
print(''.join(decoded))


