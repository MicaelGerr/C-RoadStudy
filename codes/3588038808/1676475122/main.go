package main
import "fmt"

func main(){
  var a int
  var b int 
  var c int 

  fmt.Scanln(&a, &b, &c)

  
  if(a>b){ 
      if(b>c){  
        fmt.Println(a,b,c) //abc
      } else { 
               if(a>c){
                   fmt.Println(a, c, b)//acb
                 }else{fmt.Println(c,a,b)} // cab
            }
  } else{ 
          if(a>c){           
            fmt.Println(b,a,c) //bac
            } else{
                   if(b>c){ 
                     fmt.Println(b,c,a)//bca
                      } else{ fmt.Println(c,b,a) //cba
                                  }
                  } //a menor
      }
  
}