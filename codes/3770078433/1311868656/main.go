package main
import "fmt"
// o algoritmo deve fazer a proporção
func main(){
  var aco float64
  var ferro float64
  var niquel float64
  var cromo float64
  fmt.Scanln(&ferro)
  aco = ferro*100/74
  niquel = aco*0.08
  cromo = aco*0.18
  fmt.Printf("%.2f",cromo)
  fmt.Println("")
  fmt.Printf("%.2f",niquel)
  fmt.Println("")
}

/* regra de tres insana  rs
 ferro - 74 
 aço - 100


 ferro*100% = aço* 74%
 aço = ferro * 100/74

*/