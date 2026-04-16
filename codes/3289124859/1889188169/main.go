package main
import "fmt"

func main(){
  var cont int 
  fmt.Scanln(&cont)
  for cont = cont; cont>0; cont-- {
    fmt.Println(cont)
  }
  fmt.Println("Fim da contagem regressiva!")
}