package main
import "fmt"

func main(){
  var height float32
  var height0 float32

  fmt.Scanln(&height)
  fmt.Scanln(&height0)
  
  if(height>height0){
    if(height >= 1.37 ){
      fmt.Println("Sim")
      fmt.Println(height)
    } else{
      fmt.Println("Nao")
      fmt.Println(height)
    }
  } else{ //height0>height
    if(height0 >= 1.37 ){
      fmt.Println("Sim")
      fmt.Println(height0)
    } else{
      fmt.Println("Nao")
      fmt.Println(height0)
    }
  }






}