#include<iostream>
#include <sstream>
#include<sstream>
#include "ClaseViaje.h"
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
int sumatoria(int costoA,int costoB){
		return costoA + costoB;
}
float productoria(float productoA,float productoB){
	return productoA * productoB;
}


int main (int argc, char *argv[]) {
	ClaseViaje control [31][10];
	int opcion;
	int dia;
	int  kmRecorrido;
	std::string origen;
	std::string destino;
	float  consumoGasolina;
	std::string horaInicio;
	std::string horaFinal;
	bool continuar = true;
	int numeroViaje[31];
	
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
		control[dia-1][numeroViaje[dia-1]] = nuevoViaje;
		std::cout<<std::endl;
		std::cout<<"Monto del viaje:"<<std::endl;
		int tarifaMinima = ClaseViaje::tarifaMinima;
		int tarifaPorKilometro = calculoPorKilometro(kmRecorrido,tarifaMinima);
		float reajusteCobro = adicionalFranjaHoraria(montoAjuste(horaInicio, horaFinal),tarifaPorKilometro);
		int montoFinal = sumatoria(tarifaPorKilometro,reajusteCobro);
		control[dia-1][numeroViaje[dia-1]].setTotalKilometro(tarifaPorKilometro);
		control[dia-1][numeroViaje[dia-1]].setMontoExtra(reajusteCobro);
		control[dia-1][numeroViaje[dia-1]].setCostoViaje(montoFinal);
		std::cout<<kmRecorrido<<" kms x "<<tarifaMinima<<"-----------------------------$ " <<tarifaPorKilometro<<std::endl;
		std::cout<<"Adicional por hora (25%)------------------$ "<<reajusteCobro<<std::endl; 
		std::cout<<"Total -----------------------------------$ "<<montoFinal<<std::endl; 
		std::cout<<std::endl;
		std::cout<<std::endl;
		std::cout<<"Costo/gasto del viaje:"<<std::endl;
		int tarifaTotalConduccion = productoria(kmRecorrido,ClaseViaje::tarifaConduccion);
		control[dia-1][numeroViaje[dia-1]].setCostoConduccion(tarifaTotalConduccion);
		std::cout<<"Costo conducción " <<nuevoViaje.getKmRecorrido()<<" kms x " <<ClaseViaje::tarifaConduccion <<" -----------$ "<<control[dia-1][numeroViaje[dia-1]].getCostoConduccion()<<std::endl;
		float costoTotalGasolina = productoria(ClaseViaje::costoGasolinaKm,consumoGasolina);
		control[dia-1][numeroViaje[dia-1]].setcostoFinalGasolina(costoTotalGasolina);
		std::cout<<"Costo gasolina-------------------------- $ " <<costoTotalGasolina<<std::endl;
		int totalGastos = sumatoria(costoTotalGasolina,tarifaTotalConduccion);
		control[dia-1][numeroViaje[dia-1]].setGastosTotales(totalGastos);
		std::cout<<"Total costos ---------------------------- $ "<< totalGastos << std::endl;
		std::cout<<std::endl;
		std::cout<<std::endl;
		std::cout<<"<Digite enter>"<<std::endl;
		numeroViaje[dia-1] ++;
		system("PAUSE>nul");
		system("CLS");
		break;
	}
	case 2: {
		int dia;
		std::cout<<"<Menú Principal>	<2-Detalle viajes por día>"<<std::endl;	
		std::cout<<std::endl;
		std::cout<<"Ingrese el día del mes (1-31): " ;
		std::cin>>dia;
		std::cout<<std::endl;
		for(int i = 0;control[dia-1][i].getKmRecorrido() != 0; i++){
			std::cout<<control[dia-1][i].toString(i);
		}
		std::cout<<"<Digite enter>"<<std::endl;
		system("PAUSE>nul");
		break;
	}
	}//switch
	}while(continuar == true);
	return 0;
}

