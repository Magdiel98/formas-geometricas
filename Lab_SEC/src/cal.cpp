#include <iostream>
#include <string>
#include <cmath>
#include "../include/cal.h"
#define PI 3.1416

using std::cout;
using std::cin;
using std::string;
using std::endl;

//As funções fazem o cálculo e imprimem na tela dependendo da figura 

void calculoPlano(int argc, char *argv[])
{
	float area, perimetro; 

	string str(argv[1]);	
	if(!(str.compare("triângulo"))){

		//executável nome da figura altura base lado2 lado3 
		area = 0;
	        perimetro = 0;
    
		
			area = (atoi(argv[2]) * atoi(argv[3]))/2; 
			perimetro = atoi(argv[3]) + atoi(argv[4]) + atoi(argv[5]);

		cout << "Área do triângulo: " << area << endl
		     << "Perímetro do triângulo: " << perimetro << endl;  
			  
	}
	else if(!(str.compare("retângulo"))){
		//executável nome da figura altura base
		
		area = 0; 
		perimetro = 0;

		area = atoi(argv[2]) * atoi(argv[3]); 
		perimetro = 2*(atoi(argv[2])*atoi(argv[3])); 
		
		cout << "Área do retângulo: " << area << endl 
		     << "Perímetro do retângulo: " << perimetro << endl;  
		
	}
	else if(!(str.compare("quadrado"))){
		//executável nome da figura lado 
		
		area = 0; 
		perimetro = 0; 

		area = pow(atoi(argv[2]), 2);
		perimetro = 4 * atoi(argv[2]); 

		cout << "Área do quadrado: " << area << endl
		     << "Perímetro do quadrado: " << perimetro << endl; 
	}
	else if(!(str.compare("círculo"))){
		//executável nome da figura raio 
		
		area = 0; 
		perimetro = 0;

		area = PI * pow(atoi(argv[2]), 2);
		perimetro = 2 * PI * atoi(argv[2]); 

		cout << "Área do círculo: " << area << endl
		     << "Perímetro do círculo: "<< perimetro << endl;  
  		
		
	}	 	 
}

void calculoEspacial(int argc, char *argv[])
{
	float area, volume; 

	string str(argv[1]);
	if(!(str.compare("pirâmide"))){
		//executável nome da figura area da base area lateral altura

		area = 0; 
		volume = 0; 

		area = atoi(argv[2]) + atoi(argv[3]); 
		volume = (1/3) * atoi(argv[2]) * atoi(argv[4]); 

		cout << "Área da pirâmide: " << area << endl
		     << "Volume da pirâmide: " << volume << endl;   
	}
	else if(!(str.compare("cubo"))){
		//executável nome da figura aresta 	
		area = 0; 
		volume = 0; 

		area = 6 * pow(atoi(argv[2]), 2);
		volume = pow(atoi(argv[2]), 3);

		cout << "Área do cubo: " << area << endl
		     << "Volume do cubo: "<< volume << endl; 
	}
	else if(!(str.compare("paralelepípedo"))){	
		//executável nome da figura aresta1 aresta2 aresta3
		area = 0;
		volume = 0; 
		
		area = (2 * atoi(argv[2]) * atoi(argv[3])) + (2 * atoi(argv[2]) * atoi(argv[4])) + (2 * atoi(argv[3]) * atoi(argv[4]));
		volume = atoi(argv[2]) * atoi(argv[3]) * atoi(argv[4]); 
		
		cout << "Área do paralelepípedo: " << area << endl
		     << "Volume do paralelepípedo: " << volume << endl; 
		 
	}	
	else if(!(str.compare("esfera"))){
		//executável nome da figura raio
		area = 0; 
		volume = 0; 
		
		area = 4 * PI * pow(atoi(argv[2]), 2);
		volume = (4/3) * PI * pow(atoi(argv[2]), 3);

		cout << "Área da esfera: " << area << endl
		     << "Volume da esfera: " << volume << endl; 
	}
}
