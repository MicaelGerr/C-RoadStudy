def imprime_selection(v):
  for i in range(0,len(v)):
    menor = i
    troca = False
    for j in range(i,len(v)):
      if v[menor]> v[j]:
        menor = j
        troca = True
    if troca:
      print(f"{v[i]} <-> {v[menor]}")
      troca = False
    aux = v[i]
    v[i] = v[menor]
    v[menor] = aux

  print(v)

v = eval(input())
imprime_selection(v)
