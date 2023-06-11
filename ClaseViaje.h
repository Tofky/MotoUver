#ifndef CLASEVIAJE_H
#define CLASEVIAJE_H
#include<iostream>

class ClaseViaje {
private:
	float tarifaMinima = 500; 
	int dia; 
	float costoViaje; 
	float costoKmRecorrido;
	float consumoGasolina;
	float kmRecorrido;
	float ajusteTarifario;
	std::string origen; 
	std::string destino;
	float costoConduccion;
	float costoGasolina;
	std::string horaInicio;
	std::string horaFinal;
public:
	ClaseViaje();
	~ClaseViaje();
	ClaseViaje(int dia,float kmRecorrido,float consumoGasolina,std::string origen, std::string destino,std::string horaInicio, std::string horaFinal);
	//get
	int getDia ();
	float getCostoViaje(); 
	float getTarifaMinima(); 
	float getCostoKmRecorrido();	
	float getAjusteTarifario();
	float getKmRecorrido();
	float getConsumoGasolina();
	std::string getOrigen(); 
	std::string getDestino();
	float getCostoConduccion();
	float getCostoGasolina();
	std::string getHoraInicio();
	std::string getHoraFinal();
	//set 
	void setDia(int dia);
	void setCostoViaje(float costoViaje); 
	void setCostoKmRecorrido(float costoKmRecorrido);	
	void setAjusteTarifario(float ajusteTarifario);
	void setKmRecorrido(float kmRecorrido);
	void setConsumoGasolina(float consumoGasolina);
	void setOrigen(std::string origen); 
	void setDestino(std::string destino);
	void setCostoConduccion(float costoConduccion);
	void setCostoGasolina(float costoGasolina);
	void setHoraInicio(std::string horaInicio);
	void setHoraFinal(std::string horaFinal);
	//metodos
	

};

#endif

