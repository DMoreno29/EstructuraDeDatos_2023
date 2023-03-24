
km = int(input())
codigos = list(map(int, input().split(" ")))
codigos.sort()

nro = int(input())
for x in range(nro):
    cod = list(map(int, input().split(" ")))
    ind1 = codigos.index(cod[0])
    ind2 = codigos.index(cod[1])
    print(f'{abs(ind1 - ind2)} kms')

    

