package main
import "fmt"

func main(){
  var sizeSlice int
  var superSlice []int
  var cont int 
  fmt.Scan(&sizeSlice)
  superSlice = make([]int, sizeSlice)

  for cont = 0; cont<len(superSlice); cont++{
    fmt.Scan(&superSlice[cont])
  }
  for cont = 0; cont<len(superSlice); cont++{
    numeroPerfeito(superSlice[cont])
  }
}

func numeroPerfeito(value int){
  var cont int 
  var somatorio int 

  somatorio = 0
  for cont = value/2; cont>0; cont--{   // metade pra baixo que divide     
    if value % cont == 0{
      somatorio = somatorio + cont  
    }
  }
  if somatorio == value{
    fmt.Println(value, "eh perfeito")
  } else{
    fmt.Println(value, "nao eh perfeito")
  }
}