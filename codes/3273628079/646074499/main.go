package main
import "fmt"

func main(){
  var values[10] int 
  var cont int

  for cont = 0; cont<10; cont++  {
    fmt.Scanln(&values[cont])
   
  }  
  
   for cont = 9; cont >= 0; cont-- {
    fmt.Print(values[cont]," ")
   
  }  
  fmt.Println("")
}

