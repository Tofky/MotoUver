#ifndef CLASEVIAJE_H
#define CLASEVIAJE_H
#include<iostream>
#include<sstream>

class ClaseViaje {
private:
	int dia; 
	int  costoViaje; 
	int  costoKmRecorrido;
	int  consumoGasolina;
	int  kmRecorrido;
	float  ajusteTarifario;
	std::string origen; 
	std::string destino;
	int  costoConduccion;
	float costoFinalGasolina;
	std::string horaInicio;
	std::string horaFinal;
	int totalKilometro;
	int montoExtra ;
	int gastosTotales;
	bool viajeCreado = false;
	
public:
	static const int tarifaConduccion = 150;
	static const int  tarifaMinima = 500; 
	static const int  costoGasolinaKm = 170;
	ClaseViaje();
	~ClaseViaje();
	ClaseViaje(int dia,int  kmRecorrido,int  consumoGasolina,std::string origen, std::string destino,std::string horaInicio, std::string horaFinal);
	//get
	int getDia ();
	int  getCostoViaje(); 
	int  getCostoKmRecorrido();	
	float  getAjusteTarifario();
	int  getKmRecorrido();
	int  getConsumoGasolina();
	std::string getOrigen(); 
	std::string getDestino();
	int  getCostoConduccion();
	float  getcostoFinalGasolina();
	std::string getHoraInicio();
	std::string getHoraFinal();
	int getTotalKilometro();
	int getMontoExtra();
	int getGastosTotales();
	//set 
	void setDia(int dia);
	void setCostoViaje(int costoViaje); 
	void setCostoKmRecorrido(int  costoKmRecorrido);	
	void setAjusteTarifario(float  ajusteTarifario);
	void setKmRecorrido(int  kmRecorrido);
	void setConsumoGasolina(int  consumoGasolina);
	void setOrigen(std::string origen); 
	void setDestino(std::string destino);
	void setCostoConduccion(int  costoConduccion);
	void setcostoFinalGasolina(float costoFinalGasolina);
	void setHoraInicio(std::string horaInicio);
	void setHoraFinal(std::string horaFinal);
	void setTotalKilometro(int totalKilometro);
	void setMontoExtra(int montoExtra);
	void setGastosTotales(int gastosTotales);
	//metodos
	std::string toString(int numeroViaje);

};

#endif

