import random

min = "abcdefghijklmnopqrstuvwxyz"
mai = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
num = "0123456789"
sim = "!@#$%&*?"

combinar = min + mai + num + sim

while True:
    try:
        tamanho = int(
            input("Qual o tamanho da senha desejada?(até 20 caracteres) "))
        if 1 <= tamanho <= 20:
            break
        else:
            print("Por favor, digite um número entre 1 e 20.")
    except ValueError:
        print("Entrada inválida. Por favor, digite um número válido.")

senha = "".join(random.sample(combinar, tamanho))
print("Sua senha gerada:", senha)
