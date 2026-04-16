package main
import "fmt"

func main( ){

  var value0 int 
  var value1 int 
  var value2 int 
  var result float32 
  var biggest int 
  var smallest int 
  
  fmt.Scanln(&value0)
  fmt.Scanln(&value1)
  fmt.Scanln(&value2)

  result = float32(value1+value2+value0)/3.0

  if(value0>=value1 && value0 >=value2){
    biggest = value0
  }else{
    if(value1>=value0 && value1 >= value2){
      biggest = value1
    }else{
      biggest = value2
    } 
  }

  if(value0<=value1 && value0 <= value2 ){
    smallest = value0
  }else{
    if(value1<=value2 && value1 <= value0){
      smallest = value1
    }else{
      smallest = value2
    } 
  }
  

  fmt.Printf("%.1f",result)
  fmt.Println("")
  fmt.Println(value0+value1+value2)
  fmt.Println(value0*value1*value2)
  fmt.Println(smallest)
  fmt.Println(biggest)
  
  
  
}