package main
import "fmt"

func main(){
  var tamanho int 
  var word string 

  fmt.Scan(&word)
  
  tamanho = len(word)
  word = jogoDaVelhaString(word,tamanho)
  fmt.Println(word)
}

func jogoDaVelhaString(enletramento string,size int)string {
  var palavra string 
  var letraPassada string 
  var letraLetra string 
  size = size-1
  if(size == 0){
    palavra = string(enletramento[size])
  }else{
    palavra = jogoDaVelhaString(enletramento,size)
    letraLetra = string(enletramento[size]) // a volta começa aqui po slk te digo verdade 
    if(size != 0){
      letraPassada = string(enletramento[size-1])
    }
    if(letraPassada == letraLetra){
      palavra = palavra +"#"+string(enletramento[size])  
    }else{
       palavra = palavra + string(enletramento[size]) 
    }
  }
  
  return palavra 
}





/*
func main(){
  var palavraTerminal string 
  var cont int 
  var letter string
  palavraTerminal = "Hello"
  for cont = 0;cont<len(palavraTerminal);cont++{
    letter = string(palavraTerminal[cont])
    fmt.Println(letter)
  }
} //metodo interativo(preciso disso pra me guiar :( ) */
