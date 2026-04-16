package main
import "fmt"

func main(){
  var numero int
  var raisedToPower int 
  fmt.Scan(&numero)
  fmt.Scan(&raisedToPower)
  potenciaRecursiva(numero,raisedToPower)//2 elevado à 4
}

func potenciaRecursivaJuice(value int, raisedPower int)int {
  var result int 
  raisedPower = raisedPower-1
   
  if(raisedPower+1 == 1){
   result = value
  }else{
    if raisedPower+1  == 0{
      result = 1
    } else{
      result = potenciaRecursivaJuice(value, raisedPower)
      result = value * result
    }
  }

  return result
}
func potenciaRecursiva(valor int,power int){
  var result int
  var negative bool
  negative = false
  if power<0{
    power = power*(-1)
    negative = true
  }
  result = potenciaRecursivaJuice(valor,power)
  if negative{
    fmt.Println(1.0/float64(result))

  }else{
     fmt.Println(result)
    
  }
  
}