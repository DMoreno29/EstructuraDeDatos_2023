
nro_casos = int(input())
for X in range(nro_casos):
    P = int(input().split(" ")[1])
    array = set(map(int, input().split(" ")))
    
    new_primos = set()
    for i in range(1, P+1):
        new_primos.add(i) if (P % i == 0) else None

    print("Es PrimiConjunto" if new_primos <= array else "No es PrimiConjunto")
    

