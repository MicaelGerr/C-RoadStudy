package main
import(
  "fmt"
 
)

func main(){
  var length int 
  var cont int 
  var vector[] int
  var even int 
  var odd int 

  
  fmt.Scanln(&length)
  vector = make([]int, length)
  
  for cont=0; cont<length; cont++{
    fmt.Scan(&vector[cont])
    if(vector[cont]%2==0){
      even = even +1
    }else{
      odd = odd +1
    }
  }
  fmt.Println("pares:",even,"\nimpares:", odd)
  /*for cont=0; cont<length; cont++{
    fmt.Println(vector[cont])
  }
  fmt.Println("")
  */
}