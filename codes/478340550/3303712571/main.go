package main
import "fmt"

func main(){
  var vector0[10] int 
  var vector1[10] int 
  var cont int 
  var legendaryProdutoEscalar int //Esse nome é extremamente necessário 
  
  for cont = 0; cont<10;cont++ {
    fmt.Scan(&vector0[cont])
  }
  for cont = 0; cont<10;cont++ {
    fmt.Scan(&vector1[cont])
  }
  for cont = 0; cont<10; cont++{
    legendaryProdutoEscalar = legendaryProdutoEscalar + (vector0[cont]*vector1[cont])
  }
  fmt.Println(legendaryProdutoEscalar)
}

