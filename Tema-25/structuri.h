#pragma once
#include <iostream>
#include <string>
using namespace std;

struct coordPuncte {
	int coordX = 0;
	int coordY = 0;
};
struct coordVarfuri {
	int coordX = 0;
	int coordY = 0;
};
struct fractii {
	int numarator = 0;
	int numitor = 0;
};
struct eleviChimie {
	string nume;
	double nota1 = 0;
	double nota2 = 0;
	double media() {
		double ma = (nota1 + nota2) / 2;
		return ma;
	}

};
struct elevi12 {
	string nume;
	string prenume;
	double media1;
	double media2;
	int mediaFinala() {
		double ma = (media1 + media2) / 2;
		return ma;
	}
};
struct dataSportivi {
	string nume;
	string prenume;
	int luna = 0;
	int an = 0;
	double varsta() {
		double varsta = 2023 - an;
		return varsta;
	}
};
struct bursaElevi {
	string nume;
	string prenume;
	double nrMembrii = 0;
	double venitLunar = 0;
	double venitMedie() {
		double vm = venitLunar / nrMembrii;
		return vm;
	}
};
struct inaltimeElevi {
	string nume;
	string prenume;
	int varsta;
	int inaltime;
};