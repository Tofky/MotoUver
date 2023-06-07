#include "ClaseViaje.h"

ClaseViaje::ClaseViaje() {
	
}
//get
int ClaseViaje::getFecha (int fecha[],int dia){
	return fecha [dia];
}
float ClaseViaje::getCostoViaje(){
	return costoViaje;
}
float ClaseViaje::getTarifaMinima(){
	return tarifaMinima;
}
float ClaseViaje::getCostoKmRecorrido(){
	return costoKmRecorrido;
}	
float ClaseViaje::getAjusteTarifario(){
	return ajusteTarifario;
}
std::string ClaseViaje::getOrigen(){
	return origen; 
}
std::string ClaseViaje::getDestino(){
	return destino;
}
float ClaseViaje::getCostoConduccion(){
	return costoConduccion; 
}
float ClaseViaje::getCostoGasolina(){
	return costoGasolina; 
}
//set
void ClaseViaje::setFecha(int dia, int valor){
	fecha [dia] = valor;
}
void ClaseViaje::setCostoViaje(float costoViaje){
	this->costoViaje = costoViaje;
}
void ClaseViaje::setTarifaMinima(float tarifaMinima){
	this->tarifaMinima = tarifaMinima;
}
void ClaseViaje::setCostoKmRecorrido(float costoKmRecorrido){
	this->costoKmRecorrido = costoKmRecorrido;
}	
void ClaseViaje::setAjusteTarifario(float ajusteTarifario){
	this-> ajusteTarifario = ajusteTarifario;
}
void ClaseViaje::setOrigen(std::string origen){
	this->origen = origen; 
}
void ClaseViaje::setDestino(std::string destino){
	this->destino = destino;
}
void ClaseViaje::setCostoConduccion(float costoConduccion){
	this->costoConduccion = costoConduccion; 
}
void ClaseViaje::setCostoGasolina(float costoGasolina){
	this->costoGasolina = costoGasolina; 
}
