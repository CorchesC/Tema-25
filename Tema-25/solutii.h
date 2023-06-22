#pragma once
#include "functii.h"
#include "structuri.h"
using namespace std;

// \/ MANUAL VARIANTE \/

void sol1() {

	coordPuncte a;
	a.coordX = 0;
	a.coordY = 1;

	coordPuncte b;
	b.coordX = 8;
	b.coordY = 1;

	coordPuncte c;
	c.coordX = 4;
	c.coordY = 2;

	coordPuncte d;
	d.coordX = 5;
	d.coordY = 3;

	coordPuncte e;
	e.coordX = 5;
	e.coordY = 8;

	coordPuncte f;
	f.coordX = 10;
	f.coordY = 3;

	coordVarfuri a1;
	a1.coordX = 1;
	a1.coordY = 1;

	coordVarfuri b1;
	b1.coordX = 5;
	b1.coordY = 10;

	coordVarfuri c1;
	c1.coordX = 10;
	c1.coordY = 1;

	coordVarfuri crd[3] = { a1,b1,c1 };

	coordPuncte pct[6] = { a,b,c,d,e,f };

	int nr = 0;

	for (int i = 0; i < 6; i++) {
		nr += punctInAfaraTriunghiurilor(crd, pct[i].coordX, pct[i].coordY, 3);
	}

	cout << "Numar de puncte din afara triunghiul este: " << nr << endl;
}
void sol2() {
	int v[100], d = 0;
	citireVector(v, d);
	afisarePerechiOglindi(v, d);
}
void sol3() {
	int v[100], d = 0;
	citireVector(v, d);
	stergereElementeDuplicate(v, d);
	afisareVector(v, d);
}
void sol4() {

	fractii a;
	a.numarator = 10;
	a.numitor = 6;

	fractii b;
	b.numarator = 7;
	b.numitor = 8;

	fractii c;
	c.numarator = 5;
	c.numitor = 9;

	fractii d;
	c.numarator = 10;
	c.numitor = 10;

	fractii e;
	e.numarator = 4;
	e.numitor = 16;

	fractii frac[5] = { a,b,c,d,e };
	for (int i = 0; i < 5; i++) {
		esteFractieReductibila(frac, 5, i);
	}

}
void sol5() {
	int v[100], d = 0;
	citireVector(v, d);
	int prod = produsMax(v, d);
	cout << prod << endl;
}
void sol6() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol6(x, m, n);
	afisareMatrice(x, m, n);
}
void sol7() {

	eleviChimie a;
	a.nume = "Ionescu";
	a.nota1 = 10;
	a.nota2 = 8;

	eleviChimie b;
	b.nume = "Mincu";
	b.nota1 = 7;
	b.nota2 = 8;

	eleviChimie c;
	c.nume = "Voicu";
	c.nota1 = 5;
	c.nota2 = 9;

	eleviChimie d;
	d.nume = "Micu";
	d.nota1 = 10;
	d.nota2 = 10;

	eleviChimie e;
	e.nume = "Urdea";
	e.nota1 = 6;
	e.nota2 = 8;

	eleviChimie f;
	f.nume = "Dan";
	f.nota1 = 5;
	f.nota2 = 9;

	eleviChimie chim[6] = { a,b,c,d,e,f };

	sortareEleviChimie(chim, 6);
}
void sol8() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol8(x, m, n);
	afisareMatrice(x, m, n);
}
void sol9() {

	elevi12 a;
	a.nume = "Ionescu";
	a.prenume = "Fagaras";
	a.media1 = 10;
	a.media2 = 10;

	elevi12 b;
	b.nume = "Andrei";
	b.prenume = "Franc";
	b.media1 = 4;
	b.media2 = 3;

	elevi12 c;
	c.nume = "Dan";
	c.prenume = "Teopent";
	c.media1 = 8;
	c.media2 = 9;

	elevi12 d;
	d.nume = "Andrian";
	d.prenume = "Dragan";
	d.media1 = 4;
	d.media2 = 1;

	elevi12 elv[4] = { a,b,c,d };

	sefDePromorie(elv, 4);
	noBac(elv, 4);
}
void sol10() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol10(x, m, n);
	afisareMatrice(x, m, n);
}
void sol11() {
	int x[100][100], m = 5, n = 6;
	generareMatriceSol11(x, m, n);
	afisareMatrice(x, m, n);
}
void sol12() {
	
	dataSportivi a;
	a.nume = "Ionescu";  
	a.prenume = "Fagaras";
	a.luna = 10;
	a.an = 2005;

	dataSportivi b;
	b.nume = "Andrei";
	b.prenume = "Franc";
	b.luna = 4;
	b.an = 2003;

	dataSportivi c;
	c.nume = "Dan";
	c.prenume = "Teopent";
	c.luna = 8;
	c.an = 2006;

	dataSportivi d;
	d.nume = "Andrian";
	d.prenume = "Dragan";
	d.luna = 8;
	d.an = 2004;

	dataSportivi sprtv[4] = { a,b,c,d };

	medieVarsta(sprtv, 4);
}
void sol13() {
	int x[100][100], m = 6, n = 6;
	generareMatriceSol13(x, m, n);
	afisareMatrice(x, m, n);
}
void sol14() {
	
	bursaElevi a;
	a.nume = "Ionescu";
	a.prenume = "Fagaras";
	a.nrMembrii = 3;
	a.venitLunar = 12005;

	bursaElevi b;
	b.nume = "Andrei";
	b.prenume = "Franc";
	b.nrMembrii = 5;
	b.venitLunar = 20303;

	bursaElevi c;
	c.nume = "Dan";
	c.prenume = "Teopent";
	c.nrMembrii = 3;
	c.venitLunar = 32006;

	bursaElevi d;
	d.nume = "Andrian";
	d.prenume = "Dragan";
	d.nrMembrii = 4;
	d.venitLunar = 52000;

	bursaElevi burs[4] = { a,b,c,d };

	cout << "Introduceti limita: " << endl;
	int l;
	cin >> l;

	eleviFaraDreptLaBursa(burs, 4, l);
}
void sol15() {
	

	fractii a;
	a.numarator = 3;
	a.numitor = 4;

	fractii b;
	b.numarator = 36;
	b.numitor = 60;

	fractii c;
	c.numarator = 2;
	c.numitor = 4;

	fractii d;
	d.numarator = 12;
	d.numitor = 20;

	fractii frac[4] = { a,b,c,d };

	numarFractiiEchivalenteCuUltimul(frac, 4);

}
void sol16() {
	int x[100][100], m = 6, n = 6;
	generareMatriceSol16(x, m, n);
	afisareMatrice(x, m, n);
}
void sol17() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol17(x, m, n);
	afisareMatrice(x, m, n);
}
void sol18() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol18(x, m, n);
	afisareMatrice(x, m, n); (x, m, n);

}
void sol19() {
	
	inaltimeElevi a;
	a.nume = "Ionescu";
	a.prenume = "Fagaras";
	a.varsta = 13;
	a.inaltime = 200;

	inaltimeElevi b;
	b.nume = "Andrei";
	b.prenume = "Franc";
	b.varsta = 15;
	b.inaltime = 160;

	inaltimeElevi c;
	c.nume = "Dan";
	c.prenume = "Teopent";
	c.varsta = 16;
	c.inaltime = 175;

	inaltimeElevi d;
	d.nume = "Andrian";
	d.prenume = "Dragan";
	d.varsta = 17;
	d.inaltime = 154;

	inaltimeElevi inl[4] = { a,b,c,d };

	cout << "Introduceti a: " << endl;
	int x;
	cin >> x;

	cout << "Introduceti b: " << endl;
	int y;
	cin >> y;

	afisareEleviPesteNorma(inl, 4, x, y);
}
void sol20() {
	int x[100][100], m = 7, n = 7;
	generareMatriceSol20(x, m, n);
	afisareChar(x, m, n);
}
void sol21() {
	int x[100][100], m = 6, n = 6;
	generareMatriceSol21(x, m, n);
	afisareMatrice(x, m, n);
}
void sol22() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol22(x, m, n);
	afisareChar(x, m, n);
}
void sol23() {
	
	coordPuncte a;
	a.coordX = 0;
	a.coordY = 3;

	coordPuncte b;
	b.coordX = -8;
	b.coordY = 1;

	coordPuncte c;
	c.coordX = 3;
	c.coordY = -2;

	coordPuncte d;
	d.coordX = -5;
	d.coordY = 3;

	coordPuncte e;
	e.coordX = -5;
	e.coordY = -3;

	coordPuncte f;
	f.coordX = -10;
	f.coordY = -38;

	coordPuncte cord[6] = { a,b,c,d,e,f };

	int nr = coordonatePeOX(cord, 6);

	cout << "Numarul maxim de puncte pe OX este: " << nr << endl;
}
void sol24() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol24(x, m, n);
	afisareMatrice(x, m, n); (x, m, n);
}
void sol25() {
	int x[100][100], m = 4, n = 4;
	generareMatriceSol25(x, m, n);
	afisareChar(x, m, n);
}
void sol26() {
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int nr = nrNrInItervalCu3Div(a, b);
	cout << nr << endl;
}
void sol27() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int v[100], d = 0;
	numarInVectorImpar(n, v, d);
	bubbleSort(v, d);
	int num = vectorInNumar(v, d);
	cout << num << endl;

}
void sol28() {
	int x[100][100], m = 4, n = 4;
	generareMatriceSol28(x, m, n);
	afisareMatrice(x, m, n);
}
void sol29() {
	int x[100][100], m = 5, n = 5;
	generareMatriceSol29(x, m, n);
	afisareChar(x, m, n);
}

