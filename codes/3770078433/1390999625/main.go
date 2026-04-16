package main
import "fmt"
// implementa a função de primo separado e talz
func main(){ 
  var vetor[10] int  
  var cont int 
  var soma int 
  
  for cont = 0; cont<len(vetor); cont++{ //leitura de valores e talz
    fmt.Scan(&vetor[cont])
  }  
  for cont = 0; cont<len(vetor); cont++{ //analise incrivel pra ver se é primo 
    if(serPrimo(vetor[cont])){
      soma = soma + vetor[cont]
    }
  }
  fmt.Println(soma )
}

func serPrimo(vector int ) bool{
  var cont int 
  var primo bool 
  
  if vector > 1{
    primo = true  
    for cont = vector/2; cont>1; cont--{        
      if vector % cont == 0{
        primo = false 
      }
    }
  }  
  return primo
}