print("Arranjo simples\nDigite o número de itens:\n")
arrN = parse(Int64, readline())
print("Agora, digite o número de grupos:\n")
arrP = parse(Int128, readline())
fatN = factorial(big(arrN))
denom = arrN - arrP
fatDenom = factorial(big(denom))
println("O resultado é ", fatN / fatDenom)