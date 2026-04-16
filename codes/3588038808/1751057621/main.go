package main
import "fmt"

func main(){
  var age int 
  fmt.Scanln(&age)
  if(age < 16){
    fmt.Println("nao votante")
  } else {
            if(age >= 16 && age < 18) ||  age > 64 {
              fmt.Println("eleitor facultativo")
            } else{
                      if(age >= 18 && age <= 64 ){
                        fmt.Println("eleitor obrigatorio")  
                      }
                  }
          }
}