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
ClaseViaje::ClaseViaje(int dia,int  kmRecorrido,int  consumoGasolina,std::string origen, std::string destino,std::string horaInicio, std::string horaFinal){
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
int  ClaseViaje::getCostoViaje(){
	return costoViaje;
}
int  ClaseViaje::getTarifaMinima(){
	return tarifaMinima;
}
int  ClaseViaje::getCostoKmRecorrido(){
	return costoKmRecorrido;
}	
int  ClaseViaje::getKmRecorrido(){
	return kmRecorrido;
}
float  ClaseViaje::getAjusteTarifario(){
	return ajusteTarifario;
}
std::string ClaseViaje::getOrigen(){
	return origen; 
}
std::string ClaseViaje::getDestino(){
	return destino;
}
int  ClaseViaje::getCostoConduccion(){
	return costoConduccion; 
}
int  ClaseViaje::getCostoGasolina(){
	return costoGasolina; 
}
int  ClaseViaje::getConsumoGasolina(){
	return consumoGasolina;
}
std::string ClaseViaje::getHoraInicio(){
	return horaInicio;
}
std::string ClaseViaje::getHoraFinal(){
	return horaFinal;
}
int ClaseViaje::getTotalKilometro(){
	return totalKilometro;
}
int ClaseViaje::getMontoExtra(){
	return montoExtra;
}
//set
void ClaseViaje::setDia (int dia){
	this-> dia = dia;
}
void ClaseViaje::setCostoViaje(int costoViaje){
	this->costoViaje = costoViaje;
}
void ClaseViaje::setCostoKmRecorrido(int  costoKmRecorrido){
	this->costoKmRecorrido = costoKmRecorrido;
}	
void ClaseViaje::setAjusteTarifario(float  ajusteTarifario){
	this-> ajusteTarifario = ajusteTarifario;
}
void ClaseViaje::setKmRecorrido(int  kmRecorrido){
	this-> kmRecorrido = kmRecorrido;
}
void ClaseViaje::setOrigen(std::string origen){
	this->origen = origen; 
}
void ClaseViaje::setDestino(std::string destino){
	this->destino = destino;
}
void ClaseViaje::setCostoConduccion(int  costoConduccion){
	this->costoConduccion = costoConduccion; 
}
void ClaseViaje::setCostoGasolina(int  costoGasolina){
	this->costoGasolina = costoGasolina; 
}
void ClaseViaje::setConsumoGasolina(int  consumoGasolina){
	this->consumoGasolina = consumoGasolina;
}
void ClaseViaje::setHoraInicio(std::string horaInicio){
	this->horaInicio = horaInicio;
}
void ClaseViaje::setHoraFinal(std::string horaFinal){
	this->horaFinal = horaFinal;
}
void ClaseViaje::setTotalKilometro(int totalKilometro){
	this->totalKilometro = totalKilometro;
}
void ClaseViaje::setMontoExtra(int montoExtra){
	this->montoExtra = montoExtra;
}
