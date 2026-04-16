package main
import "fmt"


func main(){
  var value0 int
  var value1 int 
  var value2 int 
  var intValue int 

  fmt.Scanln(&intValue)
  value0 = intValue/100
  value1 = (intValue%100)/10
  value2 = intValue%(intValue/10)
  
  value0 = value0*value0*value0
  value1 = value1*value1*value1
  value2 = value2*value2*value2 
  fmt.Println(intValue)
  if(intValue ==(value0+value1+value2)){
  
    fmt.Println("atende")
  }else{
    fmt.Println("nao atende")
  }
}