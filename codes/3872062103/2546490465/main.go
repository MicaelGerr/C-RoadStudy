package main
import "fmt"

func main(){
  var vetor [][]int
  var cont int 
  
  vetor = make([][]int, 3)
  for cont=0; cont<len(vetor); cont++{
    vetor[cont] = make([]int, 3)
  }
  recebeValores(vetor)
  fmt.Println(diffMaiorMenorMatriz(vetor))
  
}

func recebeValores(vetor[][]int){
  var conti int 
  var contj int 

  for conti = 0; conti<len(vetor);conti++{
    for contj = 0; contj<len(vetor);contj++{
      fmt.Scan(&vetor[conti][contj])
    }
  }
}

func diffMaiorMenorMatriz(vetor[][]int)int {
  var conti int 
  var contj int 
  var maiorValor  int 
  var menorValor  int 

  maiorValor = vetor[0][0]  
  menorValor = vetor[0][0]
  
  for conti = 0; conti<len(vetor);conti++{
    for contj = 0; contj<len(vetor);contj++{
      if menorValor>vetor[conti][contj]{
        menorValor = vetor[conti][contj]
      }
      if maiorValor<vetor[conti][contj]{
        maiorValor = vetor[conti][contj]
      }  
    }
  }
  return (maiorValor-menorValor)
}