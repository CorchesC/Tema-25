#pragma once
#include <iostream>
#include <fstream>
#include"structuri.h"
using namespace std;

void citireVector(int v[], int& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void citireVector2(int v[], int& dim) {

	ifstream f("numere2.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void afisareVector(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}
int punctInAfaraTriunghiurilor(coordVarfuri crd[], int x, int y, int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (crd[i].coordX >= x && crd[i].coordY >= y) {
			nr++;
		}
	}
	return nr;
}
void sterge(int v[], int& d, int p) {

	for (int i = p; i < d; i++) {
		v[i] = v[i + 1];
	}
	d--;
}
void stergereElementeDuplicate(int v[], int& d) {
	for (int i = 0; i < d; i++) {
		if (v[i] == v[i + 1]) {
			sterge(v, d, i);
		}
	}
}
int oglindit(int n) {
	int ogl = 0;
	while (n != 0) {
		int c = n % 10;
		n = n / 10;
		ogl = ogl * 10 + c;
	}
	return ogl;
}
void afisarePerechiOglindi(int v[], int d) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (oglindit(v[i]) == v[j]) {
				cout << v[i] << " " << v[j] << endl;
			}
		}
	}
}
void esteFractieReductibila(fractii frac[], int d, int i) {
	bool aff = false;
	for (int n = 1; n < 10; n++) {
		if (frac[i].numarator % n == 0 && frac[i].numitor % n == 0) {
			aff = true;
		}

	}
	if (aff == true) {
		cout << frac[i].numarator << "/" << frac[i].numitor << endl;
	}
}
int elementMax(int v[], int d) {
	int max = -1;
	for (int i = 0; i < d; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}
int produsMax(int v[], int d) {
	int max = elementMax(v, d);
	int max2 = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] != max && v[i] > max2) {
			max2 = v[i];
		}
	}
	int prod = max * max2;
	return prod;
}
void afisareMatrice(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void generareMatriceSol6(int x[100][100], int m, int n) {
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			if (i < j && i + j < n - 1) {
				x[i][j] = 1;
			}
			if (i < j && i + j > n - 1) {
				x[i][j] = 2;
			}
			if (i > j && i + j > n - 1) {
				x[i][j] = 3;
			}
			if (i > j && i + j < n - 1) {
				x[i][j] = 4;
			}
			x[i][i] = 0;
			x[i][(n - 1) - i] = 0;
		}
	}
}
void sortareEleviChimie(eleviChimie chim[], int d) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < d - 1; j++) {
			if (chim[j].media() < chim[j + 1].media()) {
				eleviChimie aux = chim[j];
				chim[j] = chim[j + 1];
				chim[j + 1] = aux;
				aff = false;
			}
		}
	} while (aff == false);
	for (int i = 0; i < d; i++) {
		cout << chim[i].nume << " " << chim[i].media() << endl;
	}
}
void generareMatriceSol8(int x[100][100], int m, int n) {
	int nrMin = 1;
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			if (i % 2 == 0) {
				x[i][j] = nrMin;
				nrMin++;
			}
			if (i % 2 != 0) {
				x[i][(n - 1) - j] = nrMin;
				nrMin++;
			}
		}
	}
}
void sefDePromorie(elevi12 elev[], int d) {
	cout << "Sefii de promotie sunt: " << endl;
	for (int i = 0; i < d; i++) {
		if (elev[i].mediaFinala() == 10) {
			cout << elev[i].nume << " " << elev[i].prenume << endl;
		}
	}
}
void noBac(elevi12 elev[], int d) {
	cout << "Elevii care nu dau bacul sunt: " << endl;
	for (int i = 0; i < d; i++) {
		if (elev[i].mediaFinala() < 5) {
			cout << elev[i].nume << " " << elev[i].prenume << endl;
		}
	}
}
void generareMatriceSol10(int x[100][100], int m, int n) {
	for (int i = 0; i <= 4; i++) {
		int nr = i + 1;
		for (int j = 0; j <= 4; j++) {
			if (j == 0) {
				x[i][j] = i + 1;
			}
			else {
				x[i][j] = nr + 5;
				nr = x[i][j];
			}
		}
	}
}
void generareMatriceSol11(int x[100][100], int m, int n) {
	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j >= 0; j--) {
			x[i][j] = m - ((j + 1) - (i + 1));
		}
	}
}
void medieVarsta(dataSportivi sptv[], int d) {
	double s = 0;
	double nr = 0;
	for (int i = 0; i < d; i++) {
		s += sptv[i].varsta();
		nr++;
	}
	double ma = s / nr;

	cout << "Varrsta mediei este: " << ma << "si lista elevilor cu varsta sub medie este: " << endl;

	for (int j = 0; j < d; j++) {
		if (sptv[j].varsta() < ma) {
			cout << sptv[j].nume << " " << sptv[j].prenume << endl;
		}
	}
}
void generareMatriceSol13(int x[100][100], int m, int n) {
	for (int i = 0; i <= 5; i++) {
		int nr = 0;
		for (int j = 0; j <= 2; j++) {
			if (i == 0 || i == 5) {
				x[i][j] = nr;
				x[i][(n - 1) - j] = nr;
				nr++;
			}
			if (i == 1 || i == 4) {
				x[i][j] = nr + 1;
				x[i][(n - 1) - j] = nr + 1;
				nr++;
			}
			if (i == 2 || i == 3) {
				x[i][j] = nr + 2;
				x[i][(n - 1) - j] = nr + 2;
				nr++;
			}
		}
	}
}
void eleviFaraDreptLaBursa(bursaElevi bursa[], int d, int l) {
	cout << "Elevii fara drept de bursa sunt: " << endl;
	for (int i = 0; i < d; i++) {
		if (bursa[i].venitMedie() > l) {
			cout << bursa[i].nume << " " << bursa[i].prenume << endl;
		}
	}
}

