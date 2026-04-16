package main
import "fmt"

func main(){
  var bunnies int // coelhos incriveis
  fmt.Scan(&bunnies)
  fmt.Println(contaorelhas(bunnies+1))
  
}

func contaorelhas(coelhos int)int{ // impar -> 2 orelhas || par --> 3 orelhas
  var somatorio  int 
  coelhos = coelhos -1 
  if(coelhos == 1){
    somatorio = 2
  }else{
    somatorio = contaorelhas(coelhos)
    if coelhos%2 == 0{
      somatorio = somatorio  +3
    }else{
      somatorio = somatorio + 2
    }
  }
  return somatorio
}