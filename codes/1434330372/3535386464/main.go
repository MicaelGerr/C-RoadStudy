package main
import "fmt"
func main(){
  var retaIa float64
  var retaIb float64 
  var retaIc float64
  var retaId float64 

  fmt.Scanln(&retaIa)
  fmt.Scanln(&retaIb)
  fmt.Scanln(&retaIc)
  fmt.Scanln(&retaId)

  if(retaIa<retaIb && retaIc < retaId){
    if(retaIc<retaIb){
      fmt.Println("Ha intersecao")
    } else{
      fmt.Println("Nao ha intersecao")
    }
  } else{
    fmt.Println("Entradas invalidas")   
  }

}