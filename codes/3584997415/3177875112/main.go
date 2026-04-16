package main
import "fmt"

func main(){
  var value int 
  fmt.Scanln(&value)
  if(value%2 == 0){
    fmt.Println("Numero", value, "eh par")
  }
  fmt.Println("F1m d0 Program4")
  
}