void numarFractiiEchivalenteCuUltimul(fractii frac[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (frac[i].numitor != 0 && frac[i].numarator != 0) {
			if (frac[i].numitor % frac[d - 1].numitor == 0 && frac[i].numarator % frac[d - 1].numarator == 0) {
				nr++;
			}
		}
	}
	cout << nr << endl;
}
void generareMatriceSol16(int x[100][100], int m, int n) {
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			x[i][j] = i % 3 + j % 3;
			if (x[i][j] == 4) {
				x[i][j] = 6;
			}
		}
	}
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void generareMatriceSol17(int x[100][100], int m, int n) {
	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j < 6; j++) {
			if (i == 5 || j == 1) {
				x[i][j] = 5;
			}
			else {
				x[i][j] = x[i][j - 1] % 2 + x[i + 1][j] % 2;
			}
		}
	}
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void generareMatriceSol18(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0) {
				if (j < 4) {
					x[i][j] = j + 1;
				}
				else {
					x[i][j] = -2;
				}
			}
			else if (j == 4) {
				x[i][j] = -2;
			}
			else {
				x[i][j] = x[i - 1][j] + x[i - 1][j + 1];
			}
		}
	}
}
void afisareEleviPesteNorma(inaltimeElevi inl[], int d, int a, int b) {
	for (int i = 0; i < d; i++) {
		if (inl[i].varsta >= 14 && inl[i].inaltime > a && inl[i].inaltime < b) {
			cout << inl[i].nume << " " << inl[i].prenume << " " << inl[i].inaltime << " cm" << endl;

		}
	}
}
void afisareChar(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			char f = x[i][j];
			cout << f << " ";
		}
		cout << endl;
	}
}
void generareMatriceSol20(int x[100][100], int m, int n) {
	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= 6; j++) {
			if (j == 0 || j == 6) {
				x[i][j] = '*';
			}
			else if (i <= 3 && (j + i == 6 || i == j)) {
				x[i][j] = '*';
			}
			else {
				x[i][j] = '-';
			}
		}
	}
}
void generareMatriceSol21(int x[100][100], int m, int n) {
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			x[i][j] = i < j ? i : j;
			x[7 - i][j] = x[i][7 - j] = x[7 - i][7 - j] = x[i][j];
		}
	}
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void generareMatriceSol22(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				x[i][j] = 'A';
			}
			else if (i < j) {
				x[i][j] = x[i][j - 1] + 1;
			}
			else if (j == 0) {
				x[i][j] = x[i - 1][4];
			}
			else {
				x[i][j] = x[i][j - 1] + 1;
			}
		}
	}
}
int coordonatePeOX(coordPuncte cord[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (cord[i].coordY >= 0) {
			nr++;
		}
	}
	return nr;
}
void generareMatriceSol24(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 || j == 0) {
				x[i][j] = 2;
			}
			else {
				x[i][j] = x[i - 1][j] + x[i][j - 1];
			}
		}
	}
}
void generareMatriceSol25(int x[100][100], int m, int n) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i % 2 == 0) {
				if (j < 2) {
					x[i][j] = 'a';
				}
				else {
					x[i][j] = 'b';
				}
			}
			if (i % 2 != 0) {
				if (j < 2) {
					x[i][j] = 'A';
				}
				else {
					x[i][j] = 'B';
				}
			}
		}
	}
}
int numarDivizori(int n) {
	int nrd = 0;
	for (int x = 1; x <= n; x++) {
		if (n % x == 0) {
			nrd++;
		}
	}
	return nrd;
}
int nrNrInItervalCu3Div(int a, int b) {
	int nr = 0;
	for (int i = a + 1; i < b; i++) {
		if (numarDivizori(i) == 3) {
			nr++;
		}
	}
	return nr;
}
void numarInVectorImpar(int n, int v[], int& d) {
	while (n != 0) {
		if (n % 2 != 0) {
			v[d] = n % 10;
			d++;

		}
		n = n / 10;
	}
}
void bubbleSort(int v[], int d) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < d - 1; j++) {
			if (v[j] > v[j + 1]) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;

				aff = false;
			}
		}
	} while (aff == false);
}
int vectorInNumar(int v[], int d) {
	int num = 0;
	for (int i = 0; i < d; i++) {
		num += v[i];
		num = num * 10;
	}
	num = num / 10;
	return num;
}
void generareMatriceSol28(int x[100][100], int m, int n) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == j) {
				x[i][j] = 1;
			}
			else if (i + j == 3) {
				x[i][j] = 7;
			}
			else {
				x[i][j] = j + 1;
			}
		}
	}
}
void generareMatriceSol29(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				x[i][j] = 'a';
			}
			else if (i < j) {
				x[i][j] = x[i][j - 1] + 1;
			}
			else if (j == 0) {
				x[i][j] = x[i - 1][j] + 1;
			}
			else {
				x[i][j] = x[i][j - 1] - 1;
			}
		}
	}
}
int numarFormatDinCifrelePareDinVector(int v[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			nr = v[i];
			nr = nr * 10;
		}
	}
	return nr;
}
void bubbleSortDesc(int v[], int d) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < d - 1; j++) {
			if (v[j] < v[j + 1]) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;

				aff = false;
			}
		}
	} while (aff == false);
}
void afisareDescrescaoarePrimiiKMultipliiLuiN(int n, int k) {
	int v[100], d = 0;
	int ctr = 0;
	for (int i = n; d < k; i++) {
		if (i % n == 0) {
			v[d] = i;
			d++;
		}
	}
	bubbleSortDesc(v, d);
	afisareVector(v, d);
}
bool numarPrim(int n) {
	if (numarDivizori(n) == 2) {
		return true;
	}
	else {
		return false;
	}
}
bool esteNumarAproapePrim(int n) {
	bool aff = false;
	for (int i = 0; aff == false; i++) {
		if (numarPrim(i) == true) {
			for (int j = 0; aff == false; j++) {
				if (numarPrim(j) == true && (i * j) == n) {
					aff = true;
				}
			}
		}
	}
	return aff;
}
int celMaiMareNumarAproapePrim(int v[], int d) {
	int max = -1;
	for (int i = 0; i < d; i++) {
		if (esteNumarAproapePrim(v[i]) == true && v[i] > max) {
			max = v[i];
		}
	}
	return max;
}
void afisareMultipliiLuiCDinASiB(int a, int b, int c) {
	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}
