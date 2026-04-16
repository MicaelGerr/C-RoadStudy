package main
import "fmt"

func main(){
  var password int 

  var char0 int 
  var char1 int 
  var char2 int
  var char3 int 
  var addCode13 int 
  var addCode24 int 
  
  fmt.Scanln(&password)

  //Da esquerda pra direita
  char0 = password/1000 
  char1 = (password-(char0 *1000))/100
  char2 = (password - (char0 *1000) - (char1*100))/10
  char3 = (password-(char0*1000)- (char1*100)-(char2*10))

  addCode13 = char0 + char2 
  addCode24 = char1 + char3

  if((addCode13%addCode24)==0){
    fmt.Println("liberado")
  }else{
    fmt.Println("negado")
  }
}