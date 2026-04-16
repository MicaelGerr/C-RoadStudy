value = int(input())
maior = value
menor = value

for i in range(4):
  value = int(input())
  if maior<value:
    maior = value
  if menor>value:
    menor = value

print(f"{menor} {maior}")