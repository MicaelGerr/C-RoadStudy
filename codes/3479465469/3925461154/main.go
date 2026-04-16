package main
import "fmt"

func main(){
  var extraHour float32
  var absentHour float32
  var acheFactor float32 
  var gift float32
  
  fmt.Scanln(&extraHour)
  fmt.Scanln(&absentHour)
  
  acheFactor = extraHour - 0.25 * absentHour
  if(acheFactor>400){
    gift = 500.0  
  }else{
    gift = 100.0
  }
  fmt.Printf("%.1f extras e %.1f de falta", extraHour, absentHour)
  fmt.Print("\nR$ ")
  fmt.Printf("%.1f", gift)
  fmt.Println("")
  
  
}