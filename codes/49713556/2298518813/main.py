def insertion(lis):
  print(lis)
  for i in range (1, len(lis)):
    prox = lis[i]
    j = i-1
    while j>=0 and lis[j]> prox:
      if lis[j+1] != lis[j]:
        lis[j+1] = lis[j]
        print(lis)
      j -= 1
    if j+1 != i:
      lis[j+1] = prox
      print(lis)

lis = eval(input())
insertion(lis)