package main
import "fmt"

func main(){
  var num1 int 
  var luckyNumber int 

  fmt.Scanln(&num1)
  fmt.Scanln(&luckyNumber)
  
  if(num1 == luckyNumber){
    fmt.Println("Ganhou R$ 100.000,00")
  } else{
    if(num1/10) == (luckyNumber/10) && (num1%10) == (luckyNumber%10) ||
      (num1/10) == (luckyNumber%10) && (num1%10) == (luckyNumber/10){
        fmt.Println("Ganhou R$ 50.000,00")
    }else{
      if(num1/10 == luckyNumber/10 || luckyNumber/10 == luckyNumber%10 ||
         num1%10 == luckyNumber/10 || luckyNumber%10 == num1%10){
        fmt.Println("Ganhou R$ 1.000,00")  
      } else{
        fmt.Println("Perdeu")
      }
    }
  }
  
}