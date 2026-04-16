package main
import "fmt"

func main(){
  var vetorNotas[6] float64 //Há de excluir a maior  e menor nota
  var cont int 
  var indiceDoMaior int 
  var indiceDoMenor int 
  var media float64
  for cont = 0; cont<len(vetorNotas); cont++{
    fmt.Scan(&vetorNotas[cont])
  }
  indiceDoMaior = 0
  indiceDoMenor = 0
  for cont = 0; cont<len(vetorNotas); cont++{
    if vetorNotas[indiceDoMaior]< vetorNotas[cont]{
      indiceDoMaior = cont 
    }
    if vetorNotas[indiceDoMenor]> vetorNotas[cont]{
      indiceDoMenor = cont 
    }
    media = vetorNotas[cont] + media
  }
  media = media - vetorNotas[indiceDoMaior] - vetorNotas[indiceDoMenor]
  media = media/4.0
  fmt.Printf("Maior nota: %.2f \n", vetorNotas[indiceDoMaior])
  fmt.Printf("Menor nota: %.2f \n", vetorNotas[indiceDoMenor])
  fmt.Printf("A media eh: %.2f \n", media )
  
  
}