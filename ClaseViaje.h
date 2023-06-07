#ifndef CLASEVIAJE_H
#define CLASEVIAJE_H
#include<iostream>

const int dia = 31; 

class ClaseViaje {
private:
	int fecha[dia]; 
	float costoViaje; 
	float tarifaMinima; 
	float costoKmRecorrido;	
	float ajusteTarifario;
	std::string origen; 
	std::string destino;
	float costoConduccion;
	float costoGasolina;
public:
	//get
	int getFecha (int fecha[], int dia);
	float getCostoViaje(); 
	float getTarifaMinima(); 
	float getCostoKmRecorrido();	
	float getAjusteTarifario();
	std::string getOrigen(); 
	std::string getDestino();
	float getCostoConduccion();
	float getCostoGasolina();
	//set 
	void setFecha(int dia, int valor);
	void setCostoViaje(float costoViaje); 
	void setTarifaMinima(float tarifaMinima); 
	void setCostoKmRecorrido(float costoKmRecorrido);	
	void setAjusteTarifario(float ajusteTarifario);
	void setOrigen(std::string origen); 
	void setDestino(std::string destino);
	void setCostoConduccion(float costoConduccion);
	void setCostoGasolina(float costoGasolina);
	//metodos
	ClaseViaje();

};

#endif

