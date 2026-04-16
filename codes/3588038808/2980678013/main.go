package main
import "fmt"

func main(){
  
  var ladoA int
  var ladoB int
  var ladoC int 

  fmt.Scan(&ladoA)
  fmt.Scan(&ladoB)
  fmt.Scan(&ladoC)
  
      if((ladoA + ladoB) > ladoC) && ((ladoA + ladoC) > ladoB) && ((ladoB + ladoC) > ladoA){
        
        if(ladoA == ladoB) && (ladoB == ladoC){
                 fmt.Println("EQUILATERO")
                 } else{ 
                          if(ladoA != ladoC) && (ladoA != ladoB) && (ladoB != ladoC){
                              fmt.Println("ESCALENO")
                                 } else{
                                            fmt.Println("ISOCELES")                         
                                         } 
                         }
       } else{    
              fmt.Println("NAO FORMA")
            }
  


  
}
