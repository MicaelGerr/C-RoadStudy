package main
import "fmt"

func main(){
  var vetor [][] int 
  var cont int 
  vetor = make([][]int,4)
  for cont = 0; cont<len(vetor);cont++{
    vetor[cont] = make([]int,4)
  }
  receberVetor(vetor)
  
  if analisaDiagonalPrincipal(vetor){
    fmt.Println("IDENTIDADE")
  }else{
    fmt.Println("NORMAL")
  }
}


func analisaDiagonalPrincipal(vetor[][]int)bool {
  var conti int 
  var contj int 
  var diagonalTudoUm bool 
  var tudoZero bool
  
  diagonalTudoUm = true  
  tudoZero = true   
  
  for conti =0;conti<(len(vetor));conti++{
    for contj = 0; contj<(len(vetor));contj++{
      if diagonalTudoUm && tudoZero {
        if vetor[conti][contj] != 1 && conti == contj{
          diagonalTudoUm = false 
        }
        if vetor[conti][contj] != 0 && conti!=contj{
          tudoZero = false 
        }
      }
    } 
  }
  return (diagonalTudoUm && tudoZero)
}

func printVetor(vetor [][]int){
  var conti int 
  var contj int 

  for conti =0;conti<(len(vetor));conti++{
    for contj = 0; contj<(len(vetor));contj++{
      fmt.Print(vetor[conti][contj]," ")
    }
    fmt.Println("")
  }
  
}

func receberVetor(vetor[][]int){
  var conti int 
  var contj int 

  for conti =0;conti<(len(vetor));conti++{
    for contj = 0; contj<(len(vetor));contj++{
      fmt.Scan(&vetor[conti][contj])
    }

  }
  
}
