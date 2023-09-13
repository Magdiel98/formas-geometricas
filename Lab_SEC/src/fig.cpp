#include <iostream>
#include <string> 
#include "../include/fig.h"
#include "../include/cal.h"
using std::cout;
using std::cin;
using std::endl;
using std::string; 

void analisar(int argc, char *argv[])
{
	string str1(argv[1]);

	if(!(str1.compare("triângulo"))||!(str1.compare("retângulo"))
	||!(str1.compare("quadrado"))||!(str1.compare("círculo")))
	{
		calculoPlano(argc, argv); //Se for plana 	 
	}
	else if(!(str1.compare("pirâmide"))||!(str1.compare("cubo"))
	||!(str1.compare("paralelepípedo"))||!(str1.compare("esfera")))
	{
		calculoEspacial(argc, argv); //Se for espacial
	} 


}
