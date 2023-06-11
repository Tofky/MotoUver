#include "ClaseViaje.h"

ClaseViaje::ClaseViaje() {
	dia = 0;
	costoViaje = 0.0; 
	costoKmRecorrido = 0.0;	
	ajusteTarifario = 0.0;
	origen = " "; 
	destino = " ";
	costoConduccion = 0.0;
	costoGasolina = 0.0;
}
ClaseViaje::ClaseViaje(int dia,float kmRecorrido,float consumoGasolina,std::string origen, std::string destino,std::string horaInicio, std::string horaFinal){
	this->dia = dia;
	this->kmRecorrido = kmRecorrido;
	this->consumoGasolina = consumoGasolina;
	this->origen = origen;
	this->destino = destino;
	this->horaInicio = horaInicio;
	this->horaFinal = horaFinal;
}
ClaseViaje::~ClaseViaje(){
	
}
//get
int ClaseViaje::getDia (){
	return dia;
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
float ClaseViaje::getKmRecorrido(){
	return kmRecorrido;
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
float ClaseViaje::getConsumoGasolina(){
	return consumoGasolina;
}
std::string ClaseViaje::getHoraInicio(){
	return horaInicio;
}
std::string ClaseViaje::getHoraFinal(){
	return horaFinal;
}
//set
void ClaseViaje::setDia (int dia){
	this-> dia = dia;
}
void ClaseViaje::setCostoViaje(float costoViaje){
	this->costoViaje = costoViaje;
}
void ClaseViaje::setCostoKmRecorrido(float costoKmRecorrido){
	this->costoKmRecorrido = costoKmRecorrido;
}	
void ClaseViaje::setAjusteTarifario(float ajusteTarifario){
	this-> ajusteTarifario = ajusteTarifario;
}
void ClaseViaje::setKmRecorrido(float kmRecorrido){
	this-> kmRecorrido = kmRecorrido;
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
void ClaseViaje::setConsumoGasolina(float consumoGasolina){
	this->consumoGasolina = consumoGasolina;
}
void ClaseViaje::setHoraInicio(std::string horaInicio){
	this->horaInicio = horaInicio;
}
void ClaseViaje::setHoraFinal(std::string horaFinal){
	this->horaFinal = horaFinal;
}
