package main
import "fmt"

func main(){
  var value int 
  var firstChar int 
  var secondChar int 
  var thirdChar int 

  fmt.Scanln(&value) //leitura de dado 
  
  firstChar = value / 100 //separação ultramega pensada dos valores uou awesome
  secondChar = ( value - (firstChar*100))/10
  thirdChar = (value - (firstChar*100) - (secondChar*10))

  if(firstChar+secondChar+thirdChar) % 2 == 0 {
    fmt.Println("Numero", value,"eh par e a soma dos seus algarismos eh ",(firstChar+secondChar+thirdChar))
  }
  fmt.Println("Bye Bye")
}