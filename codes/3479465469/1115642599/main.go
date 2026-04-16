package main
import "fmt"

func main(){
  var value int
  var resto int 
  fmt.Scanln(&value)
  if(value>100 && value<1000){
    resto = value%100
    if(value%resto == 0){
      fmt.Println("SIM")
    }else{
      fmt.Println("NAO")
    }
  }
}
//o teste do 999 não faz sentido, 99 é devisivel por 9

  