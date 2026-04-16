package main
import "fmt"

/*fazer um sistema muito brabo, massa, incrivel que lê primeiro a quantidade de operações
a serem realizadas e depois tu decide o tipo do boi slr, entendi isso, e depois define 
o peso do boi(DE CADA BOI MESMO SENDO DA MESMA RAÇA) e talz .Se a quantidade de operações for >1 então repete isso tudo ae */

func main(){ 
  var numeroTransacoes int 
  var boi string  
  var pesoBoi float64 
  var quantidadeBoi int
  var cont int 
  var totalPesoP float64 
  var totalPesoB float64 
  var quantidadeB int 
  var quantidadeP int 
  var cont1 int 
  fmt.Scan(&numeroTransacoes)
  for cont = 0;cont<numeroTransacoes; cont++{
    fmt.Scan(&boi)
    if boi == "p"{
      fmt.Scan(&quantidadeBoi)
      for cont1 = 0; cont1<quantidadeBoi; cont1++{ 
        fmt.Scan(&pesoBoi)    
        totalPesoP = pesoBoi + totalPesoP
      }
      quantidadeP = quantidadeP + quantidadeBoi
    } 
    if boi == "b"{
      fmt.Scan(&quantidadeBoi)
      for cont1 = 0; cont1<quantidadeBoi; cont1++{
        fmt.Scan(&pesoBoi)    
        totalPesoB = pesoBoi + totalPesoB
      }
      quantidadeB = quantidadeB + quantidadeBoi
    } 
  } 
  fmt.Println("Quantidade de bois brancos:",quantidadeB)
  fmt.Printf("Peso total dos bois brancos: %.2f", totalPesoB)
  fmt.Println(" KG")
  fmt.Println("Quantidade de bois pretos:", quantidadeP)
  fmt.Printf("Peso total dos bois pretos: %.2f", totalPesoP)
  fmt.Println(" KG")
  
}