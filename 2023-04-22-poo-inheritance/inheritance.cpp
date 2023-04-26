#include <iostream>
#include <cstdlib>

class operaciones{
public:
	int primero;
	int segundo;
	int resultado;

	void sumar(){
		resultado = primero + segundo;
	}
	operaciones(int dato1, int dato2){
		primero = dato1;
		segundo = dato2;
	} 
};

class nueva:public operaciones{
public:
	int tercero;
	void sumar2(){
		resultado = primero + segundo + tercero;
	}
	nueva(int dato1, int dato2, int dato3):operaciones(dato1, dato2){
		tercero = dato3;
	}
};

int main(){
	operaciones objeto1(30, 32);
	objeto1.sumar();
	std::cout << objeto1.resultado << std::endl;

	nueva objeto2(30, 40, 10);
	objeto2.sumar2();
	std::cout << objeto2.resultado << std::endl;
}