package main
import "fmt"

func main(){
  
  var ladoA int 
  var ladoB int 
  var ladoC int

  fmt.Scanln(&ladoA)
  fmt.Scanln(&ladoB)
  fmt.Scanln(&ladoC)

  if((ladoA+ladoB) > ladoC &&
     (ladoB+ladoC) > ladoA &&
     (ladoA+ladoC) > ladoB){

    if(ladoA==ladoB) && (ladoA==ladoC){
      fmt.Println(1)
    } else{
      if(ladoA != ladoB) && (ladoA!=ladoC) && (ladoB!=ladoC){
        fmt.Println(3)
      } else{
        fmt.Println(2)
      }
    }
    
  } else{
    fmt.Println(0)
  }
}