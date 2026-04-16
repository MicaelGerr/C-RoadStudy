package main
import "fmt"

func main(){
  var vector [10] int 
  var cont int
  var smallest int 
  
  for cont=0; cont<10; cont++{
    fmt.Scan(&vector[cont])
  }
  
  smallest = vector[0]
  for cont=0; cont<10; cont++{
    if(smallest > vector[cont]){
      smallest = vector[cont]    
      
    }
  }

  fmt.Println(smallest)
}