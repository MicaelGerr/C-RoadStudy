package main
import "fmt"

func main(){
  fmt.Println(fibonnaciSequencia(4,0))
  
}

func fibonnaciSequencia(indice int,cont int )int {
  var result int 
  
  
  cont = cont +1
  if(cont == indice-1){
    result = 1
    fmt.Println("oioi")
  }else{
    //eu preciso pegar o primeiro valor 1  e somar com 1 pra dar dois e somar dois com um e depis....
    result = fibonnaciSequencia(indice,cont) + fibonnaciSequencia(indice,cont) + result
    fmt.Println(result)
  }

  return result   
}
