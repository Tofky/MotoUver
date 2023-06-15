#include<iostream>
#include <sstream>
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
	return kmRecorrido * tarifaMinima;
}
int obtenerHora(std::string tiempo){
	std::stringstream ss(tiempo);
	std::getline(ss, tiempo, ':');
	int horas = std::stoi(tiempo);
	return horas;
}

float  montoAjuste(std::string horaInicio, std::string horaFinal){
	float  montoAjuste = 0.0;
	int horaInicial = obtenerHora(horaInicio);
	int horaFinalizacion = obtenerHora(horaFinal);
	if (horaInicial >= 22 || horaFinalizacion >=	22 ){
		montoAjuste = 0.25;
	}
	else if(horaInicial <= 6 || horaFinalizacion <= 6){
		montoAjuste = 0.25;
	}
	return montoAjuste;
}
float adicionalFranjaHoraria(float  montoAjuste,int calculoPorKilometro){
	return  montoAjuste * calculoPorKilometro;
}
int montoTotal(int montoSinAjuste, int reajuste){
	return montoSinAjuste + reajuste; 
}	
int tarifaPorConduccion(int kmRecorrido,int tarifaPorConduccion){
	return kmRecorrido * tarifaPorConduccion;
}
	
int main (int argc, char *argv[]) {
	ClaseViaje control [31][10];
	int opcion;
	int dia;
	int  kmRecorrido;
	std::string origen;
	std::string destino;
	int  consumoGasolina;
	std::string horaInicio;
	std::string horaFinal;
	bool continuar = true;
	
	do{
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
	case 1: {
		std::cout<<"<Menú Principal>	<1-Ingresar nuevo viaje>"<<std::endl;
		std::cout<<std::endl;
		std::cout<<"Ingrese los datos del nuevo viaje"<<std::endl;
		std::cout<<std::endl;
		std::cout<<"Dia del mes(1-31): ";
		std::cin>>dia;
		std::cout<<"Kilómetros: ";
		std::cin>>kmRecorrido;
		std::cin.ignore();
		std::cout<<"Lugar de origen: ";
		std::getline(std::cin,origen);
		std::cout<<"Lugar de destino: ";
		std::getline(std::cin,destino);
		std::cout<<"Litros Gasolina: ";
		std::cin>>consumoGasolina;
		std::cout<<"Hora de inicio (00:00 - 23:00)";
		std::cin>>horaInicio;
		std::cout<<"Hora de final (00:00 - 23:00)";
		std::cin>>horaFinal;  
		ClaseViaje nuevoViaje(dia,kmRecorrido,consumoGasolina,origen,destino,horaInicio,horaFinal);
		controlMemoria(dia,control,nuevoViaje);
		std::cout<<std::endl;
		std::cout<<"Monto del viaje:"<<std::endl;
		int tarifaMinima = nuevoViaje.getTarifaMinima();
		int tarifaPorKilometro = calculoPorKilometro(kmRecorrido,tarifaMinima);
		float reajusteCobro = adicionalFranjaHoraria(montoAjuste(horaInicio, horaFinal),tarifaPorKilometro);
		int montoFinal = montoTotal(tarifaPorKilometro,reajusteCobro);
		nuevoViaje.setTotalKilometro(tarifaPorKilometro);
		nuevoViaje.setMontoExtra(reajusteCobro);
		nuevoViaje.setCostoViaje(montoFinal);
		std::cout<<kmRecorrido<<" kms x "<<tarifaMinima<<"-----------------------------$ " <<tarifaPorKilometro<<std::endl;
		std::cout<<"Adicional por hora (25%)------------------$ "<<reajusteCobro<<std::endl; 
		std::cout<<"Total -----------------------------------$ "<<montoFinal<<std::endl; 
		std::cout<<std::endl;
		std::cout<<std::endl;
		std::cout<<"Costo/gasto del viaje:"<<std::endl;
		int tarifaTotalConduccion = tarifaPorConduccion(kmRecorrido,ClaseViaje::tarifaConduccion);
		nuevoViaje.setCostoConduccion(tarifaTotalConduccion);
		std::cout<<"Costo conducción " <<ClaseViaje::tarifaConduccion<<" -----------$ "<<nuevoViaje.getKmRecorrido()<<"kms x "<<nuevoViaje.getCostoConduccion()<<std::endl;
		
		system("PAUSE");
		system("CLS");
		break;
	}
	}
	}while(continuar == true);
	return 0;
}