// \/ SITE \/ 

void sol30() {
	//Subprogramul f primeşte prin intermediul parametrului n un număr natural nenul (1≤n≤9), iar prin intermediul parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre acestea reprezentând câte o cifră a unui număr. Astfel, a0 reprezintă cifra unităţilor numărului, a1 cifra zecilor etc. Subprogramul furnizează prin parametrul k o valoare naturală egală cu numărul obţinut din cifrele pare reţinute în tabloul a sau valoarea - 1 dacă în tablou nu există nicio cifră pară. Scrieţi definiţia completă a subprogramului f.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = numarFormatDinCifrelePareDinVector(v, d);
	cout << nr << endl;
}
void sol31() {
	//Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale nenule n şi k (n≤100, k≤100) şi afişează pe ecran, separaţi prin câte un spaţiu, în ordine descrescătoare, cei mai mici k multipli naturali nenuli ai numărului n.
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	afisareDescrescaoarePrimiiKMultipliiLuiN(n, k);
}
void sol32() {
	// Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n (1≤n≤100) şi pe următoarea linie n numere întregi din intervalul[-1000; 1000], separate prin câte un spaţiu. Scrieţi un program C / C++ care citeşte din fişierul NUMERE.IN numărul natural n, construieşte în memorie un tablou unidimensional v cu cele n numere întregi aflate pe linia a doua în fişier şi utilizează apeluri utile ale subprogramului sterge pentru a elimina din tablou un număr minim de elemente astfel încât să nu existe două elemente alăturate cu aceeaşi  valoare.Elementele tabloului obţinut se afişează pe ecran, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	stergereElementeDuplicate(v, d);
	afisareVector(v, d);
}
void sol33() {
	//Scrieţi un program C/C++ care determină, folosind apeluri utile ale suprogramului primul, cel mai mare număr „aproape prim” de pe linia a doua a fişierului NUMERE.IN.În cazul în care există un astfel de număr se afişează pe ecran mesajul DA, urmat de numărul determinat, iar în caz contrar mesajul NU.
	int v[100], d = 0;
	citireVector(v, d);
	int max = celMaiMareNumarAproapePrim(v, d);
}
void sol34() {
	//Scrieţi definiţia completă a subprogramului multipli, cu trei parametri a,b,c (a≤b), numere naturale din intervalul[1, 10000] ce returnează numărul numărul multiplilor lui c din intervalul[a; b].
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	cout << "Introduceti c: " << endl;
	int c;
	cin >> c;
	afisareMultipliiLuiCDinASiB(a, b, c);
}
void sol35() {
	//Scrieţi definiţia completă a subprogramului suma care primeşte ca parametru un tablou unidimensional x cu cel mult 100 de elemente, numere reale, un număr natural n ce reprezintă numărul efectiv de elemente ale tabloului x(n≤100), şi un număr natural m(n≥m). Subprogramul returnează suma obţinută din cele mai mici m elemente ale tabloului x.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti m: " << endl;
	int m;
	cin >> m;
	int s = sumaCelorMaiMiciMELemente(v, d, m);
	cout << s << endl;
}
void sol36() {
	//Scrieţi definiţia completă a subprogramului nr_prim care are ca parametru un număr natural x şi returnează cel mai mic număr prim, strict mai mare decât x.
	cout << "Introduceti x: " << endl;
	int x;
	cin >> x;
	int nr = primulNumarStrictMaiMareCaX(x);
	cout << nr << endl;
}
void sol37() {
	//În fişierul numere.txt sunt memorate pe mai multe linii, numere întregi (cel mult 100), numerele de pe aceeaşi linie fiind despărţite prin câte un spaţiu, fiecare număr având cel mult 9 cifre.Să se determine cele mai mici două valori având exact două cifre fiecare, memorate în fişier şi să se afişeze pe ecran aceste valori, despărţite printr - un spaţiu.Dacă în fişier nu se află două astfel de valori, pe ecran se va afişa valoarea 0.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCeleMaiMiciDouaElementeCu2Cifre(v, d);
}
void sol38() {
	//Subprogramul sum3 primeşte prin parametrul x un tablou unidimensional, cu cel mult 100 de elemente, numere întregi cu cel mult 4 cifre fiecare, iar prin parametrul n un număr natural ce reprezintă numărul efectiv de elemente ale tabloului x(n≤100).Scrieţi definiţia completă a subprogramului sum3 care returnează suma elementelor tabloului care sunt divizibile cu 3. Dacă tabloul nu conţine nicio valoare divizibilă cu 3, subprogramul va returna 0.
	int v[100], d = 0;
	citireVector(v, d);
	int s = sumaElementeDivizibileCu3(v, d);
}
void sol39() {
	//Fişierul text numere.in conţine pe prima linie un număr natural n (0<n<1000), iar pe a doua linie n numere naturale cu cel mult 9 cifre fiecare, despărţite prin câte un spaţiu. Scrieţi un program C / C++ care citeşte toate numerele din fişier şi afişează pe ecran, separate prin câte un spaţiu, numerele de pe a doua linie a fişierului, care încep şi se termină cu aceeaşi cifră.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementeCuPrimaSiUltimaCifraEgala(v, d);
}
void sol40() {
	//)Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (0<n<100), apoi n numere naturale(cu cel mult 4 cifre fiecare).Programul determină, folosind apeluri utile ale subprogramului sum, pentru fiecare număr natural citit, suma divizorilor săi proprii şi afişează pe ecran sumele determinate, în ordinea crescătoare a valorilor lor, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareSumaDivizorilorElementelor(v, d);
}
void sol41() {
	//Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤15000), iar pe a doua linie a fişierului se află un şir de n numere naturale, despărţite prin câte un spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C / C++ care citeşte numerele din fişier şi afişează pe ecran, folosind apeluri utile ale subprogramului cifra, cel mai mare număr care se poate forma cu ultimele cifre pare ale fiecărui element, dacă acestea există.Alegeţi o metodă de rezolvare eficientă ca timp de executare.Dacă toate numerele de pe a doua linie a fişierului au numai cifre impare, programul va afişa mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = celMaiMareNumarDinUltimeleCifrePareAleFiecaruiElement(v, d);
}
void sol42() {
	//Subprogramul sub returnează numărul componentelor tabloului primit prin intermediul parametrului v ale căror valori sunt strict mai mici decât valoarea parametrului a.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	afisareElementeMaiMiciCaN(v, d, n);
}
void sol43() {
	//Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un spaţiu, cel mult 100 de numere întregi, fiecare număr având cel mult 4 cifre.Scrieţi un program C / C++ care citeşte numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine crescătoare, toate numerele naturale nenule din fişier.Dacă nu există astfel de numere se va afişa pe ecran mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	afisareNumereCrescatoareNenule(v, d);
}
void sol44() {
	//Fişierului text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult 100 de numere naturale, fiecare număr având cel mult 4 cifre.Scrieţi un program C / C++ care citeşte toate numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine crescătoare, toate numerele din fişier care au cel puţin 3 cifre. Dacă fişierul nu conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	afisareNumereCrescatoarePeste3Cifre(v, d);
}
void sol45() {
	//Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult 100 de numere naturale, fiecare număr având cel mult 4 cifre.Scrieţi un program C / C++ care citeşte numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine descrescătoare, toate numerele din fişier care au cel mult 2 cifre.Dacă fişierul nu conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	afisareNumereDescrescatoareSub2Cifre(v, d);
}
void sol46() {
	//Scrieţi un program C/C++ care citeşte de la tastură un număr natural n cu cel mult 8 cifre (n≥10)şi care creează fişierul text NR.TXT ce conţine numărul n şi toate prefixele nenule ale acestuia, pe o singură linie, separate prin câte un spaţiu, în ordine descrescătoare a valorii lor.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	afisarePrefixeNenule(n);
}
void sol47() {
	//Scrieţi un program C/C++ care să citească de la tastatură un număr natural nenul n (n≤100)şi apoi un şir de n numere naturale de cel mult 8 cifre fiecare, toate numerele din şir fiind strict mai mari decât 1. Folosind apeluri utile ale subprogramului f, programul va determina şi va afişa pe ecran toate numerele prime din şirul citit.Numerele determinate se vor afişa pe ecran, separate prin câte un spaţiu, în ordine crescătoare a valorii lor.Dacă nu există astfel de numere se va afişa pe ecran mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	afisareNumerePrimeCrescator(v, d);
}
void sol48() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤100) şi apoi cele n elemente, numere naturale cu cel mult 4 cifre fiecare, ale unui tablou unidimensional a.Programul afişează pe o linie a ecranului suma celor n elemente ale tabloului, pe următoarea linie a ecranului suma primelor n - 1 elemente şi aşa mai departe, astfel încât ultima linie afişată să conţină doar primul element al tabloului.
	int v[100], d = 0;
	citireVector(v, d);
	afisarePrimaNSumaPanaLa0(v, d);
}
void sol49() {
	// Să se scrie un program C/C++ care, folosind un algoritm eficient din punct de vedere al memoriei utilizate şi al timpului de executare, citeşte din fişier toţi termenii şirului şi afişează pe ecran, pe o singură linie, fiecare termen distinct al şirului urmat de numărul de apariţii ale acestuia în şir.Valorile afişate sunt separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareUniceCuNrAparitii(v, d);
}
void sol50() {
	//Scrieţi definiţia completă a subprogramului sub cu doi parametri: n (număr natural,0 < n≤50) şi k(număr natural, 0 < k≤20).Subprogramul determină afişarea pe o linie nouă a ecranului, în ordine descrescătoare, a primelor n numere naturale nenule divizibile cu k
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	afiarePrimeleNNumereDivCuk(v, d, n, k);
}