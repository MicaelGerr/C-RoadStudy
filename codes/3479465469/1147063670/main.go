/*# Teste seu código aos poucos.
# Não teste tudo no final, pois fica mais difícil de identificar erros.
# Use as mensagens de erro para corrigir seu código.*/
package main

import "fmt"
import "math"

func main(){
  var distance float64
  var angle float64
  var pigDistance float64 
  var speed float64
  var shot float64
    
  fmt.Scanln(&speed)
  fmt.Scanln(&angle) //<- tá em graus
  fmt.Scanln(&pigDistance)
  
  angle = math.Sin(2*(angle*math.Pi/180.0)) //<
  distance = speed*speed*angle/9.8
  shot = math.Abs(distance - pigDistance) //valor escalar, módulo slr 
    
  if(shot< 1.0){
    fmt.Println("sim")
  } else{
    fmt.Println("nao")
  }
    
}
