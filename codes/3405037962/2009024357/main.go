package main
import "fmt"

func main(){
  var name string 
  var speedLimit int 
  var carSpeed int 
  var multa int
  
  fmt.Scanln(&name)
  fmt.Scanln(&speedLimit, &carSpeed)

  
  if(carSpeed<=speedLimit){
    multa = 0  
  }else{
    if(carSpeed  <= speedLimit + 10 ){
      multa = 50
    }else{ 
      if(carSpeed  <= speedLimit + 30){
        multa = 100
      }else{
        multa = 200
      }
    }
  }
  fmt.Println("Motorista:", name)
  fmt.Println("Multa: R$", multa)
}