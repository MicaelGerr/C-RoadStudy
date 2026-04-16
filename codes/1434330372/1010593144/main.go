package main 
import "fmt"

func main(){
  var py0 float64
  var px0 float64
  var px1 float64
  var py1 float64
  var px2 float64
  var py2 float64
  var result float64

  fmt.Scanln(&px0)
  fmt.Scanln(&py0)
  fmt.Scanln(&px1)
  fmt.Scanln(&py1)
  fmt.Scanln(&px2)
  fmt.Scanln(&py2)
  
  result = (px1 - px0) * (py2 - py0) - (px2 - px0) * (py1 - py0)
  
  if(result<0){
    fmt.Println("A direita da reta")
  }else{
    if(result>0){
      fmt.Println("A esquerda da reta")
    }else{
      fmt.Println("Sobre a reta")
    }
  }
}