bool apartineVector(int v[], int d, int n) {
	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			return true;
		}
	}
	return false;
}
int sumaCelorMaiMiciMELemente(int v[], int d, int m) {
	int vt[100], dt = 0;
	int ctr = 0;
	while (ctr < m) {
		int min = 9999;
		for (int i = 0; i < d; i++) {
			if (apartineVector(vt, dt, v[i]) == false && v[i] < min) {
				min = v[i];
			}
		}
		if (min != 9999) {
			vt[dt] = min;
			dt++;
		}
	}
	int s = 0;
	for (int j = 0; j < dt; j++) {
		s += vt[j];
	}
	return s;
}
int primulNumarStrictMaiMareCaX(int x) {
	int nr = 0;
	int cst = 0;
	for (int i = x + 1; cst == 0; i++) {
		if (numarPrim(i) == true) {
			nr = i;
			cst = 1;
		}
	}
	return nr;
}
int nrCifre(int n) {
	int nr = 0;
	while (n != 0) {
		nr++;
		n = n / 10;
	}
	return nr;
}
void afisareCeleMaiMiciDouaElementeCu2Cifre(int v[], int d) {
	int min1 = 999999;
	int min2 = 999999;
	for (int i = 0; i < d; i++) {
		if (nrCifre(v[i]) == 2 && v[i] < min1) {
			min1 = v[i];
		}
	}
	for (int j = 0; j < d; j++) {
		if (nrCifre(v[j]) == 2 && v[j] != min1 && v[j] > min2) {
			min2 = v[j];
		}
	}
}
int sumaElementeDivizibileCu3(int v[], int d) {
	int s = 0;
	for (int i = 0; i < d; i++) {
		if (i % 3 == 0) {
			s += v[i];
		}
	}
	return s;
}
int primaCifra(int n) {
	int pc = 0;
	while (n != 0) {
		int c = n % 10;
		pc = c;
		n = n / 10;
	}
	return pc;
}
bool primaCifraEgalCuUltima(int n) {
	int uc = n % 10;
	int pc = primaCifra(n);
	if (pc == uc) {
		return true;
	}
	else {
		return false;
	}
}
void afisareElementeCuPrimaSiUltimaCifraEgala(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (v[i] < 10) {
			cout << v[i] << " ";
		}
		else if (primaCifraEgalCuUltima(v[i]) == true) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
int sumaDivizorilorPropii(int n) {
	int s = 0;
	for (int x = 1; x < n; x++) {
		if (x != 1 && n % x == 0) {
			s += x;
		}
	}
	return s;
}
void afisareCrescatoareSumaDivizorilorElementelor(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		vt[dt] = sumaDivizorilorPropii(v[i]);
		dt++;
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
int ultimaCifraPara(int n) {
	while (n != 0) {
		int c = n % 10;
		if (c % 2 == 0) {
			return c;
		}
		n = n / 10;
	}
	return -1;
}
int celMaiMareNumarDinUltimeleCifrePareAleFiecaruiElement(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (ultimaCifraPara(v[i]) != -1) {
			vt[dt] = ultimaCifraPara(v[i]);
			dt++;
		}
	}
	bubbleSort(vt, dt);
	int nr = vectorInNumar(vt, dt);
	return nr;
}
void afisareElementeMaiMiciCaN(int v[], int d, int n) {
	for (int i = 0; i < d; i++) {
		if (v[i] < n) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisareNumereCrescatoareNenule(int v[], int d) {
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		if (v[i] >= 0) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisareNumereCrescatoarePeste3Cifre(int v[], int d) {
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		if (nrCifre(v[i]) >= 3) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisareNumereDescrescatoareSub2Cifre(int v[], int d) {
	bubbleSortDesc(v, d);
	for (int i = 0; i < d; i++) {
		if (nrCifre(v[i]) <= 2) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisarePrefixeNenule(int n) {
	while (n != 0) {
		cout << n << " ";
		n = n / 10;
	}
	cout << endl;
}
void afisareNumerePrimeCrescator(int v[], int d) {
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		if (numarPrim(v[i]) == true) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
int sumaPanaLaN(int v[], int d, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += v[i];
	}
	return n;
}
void afisarePrimaNSumaPanaLa0(int v[], int d) {
	int n = d - 1;
	while (n >= 0) {
		cout << sumaPanaLaN(v, d, n) << " ";
	}
	cout << endl;
}
int numarAparitiiVector(int v[], int d, int n) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			nr++;
		}
	}
	return nr;
}
void afisareUniceCuNrAparitii(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (apartineVector(v, d, v[i]) == false) {
			cout << v[i] << " " << numarAparitiiVector(v, d, v[i]) << " ";
			vt[dt] = v[i];
			dt++;
		}
	}
	cout << endl;
}
void afiarePrimeleNNumereDivCuk(int v[], int d, int n, int k) {
	int cnt = 0;
	for (int i = 0; cnt < k && i < d; i++) {
		if (v[i] % k == 0) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}