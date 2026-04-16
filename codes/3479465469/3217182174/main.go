package main
import "fmt"

func main(){
  var letterA float64
  var letterB float64
  var letterC float64
  var letterD float64
  var letterE float64
  var letterF float64
  var letterX float64
  var letterY float64
  var letterZ float64 
  fmt.Scanln(&letterA)
  fmt.Scanln(&letterB)
  fmt.Scanln(&letterC)
  fmt.Scanln(&letterD)
  fmt.Scanln(&letterE)
  fmt.Scanln(&letterF)

  letterZ = letterA * letterE - letterB * letterD
  letterX = letterC * letterE - letterB * letterF 
  letterY = letterA * letterF - letterC * letterD

  if(letterX/letterZ != letterX/0 && letterY/letterZ != letterY/0){
    fmt.Printf(letterX/letterZ)
    fmt.Println(letterY/letterZ)
  } else{
    fmt.Println("Nao tem solucao")
  }
 
}