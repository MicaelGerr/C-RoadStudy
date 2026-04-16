//Teste seu código aos poucos.
//Não teste tudo no final, pois fica mais difícil de identificar erros.
//Use as mensagens de erro para corrigir seu código. --> notas do professor eu acho 

//Joga no peito aqui que é sucesso 
//vesfera - vvalota -> gasolina volume
package main
import "fmt"
import "math"

func main(){
  var radius float64
  var height float64
  var airVol float64
  var ballArea float64
  var option int 
  var gasolineVol float64
  
  fmt.Scanln(&radius)
  fmt.Scanln(&height)
  fmt.Scanln(&option)
  
  ballArea = (math.Pi*4* radius*radius*radius) / 3.0
  airVol = (math.Pi * height * height*(3*radius - height))/3.0
  if(option==1){
    fmt.Println(math.Round(airVol*10000.0)/10000.0)
  }else{
    gasolineVol = ballArea-airVol
    fmt.Println(math.Round(gasolineVol*10000.0)/10000.0)
    
  }
  
}