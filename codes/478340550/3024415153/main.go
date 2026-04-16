package main
import "fmt"
/* Acho que as matrizes são 3x3 e os valores que a gente bota como entrada é o valor 
que fica na matriz toda slr, achei paia esse textinho 
*/

func main(){
  var value0 int 
  var value1 int 
  var vetorBidimensional0 [3][3]int 
  var vetorBidimensional1 [3][3]int 
  var vetorBidimensional2 [3][3]int 
  var contColuna int
  var contLinha int 

  fmt.Scan(&value0)
  fmt.Scan(&value1)
  for contColuna = 0; contColuna<3; contColuna++{
    for contLinha= 0; contLinha<3; contLinha++{
      vetorBidimensional0[contColuna][contLinha] = value0
    }
  }
  for contColuna = 0; contColuna<3; contColuna++{
    for contLinha= 0; contLinha<3; contLinha++{
      vetorBidimensional1[contColuna][contLinha] = value1
    }
  }
  for contColuna = 0; contColuna<3; contColuna++{
    for contLinha= 0; contLinha<3; contLinha++{
      vetorBidimensional2[contColuna][contLinha] = vetorBidimensional0[contColuna][contLinha] + vetorBidimensional1[contColuna][contLinha]
    }
  }
  for contColuna = 0; contColuna<3; contColuna++{
    for contLinha= 0; contLinha<3; contLinha++{
      fmt.Print(vetorBidimensional2[contColuna][contLinha]," ")
    }
    fmt.Println("")
  }
 
}