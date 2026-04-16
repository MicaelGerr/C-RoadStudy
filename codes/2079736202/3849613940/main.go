package main
import "fmt"

func main(){
  var valor int 
  var multiplicador int 

  fmt.Scan(&valor)
  fmt.Scan(&multiplicador)
  fmt.Println(multiplica(multiplicador,valor))
}


func multiplica(value int,number int) int {
  var result int 
  value = value - 1
  if value == 0{
    result = number
  } else{
    result = multiplica(value,number) 
    result = number + result 
  }
  return result 
}