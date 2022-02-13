#include <iostream>
using namespace std;
class Persona {
	//atributos
	protected : string nombres,apellidos, direccion;
		int telefono;
	
	//constructor
	protected : 
		Persona(){
			
		}	
		Persona(string nom,string ape, string dire, int tel){
			nombres=nom;
			apellidos=ape;
			direccion =dire;
			telefono=tel;
		}	
	//metodo

	void mostrar();
	
};
