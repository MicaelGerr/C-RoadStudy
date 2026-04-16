package main

import "fmt"
import "math"

func main(){
  var salario float64
  var desc float64
  var trunc float64

  fmt.Scanln(&salario)

  if(salario<=1659.38){
    desc = salario * 8.0/100.0
  }else{
    if(salario <=2765.66){
      desc = salario * 9.0/100.0
    }else{
      if(salario<=5531.31){
        desc = salario * 11.0/100.0
      }else{
        desc = 608.44
      }
    }
  }
  salario = salario - desc
  salario = impostoDeRenda(salario)
  trunc = math.Trunc(salario)
  trunc = (salario - trunc)*10
  fmt.Print("Salario liquido = R$ ")
  if(trunc>0){
    fmt.Printf("%.2f\n",salario)
  }else{
    fmt.Printf("%.1f\n",salario)
  }
}

func impostoDeRenda( salary float64 ) float64 {
  
  var desc float64
  if(salary<=1903.98){ //isento
    desc = 0
  }else{
    if(salary<=2826.65){
      desc = salary * 7.5/100.0
    }else{
      if(salary<=3751.06){
        desc = salary * 15/100.0
      }else{
        if(salary<=4664.68){
          desc = salary * 22.5/100.0
        }else{
          desc = salary * 27.5/100.0
        }
      }
    }
  }
  salary = salary - desc
  return salary
}