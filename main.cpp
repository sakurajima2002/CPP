#include <iostream>

using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string nombre,int edad){
			this->nombre = nombre;
			this->edad = edad;
		}
		Persona(){

		}
		~Persona(){

		}
		void setNombre(string nombre){
			this->nombre = nombre;
		}
		void setEdad(int edad){
			this->edad = edad;
		}
		void mostrar(){
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Edad: "<<edad<<endl;
		}
};

class Colegio{
	private:
		string colegio;
	public:
		Colegio(string colegio){
			this->colegio = colegio;
		}
		Colegio(){

		}
		~Colegio(){

		}
		void setColegio(string colegio){
			this->colegio = colegio;
		}
		void mostrar(){
			cout<<"Colegio: "<<colegio<<endl;
		}
};


class Estudiante : public Persona , public Colegio{
	private:
		float notaFinal;
	public:
		Estudiante(string nombre,int edad,string colegio,float notaFinal) : Persona(nombre,edad) , Colegio(colegio){
			this->notaFinal = notaFinal;
		}
		Estudiante(){

		}
		~Estudiante(){
			cout<<"Estudiante Eliminado"<<endl;
		}
		void setNota(float notaFinal){
			this->notaFinal = notaFinal;
		}
		void mostrar(){
			Persona::mostrar();
			Colegio::mostrar();
			cout<<"Nota: "<<notaFinal<<endl;
		}
};

int main(){

	Estudiante *estu = new Estudiante;

	estu->setNombre("Juan");
	estu->setEdad(19);
	estu->setColegio("Teinco");
	estu->setNota(4.5);
	estu->mostrar();

  	delete estu;
	return 0;
}
