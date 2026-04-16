package main
import "fmt"

func main(){
  var password int 
  var numbers []int 
  numbers = make([]int,4)
  fmt.Scanln(&password)

  numbers[0] = password/1000
  numbers[1] = (password/100)%10
  numbers[2] = (password/10)%10
  numbers[3] = password%10

  if  (numbers[0]+numbers[2])%(numbers[1]+numbers[3]) == 0{
    fmt.Println("liberado")
  }else{
    fmt.Println("negado")
  }
  
}