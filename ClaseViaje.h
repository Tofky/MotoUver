#ifndef CLASEVIAJE_H
#define CLASEVIAJE_H
#include<iostream>

class ClaseViaje {
private:
	
	int  tarifaMinima = 500; 
	int dia; 
	int  costoViaje; 
	int  costoKmRecorrido;
	int  consumoGasolina;
	int  kmRecorrido;
	float  ajusteTarifario;
	std::string origen; 
	std::string destino;
	int  costoConduccion;
	int  costoGasolina;
	std::string horaInicio;
	std::string horaFinal;
	int totalKilometro;
	int montoExtra ;
	
public:
	static const int tarifaConduccion = 150;
	ClaseViaje();
	~ClaseViaje();
	ClaseViaje(int dia,int  kmRecorrido,int  consumoGasolina,std::string origen, std::string destino,std::string horaInicio, std::string horaFinal);
	//get
	int getDia ();
	int  getCostoViaje(); 
	int  getTarifaMinima(); 
	int  getCostoKmRecorrido();	
	float  getAjusteTarifario();
	int  getKmRecorrido();
	int  getConsumoGasolina();
	std::string getOrigen(); 
	std::string getDestino();
	int  getCostoConduccion();
	int  getCostoGasolina();
	std::string getHoraInicio();
	std::string getHoraFinal();
	int getTotalKilometro();
	int getMontoExtra();
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
	void setCostoGasolina(int  costoGasolina);
	void setHoraInicio(std::string horaInicio);
	void setHoraFinal(std::string horaFinal);
	void setTotalKilometro(int totalKilometro);
	void setMontoExtra(int montoExtra);
	//metodos
	

};

#endif

