package main
import "fmt"

func main(){
  var vector [11] int 
  var cont int
  var founded bool

  founded = false
  for cont=0; cont<11; cont++{
    fmt.Scan(&vector[cont])
  }
  for cont=0; cont<10; cont++{
    if(vector[10] == vector[cont]){
      founded = true
    }   
  }
  if(founded){
    fmt.Println("achou")
  }else{
    fmt.Println("nao achou")
  }
  
}