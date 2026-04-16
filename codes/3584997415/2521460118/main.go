package main
import "fmt"

func main(){
  var numeroX int 
  var numeroY int
  
  fmt.Scanln(&numeroX, &numeroY)
  if(numeroX<numeroY){
    fmt.Println("Numero", numeroX ,"eh menor que", numeroY)
  } else {
    fmt.Println("Numero", numeroY,"eh menor que", numeroX)
  }
  
}