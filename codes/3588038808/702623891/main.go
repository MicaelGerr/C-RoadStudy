package main 
import "fmt"

func main(){
  var age float32

  fmt.Scanln(&age)

  if(age < 10){
    fmt.Println("infancia")
  }else{ if( age >= 10 && age < 15){
              fmt.Println("pre-adolescencia")
            } else { if(age>= 15 && age<20){
                        fmt.Println("adolescencia")
                      }else{  if(age>= 20 && age <= 24){
                                      fmt.Println("juventude")
                                    }
                                 
                            }
    
                  }
    }
  
}