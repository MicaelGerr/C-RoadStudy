package main 
import "fmt"
func main(){
  
  var values[10] int 
  var cont int 
  var somaPrimo int 
  var primo bool 
  var cont1 int 
  
  for cont = 0; cont<10; cont++{
    fmt.Scan(&values[cont])
  } // preencher os vetores e tal

  for cont = 0; cont<10; cont++{  
    primo = true
    if(values[cont]<=1){
      
    } else{
      for cont1 = (values[cont]/2); cont1>1;cont1 --{
        if(values[cont]%cont1 ==0){
           primo = false 
        }
      }
      if primo{
          somaPrimo = somaPrimo + values[cont]
      }
    }
  }
  fmt.Println(somaPrimo)
  
}