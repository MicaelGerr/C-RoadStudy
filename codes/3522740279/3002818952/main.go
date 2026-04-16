package main
import "fmt"

func main(){
  var vector [11] int 
  var i int 
  var j int 
  var igual int
  var menor int 
  var cont int

  for cont=0; cont<11; cont++{
    fmt.Scan(&vector[cont])
  }
    
  for i = 0; i<11; i++{ 
    menor = 0
    igual = 0
    for j = 0; j<11;j++{
      if(vector[j]<vector[i]){
        menor = menor +1
      }else{
        if(vector[j] == vector[i]){
          igual = igual + 1
        }  
      }  
    }
    
    if(igual+menor) > 5 && menor <= 5 {
      fmt.Println( vector[i])
    }
  }
 for cont=0; cont<11; cont++{
    fmt.Print(vector[cont]," ")
   
  }
  fmt.Println(" ")

}