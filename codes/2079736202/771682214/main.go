package main
import "fmt"

func main(){
  var matriz[3][3] int 
  var cont int 
  var cont1 int
  var diagonalPrincipal int 
  var diagonalSecundaria int 
  for cont = 0; cont<len(matriz);cont++{
    for cont1 = 0; cont1<len(matriz[cont]); cont1++{
      fmt.Scan(&matriz[cont][cont1]) 
    }
  }
  for cont =0;cont<len(matriz); cont++{
    diagonalPrincipal = matriz[cont][cont] + diagonalPrincipal 
    fmt.Print(matriz[cont][cont]," ")
  }
  fmt.Println(" ")
  for cont = (len(matriz)-1);cont>=0; cont--{
    for cont1 =0;cont1<len(matriz); cont1++{
      if(cont1 + cont)==2{
        diagonalSecundaria = matriz[cont1][cont] + diagonalSecundaria 
        fmt.Print(matriz[cont1][cont]," ")
      }
    }
  }
  fmt.Println(" ")

  fmt.Println(diagonalPrincipal- diagonalSecundaria)
}