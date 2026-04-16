package main
import "fmt"

func main(){
  var value0 int 
  var value1 int 
  fmt.Scanln(&value0, &value1)

  if((value0+value1)== 42) {
    fmt.Println("A soma de", value0,"e", value1, "eh equivalente ao enigma do universo 42")
  }
  fmt.Println("System Down")
  
}