package main
import "fmt"

func main(){
  var vector[9] int 
  var cont int 
  var maiorIndice int 

  for cont = 0; cont<9;cont++{
    fmt.Scan(&vector[cont])
  }
  maiorIndice = 0
  for cont=1; cont<9;cont++{
    if(vector[maiorIndice]<vector[cont]){
      maiorIndice = cont 
    }
  }
  fmt.Println(vector[maiorIndice])
}