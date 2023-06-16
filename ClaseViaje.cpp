#include "ClaseViaje.h"
#include<sstream>
ClaseViaje::ClaseViaje() {
	dia = 0;
	kmRecorrido = 0;
	consumoGasolina = 0;
	origen = " ";
	destino = " ";
	horaInicio = " ";
	horaFinal = " ";
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
float  ClaseViaje::getcostoFinalGasolina(){
	return costoFinalGasolina; 
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
int ClaseViaje::getGastosTotales(){
	return gastosTotales;
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
void ClaseViaje::setcostoFinalGasolina(float costoFinalGasolina){
	this->costoFinalGasolina = costoFinalGasolina; 
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
void ClaseViaje::setGastosTotales(int gastosTotales){
	this->gastosTotales = gastosTotales;
}
//metodos 
std::string ClaseViaje::toString(int numeroViaje){
	std::stringstream ss;
	ss << "----------------------------------------------------------------"<<std::endl;
	ss << "(viaje #)"<< numeroViaje+1 <<std::endl;
	ss << "----------------------------------------------------------------"<<std::endl;
	ss <<"Kilometros: "<<kmRecorrido<<std::endl;
	ss <<"Lugar de origen: "<<origen<<std::endl;
	ss <<"Lugar de destino: "<<destino<<std::endl;
	ss <<"Litros de gasolina: "<<consumoGasolina<<std::endl;
	ss <<"Hora de inicio: "<<horaInicio<<std::endl;
	ss <<"Hora de llegada: "<<horaFinal<<std::endl;
	ss << std::endl;
	ss << std::endl;
	ss <<"Monto del viaje: " <<std::endl;
	ss <<kmRecorrido<<" kms x " <<tarifaMinima<<"-----------------------------$ "<<totalKilometro<<std::endl;
	ss <<"Adicionl por hora(25%)------------------$ "<<montoExtra<< std::endl;
	ss <<"Total----------------------------------$ "<<costoViaje<<std::endl;
	ss << std::endl;
	ss << std::endl;
	ss <<"Costo/gasto del viaje:"<< std::endl;
	ss <<"Costo conducción ("<<kmRecorrido<<" kms x "<<tarifaConduccion<<")-------------$ "<<costoConduccion<< std::endl;
	ss <<"Costo Gasolina--------------------------$ "<<costoFinalGasolina<<std::endl;
	ss <<"Total costos--------------------------$ "<<gastosTotales<<std::endl;
	
	return ss.str();
	
}
