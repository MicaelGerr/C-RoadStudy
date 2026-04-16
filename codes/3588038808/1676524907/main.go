package main

import "fmt"
import "math"

func main(){
  var altura float64
  var largura float64
  var comprimento float64 
  var consume float64 
  var liters float64 
  var time float64
  
  fmt.Scanln(&altura)
  fmt.Scanln(&largura)
  fmt.Scanln(&comprimento)
  fmt.Scanln(&consume)
  
  liters = math.Round((altura * largura * comprimento*0.01))
  liters = liters * 0.1
  time = math.Round(((float64(liters)/float64(consume))*10))*0.1
  
  
  fmt.Println("Capacidade do reservatorio=",liters,"litros")
  fmt.Println("Autonomia do reservatorio=",time,"dias")
  fmt.Print("Consumo ")
  
  if(time<2){
    fmt.Println("Elevado")
  }else{ if(time < 8){
              fmt.Println("Moderado")
                } else{
                     fmt.Println("Reduzido")
                  }
       }
}