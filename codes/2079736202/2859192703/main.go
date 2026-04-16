package main
import "fmt"

func main(){
  var size int 
  var matriz [][]int 
  var cont int 
  var cont1 int 
  var coluna int
  var linha int 
  var trocador int 
  var troca bool 
  
  fmt.Scan(&size)
  matriz = make([][]int, size)
  for cont = 0; cont<size; cont ++{
    matriz[cont] = make([]int,size)
  }
  for cont = 0; cont<len(matriz);cont++{
    for cont1 = 0; cont1<len(matriz[cont]); cont1++{
      fmt.Scan(&matriz[cont][cont1]) 
    }
  }
  fmt.Println("Matriz A")
  for cont = 0; cont<len(matriz);cont++{
    for cont1 = 0; cont1<len(matriz[cont]); cont1++{
      fmt.Print(matriz[cont][cont1]," ") 
    }
    fmt.Println("")
  }
  for coluna = 0; coluna<len(matriz);coluna++{
    for linha = 0; linha<len(matriz[coluna]); linha++{
      //fmt.Scan(&matriz[cont][cont1])
      if coluna == linha {
        troca = true 
      }
      if troca {
        trocador = matriz[linha][coluna]
        matriz[linha][coluna] = matriz[coluna][linha]
        matriz [coluna][linha] = trocador 
      }   
    }
    troca = false 
  }
  fmt.Println("Matriz Transposta")
  for cont = 0; cont<len(matriz);cont++{
    for cont1 = 0; cont1<len(matriz[cont]); cont1++{
      fmt.Print(matriz[cont][cont1]," ") 
    }
    fmt.Println("")
  }
  
}
