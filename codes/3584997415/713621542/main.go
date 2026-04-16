package main
import "fmt"

func main(){
  var valor1 int 
  var valor2 int 

  fmt.Scanln(&valor1, &valor2)

  if((valor1%valor2)==0 || (valor2%valor1)==0){
    fmt.Println("Numero", valor2,"eh multiplo de", valor1)
  }
  fmt.Println("The last mission is over")
}