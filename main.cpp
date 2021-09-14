
#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
using std::setprecision;
using std::left;


struct studentas {
    string vardas, pavarde;
    float paz[4];
    float egz;
    float galutinis;

};

void print(studentas);
void mediana(int pazymiai);

int main() {
    cout << "Iveskite studentu skaiciu" << endl;
    int n; 
    cin >> n; 
    studentas grupe[n];
    float sum = 0; 
    for (int i = 0; i < n; i++) { 
        cout << "Iveskite " << i + 1 << "-o studento varda ir pavarde:";
        cin >> grupe[i].vardas >> grupe[i].pavarde;
        sum = 0;
        for (int j = 0; j < 4; j++) {
            cout << "Iveskite " << j + 1 << "pazymio iverti:";
            cin >> grupe[i].paz[j];
            sum += grupe[i].paz[j];
        }
        cout << "Iveskite " << i + 1 << "-o studento egzamino pazymi:";
        cin >> grupe[i].egz;
        grupe[i].galutinis = 0.4 * sum / 4. + 0.6 * grupe[i].egz;
        
    }
    for (auto & kint : grupe) {
      print(kint);
       
    }
}

void print(studentas kint){
  cout<<"\n";
  cout << setw(20) << left << "Vardas"
        << setw(20) <<left << "Pavarde"<<setw(15)<<left<<"ND1"<<setw(15)<<left<<"ND2"<<setw(15)<<left<<"ND3"
        <<setw(15)<<left<<"ND4"<<setw(15)<<left<<"Egzaminas"
        << setw(20) <<left << "Galutinis(vid.)"
        <<"\n-----------------------------------------------------------------------------------------------------------------------------------\n";
   cout << setw(20) << kint.vardas << std::setw(20) << kint.pavarde;
        for (auto& i : kint.paz)cout << setw(15) << i;
        cout <<setw(15) << kint.egz <<setw(20)<<setprecision(2)<<  kint.galutinis <<endl;
}
