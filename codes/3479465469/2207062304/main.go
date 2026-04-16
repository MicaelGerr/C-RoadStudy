package main
import "fmt"
func main(){
  var a int 
  var b int 
  var c int 

  fmt.Scanln(&a)
  fmt.Scanln(&b)
  fmt.Scanln(&c)
  
  if(a>b){
    if(a>c){
      if(b>c){
        if(a>b+c){fmt.Println("NAO")}else{fmt.Println("SIM")}
      } else {
        if(a>c+b){fmt.Println("NAO")}else{fmt.Println("SIM")}
      }
    }else{
      if(c>a+b){fmt.Println("NAO")}else{fmt.Println("SIM")}
    }
  }else{//b>a
    if(b>c){
      if(a>c){
        if(b>a+c){fmt.Println("NAO")}else{fmt.Println("SIM")}
      }else{
        if(b>c+a){fmt.Println("NAO")}else{fmt.Println("SIM")}
      }
    }else{
      if(c>b+a){fmt.Println("NAO")}else{fmt.Println("SIM")}
    }
  }
  
}