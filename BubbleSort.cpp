#include <iostream>

int main()
{
  int array[100], n, i, d, swap;
  	std::cout<<"Ingresa el número de elementos:"<<std::endl;
	std::cin>>n;

	std::cout<<"Ingresa los datos"<<std::endl;
 
  for (i = 0; i < n; i++)
	std::cin>>array[i];
 
  for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (d = 0 ; d < n - i - 1; d++)
    {
      if (array[d] > array[d+1]) //Aquí hace la comparación
      {
        swap       = array[d];	 //Intercambio1
        array[d]   = array[d+1]; //Recorrido
        array[d+1] = swap;	 //Intercambio2
      }
    }
  }
 
  std::cout<<"La lista en orden ascendente es:"<<std::endl;
 
  for ( i = 0 ; i < n ; i++ )
	std::cout<<array[i]<<std::endl;
 
 return 0;
}
