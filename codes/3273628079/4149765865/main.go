package main
import "fmt"

func main(){
  var vector [15] int 
  var cont int
  var biggest int 
  var smallest int 
  var indiceB int 
  var indiceS int 

  indiceB = 0
  indiceS = 0
  
  for cont=0; cont<15; cont++{
    fmt.Scan(&vector[cont])
  }
  biggest = vector[0]
  smallest = vector[0]
  for cont=1; cont<15; cont++{
    if(biggest<vector[cont]){
     biggest = vector[cont]
      indiceB = cont
    }
    if(smallest > vector[cont]){
      smallest = vector[cont]    
      indiceS = cont
    }
  }
  fmt.Println("maior:",  indiceB)
  fmt.Println("menor:",  indiceS)
}

//Era o indice po