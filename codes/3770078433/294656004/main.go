package main
import "fmt"

func main(){ 
  var vector [7]int
  var cont int 
  var indiceDoMaior int
  var indiceSegundoMaior int 
  for cont = 0; cont<len(vector); cont++{
    fmt.Scan(&vector[cont])
  }
  indiceDoMaior = 0
  indiceSegundoMaior = 0
  for cont = 0; cont<len(vector); cont++{ //<= saber o maior e tal
    if vector[indiceDoMaior]< vector[cont]{
      indiceDoMaior = cont
    }
  }
  if(indiceDoMaior==0){
    indiceSegundoMaior = indiceSegundoMaior+1
  }
  for cont = 0; cont<len(vector); cont++{ //
    if indiceDoMaior != cont && vector[indiceSegundoMaior]< vector[cont] { //maior sem levar em consideracao o indiceMaior
      indiceSegundoMaior = cont 
    }
  }
  fmt.Println(vector[indiceDoMaior])
  fmt.Println(vector[indiceSegundoMaior])
}

/*Anotação pra tentar me iluminar 
 *o vetor deve ter 7 componentes 
 *todos os valores são inteiros(negatico e positico lá )


 *CASOS que essa lógica vai por saco 
 1  0 0 0 0 0 0
 saida = 1 1 

*/