#pragma once
#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <vector>
#include <string>
class Funciones
{
public:
	Funciones();
	~Funciones();
	void quicksort(std::vector<std::string> &a, int primero, int ultimo,int tipo);
	void Imprimir(std::vector<std::string>& a, int n);

private:


};
#endif // !FUNCIONES_H

