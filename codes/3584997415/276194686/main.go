package main
import "fmt"

func main(){
  var password string  
  var adminpassword string  

  fmt.Scanln(&password)
  adminpassword = "admin"
  if(password == adminpassword){
    fmt.Println("$$$ Acesso Liberado, chave: {admin} $$$")
  }
  fmt.Println("Fim do programa")
}