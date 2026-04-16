def segundo_grau(a,b,c):
  delta = (b**2)-4*a*c
  if(delta < 0):
    return ""
  x1 = (-b +(delta**0.5))/(2*a)
  x2 = (-b -(delta**0.5))/(2*a)
  if(x1>x2):
    return x1
  else:
    return x2 
    
str = input("").split()
valor = segundo_grau(float(str[0]),float(str[1]),float(str[2]))
if valor == "":
  print("sem raiz real")
else:
  print(f"{valor:0.2f}")


