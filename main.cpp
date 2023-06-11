#include<iostream>
#include "ClaseViaje.h"
void controlMemoria(int dia, ClaseViaje control[][10],ClaseViaje nuevoViaje){
	for(int i = 0; i < 10; i++){
		if(control[dia][i].getKmRecorrido() == 0){
			control[dia][i] = nuevoViaje;
			break;
		} 
	}
}
int calculoPorKilometro (int kmRecorrido, int tarifaMinima){
	int montoTotal = kmRecorrido * tarifaMinima;
	return montoTotal;
	
}


int main (int argc, char *argv[]) {
	ClaseViaje control [31][10];
	int opcion;
	int dia;
	float kmRecorrido;
	std::string origen;
	std::string destino;
	float consumoGasolina;
	std::string horaInicio;
	std::string horaFinal;
	float tarifaMinima;
	
	
	std::cout<<"				Menu Principal				"<<std::endl;
	std::cout<<"(1)Ingresar nuevo viaje"<<std::endl;
	std::cout<<"(2)Detalles viajes por dia"<<std::endl;
	std::cout<<"(3)Promedio de viajes"<<std::endl;
	std::cout<<"(4)Cantidad de viajes por dia"<<std::endl;
	std::cout<<"(5)Viajes por destino"<<std::endl;
	std::cout<<"(6)Lugares con más viajes"<<std::endl;
	std::cout<<"(7)Ganacia diaria"<<std::endl;
	std::cout<<"(8)Ordenamiento"<<std::endl;
	std::cout<<"(9)Salir"<<std::endl;
	std::cout<<"Igrese una opción del menú";
	std::cin>>opcion;
	system("CLS");
	switch(opcion){
	case 1: 
		std::cout<<"<Menú Principal>	<1-Ingresar nuevo viaje>"<<std::endl;
		std::cout<<std::endl;
		std::cout<<"Ingrese los datos del nuevo viaje"<<std::endl;
		std::cout<<std::endl;
		std::cout<<"Dia del mes(1-31): ";
		std::cin>>dia;
		std::cout<<"Kilómetros: ";
		std::cin>>kmRecorrido;
		std::cout<<"Litros Gasolina: ";
		std::cin>>consumoGasolina;
		std::cout<<"Lugar de origen: ";
		std::cin>>origen;
		std::cout<<"Lugar de destino: ";
		std::cin>>destino;
		std::cout<<"Hora de inicio (00:00 - 23:00)";
		std::cin>>horaInicio;
		std::cout<<"Hora de final (00:00 - 23:00)";
		std::cin>>horaFinal;
		ClaseViaje nuevoViaje(dia,kmRecorrido,consumoGasolina,origen,destino,horaInicio,horaFinal);
		controlMemoria(dia,control,nuevoViaje);
		std::cout<<std::endl;
		std::cout<<"Monto del viaje:"<<std::endl;
		tarifaMinima = nuevoViaje.getTarifaMinima();
		std::cout<<kmRecorrido<<" kms x "<<tarifaMinima<<"-----------------------------$" <<calculoPorKilometro(kmRecorrido,tarifaMinima)<<std::endl;
		
	}
	return 0;
}

