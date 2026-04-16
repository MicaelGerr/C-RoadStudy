def busca_binaria_logica(v,k,inicio,fim, lista_passos):
  meio = (inicio + fim)//2
  

  if inicio > fim:
    return -1
  lista_passos.append(v[meio])
  
  if k < v[meio]:
    busca_binaria_logica(v,k,inicio, meio-1, lista_passos)
  if k > v[meio]:
    busca_binaria_logica(v,k, meio+1,fim, lista_passos)
  

def busca_binaria(v,k):
  
  for i in range((len(k))):
    inicio = 0
    fim = len(v)-1
    lista_passos = [] 
    busca_binaria_logica(v,k[i],inicio,fim, lista_passos)
    print(lista_passos)


v = eval(input())
keys = eval(input())
busca_binaria(v,keys)
  
    

  