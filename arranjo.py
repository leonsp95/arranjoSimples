def fatorial(fatInic):
    fatFinal = 1
    for cont in range(1,fatInic +1):
        fatFinal = fatFinal * cont
    return fatFinal

arrN = int(input("Arranjo simples\nDigite o número de itens:\n"))
arrP = int(input("Agora, digite o número de grupos:\n"))
fatN = fatorial(arrN)
denom = arrN - arrP
fatDenom = fatorial(denom)
print("O resultado é", fatN/fatDenom)