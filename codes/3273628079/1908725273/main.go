package main
import "fmt"
func main(){
  var values[10] int 
  var i int
  for i =  range 10 {
    fmt.Scanln(&values[i])
   
  }  
  for i = range 10 {
    fmt.Print(values[i]," ")
   
  }  
  fmt.Println("")
}

