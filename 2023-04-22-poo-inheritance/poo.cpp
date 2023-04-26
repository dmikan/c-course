#include <iostream>
#include <cstdlib>

class operaciones{
public:	
	int primero;
	int segundo;
	int resultado;
void sumar(){
	resultado = primero + segundo;
	//std::cout << resultado << std::endl;
}
void restar(){
	resultado = primero - segundo;
}
operaciones(int,int); 
};

operaciones::operaciones(int dato1, int dato2){
primero = dato1;
segundo = dato2;
}

int main(){
	operaciones objeto1(30, 10);
	objeto1.sumar();
	operaciones objeto2(100, 50);
	objeto2.restar();
	std::cout << objeto1.resultado << std::endl;
	std::cout << objeto2.resultado << std::endl;
	return 0;
}