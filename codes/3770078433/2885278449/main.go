package main
import "fmt"

func main(){
  var value int 
  var cont int 
  var fatorial int 

  fmt.Scanln(&value )
  if value > 0{
    fatorial = value
    for cont = value - 1; cont>0; cont--{
      fatorial = fatorial * cont  
    }
    fmt.Print("Fatorial de ",value,": ", fatorial,"\n")
  }
}