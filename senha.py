import random

min = "abcdefghijklmnopqrstuvwxyz"
mai = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
num = "0123456789"
sim = "&#@%[]{}()*/;,.-_"

all = min + mai + num + sim
tamanho = 20
senha = "".join(random.sample(all, tamanho))

print(senha)
