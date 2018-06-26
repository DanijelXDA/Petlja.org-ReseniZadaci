#include <iostream>
#include <iomanip>
using namespace std;

// Funkcija koja izracunava najmanji od 5 datih brojeva
int Minimum5Brojeva(int broj1, int broj2, int broj3, int broj4, int broj5) {
  int minimum = broj1;
  if (broj2 < minimum)
     minimum = broj2;
  if (broj3 < minimum)
     minimum = broj3;
  if (broj4 < minimum)
     minimum = broj4;
  if (broj5 < minimum)
     minimum = broj5;
  return minimum;
}

int main() {
   // Ulazni podaci i njihovo ucitavanje
   int ocena1, ocena2, ocena3, ocena4, ocena5;
   cin >> ocena1 >> ocena2 >> ocena3 >> ocena4 >> ocena5;

   // Izracunavanje trazenog proseka
   int zbirSvihOcena = ocena1 + ocena2 + ocena3 + ocena4 + ocena5;
   int najlosijaOcena = Minimum5Brojeva(ocena1, ocena2, ocena3, ocena4, ocena5);
   int zbirOcenaBezNajlosije = zbirSvihOcena - najlosijaOcena;
   double prosekOcenaBezNajlosije = zbirOcenaBezNajlosije / 4.0;
   // broj kojim se deli mora biti realan jer bi inace bilo primenjeno
   // celobrojno deljenje

   // Prikaz rezultata
   cout << fixed << showpoint << setprecision(2)
	<< prosekOcenaBezNajlosije << endl;

   return 0;
}
