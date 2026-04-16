package main
import "fmt"

func main(){
  var matriz [10]int 
  var cont int 
  var value int 
  var achou bool
  
  for cont= 0; cont<10; cont++{
    fmt.Scan(&matriz[cont])
  }
  fmt.Scan(&value)
  for cont= 0; cont<10; cont++{
    if matriz[cont] == value{
      achou = true
    }
  }
  if achou {
    fmt.Println("achou")
  }else{
    fmt.Println("nao achou")
  }
}