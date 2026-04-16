package main
import "fmt"

func main(){
  var vetor []int  
  var cont int 

  vetor = make([]int,7)
  for cont=0; cont<len(vetor);cont++{
    fmt.Scan(&vetor[cont])
  }
  fmt.Println(analisaPrimoVetor(vetor))
}

func analisaPrimoVetor(vetor []int)int {
  var cont int 
  var primo bool 
  var firstPrimo int 
   
  primo = false 
  for cont=0; cont<len(vetor);cont++{
    if primo { // quando achar o primeiro primo, fica aqui sem fazer nada tlgd
         
    }else{
      primo = ehPrimo(vetor[cont])
      if primo { //Prita o primeiro que for primo 
        firstPrimo = vetor[cont]
      }
    }    
  }
  if primo == false{
    firstPrimo = -1
  }

  return firstPrimo 
}

func ehPrimo(value int)(bool){
  var cont int 
  var divisible bool

  divisible = true 
  for cont=(value/2); cont>1;cont--{
    if value%cont == 0{
      divisible = false
      
    }
  }
      return divisible
}