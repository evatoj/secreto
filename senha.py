import random

min = "abcdefghijklmnopqrstuvwxyz"
mai = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
num = "0123456789"
sim = "&#@%[]{}()*/;,.-_"

all = min + mai + num + sim
length = 20
password = "".join(random.sample(all, length))

print(password)
