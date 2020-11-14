#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  unsigned int licznik = 0; // licznik na początku
	int l_zaglowiec = 0; // liczba żaglowców
	Stocznia stocznia{};

	while(licznik<towar)
	{
		Statek* s1 = stocznia(); // tworzy nowy objekt
		licznik += s1->transportuj(); // dodawanie towaru do licznika z funkcji transportuj()
		
		if(dynamic_cast<Zaglowiec*>(s1)) // sprawdznie czy są żaglowce
			l_zaglowiec++; // dodawanie żaglowców
		
	delete s1; // zwalnianie pamięci
	}
return l_zaglowiec; // zwrot liczby żaglowców
}