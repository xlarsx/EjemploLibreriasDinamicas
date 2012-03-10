#include <iostream>
#include "libreria.h"

int main(int argc, char ** argv)  {
  std::cout << "Hola Mundo" << std::endl;
  int resultado = sumar(10, 20);
  std::cout << "Resultado de " << 10 << " + " << 20 << " = " << resultado << std::endl;
  return 0;
}
