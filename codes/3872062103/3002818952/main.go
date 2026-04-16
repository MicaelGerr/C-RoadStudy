package main
import "fmt"

func main(){
  var vetor []int
  var cont int 
  var leitura bool
  
  vetor = make([]int,11)
  leitura  = true 
  for cont = 0; cont<len(vetor); cont++{
    fmt.Scan(&vetor[cont])
  }
  
  for cont = 0; cont<len(vetor);cont++{
    if leitura{
      if posicaoVetor(vetor,cont) == 5{
        fmt.Println(vetor[cont])
        leitura = false 
      } 
    }
  }
  printVetor(vetor)

}

func printVetor(vetor []int){
  var cont int 

  for cont=0;cont<len(vetor);cont++{
    fmt.Print(vetor[cont]," ")
  }
  fmt.Println("")
}

func posicaoVetor(vetor []int,value int)int{ 
  var cont int 
  var posicao int 
  for cont = 0; cont<len(vetor); cont++{
    if vetor[value]>vetor[cont]{
      posicao = posicao +1
    } 
  }
  return posicao
}