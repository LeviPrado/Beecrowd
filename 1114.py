senhaCorreta = 2002
tentativa = 0

while tentativa != senhaCorreta:
    tentativa = int(input())

    if tentativa == senhaCorreta:
        break

    else:
        print("Senha Invalida")

print("Acesso Permitido")