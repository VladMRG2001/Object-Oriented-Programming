#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

#include "baza.cpp"
#include "zona1.cpp"
#include "zona2.cpp"
#include "zona3.cpp"

int main() {

    ifstream input;
    ofstream output;
    input.open("input.txt");
    output.open("output.txt");

    if (!input.is_open()) {
        cout << "EROARE INPUT" << endl;
        return -1;
    }
    if (!output.is_open()) {
        cout << "EROARE OUTPUT" << endl;
        return -1;
    }

    string text;
    int tip, nr, ani;
    Baza **zone;
    zone = new Baza *[3];
    float punctaj_da, punctaj_nu;

    // Citirea din fisier
    for (int i = 0; i < 3; i++) {
        int populatie = 0;
        input >> tip;

        if (tip == 1) {
            input >> populatie;
            int v[5];
            for (int j = 0; j < 5; j++) {
                input >> v[j];
            }
            zone[i] = new zona1(populatie, v);
        } 
        else if (tip == 2) {
            input >> populatie;
            int v[10];
            for (int j = 0; j < 10; j++) {
                input >> v[j];
            }
            zone[i] = new zona2(populatie, v);
        } 
        else if (tip == 3) {
            input >> populatie;
            int v[4];
            for (int j = 0; j < 4; j++) {
                input >> v[j];
            }
            zone[i] = new zona3(populatie, v);
        }
    }
    // Afisarea datelor citite din fisier (pentru a ne asigura ca am citit ce trebuie)
    for (int i = 0; i < 3; i++)
        zone[i]->afisare();

    // Calcul punctaj voturi si scriere in fisier
    for (int i = 0; i < 3; i++) {
        input >> nr >> tip;
        if (tip == 3)
            input >> ani;
        
        output << "Zona " << i + 1 << endl;

        for (int j = 0; j < nr; j++) {
            input.ignore();
            getline(input, text);
            output << text << endl;
            input >> text;

            if (tip == 1) {
                int da[5], nu[5];
                cout << "Voturi pentru DA 1: ";
                for (int k = 0; k < 5; k++) {
                    input >> da[k];
                    cout << da[k] << " ";
                }
                cout << endl;

                input >> text;
                cout << "Voturi pentru NU 1: ";
                for (int k = 0; k < 5; k++) {
                    input >> nu[k];
                    cout << nu[k] << " ";
                }
                cout << endl;

                punctaj_da = zone[i]->punctaj_da(da, 0);
                punctaj_nu = zone[i]->punctaj_nu(nu, 0);

                if (punctaj_da > punctaj_nu)
                    output << "Acceptat ";
                else if (punctaj_da < punctaj_nu)
                    output << "Respins ";
                else
                    output << "Egalitate ";

                output << fixed << setprecision(1) << punctaj_da << "-" << punctaj_nu << endl;
                float aux = zone[i]->prezenta_vot(da, nu, 0);
                output << "Prezenta vot:" << fixed << setprecision(2) << floor(100 * aux) / 100 << "%" << endl;
            } 
            else if (tip == 2) {
                int da_2[10], nu_2[10];
                cout << "Voturi pentru DA 2: ";
                for (int k = 0; k < 5; k++) {
                    input >> da_2[k];
                    cout << da_2[k] << " ";
                }
                cout << endl;

                input >> text;
                cout << "Voturi pentru NU 2: ";
                for (int k = 0; k < 5; k++) {
                    input >> nu_2[k];
                    cout << nu_2[k] << " ";
                }
                cout << endl;

                punctaj_da = zone[i]->punctaj_da(da_2, 0);
                punctaj_nu = zone[i]->punctaj_nu(nu_2, 0);

                if (punctaj_da > punctaj_nu)
                    output << "Acceptat ";
                else if (punctaj_da < punctaj_nu)
                    output << "Respins ";
                else
                    output << "Egalitate ";

                output << fixed << setprecision(1) << punctaj_da << "-" << punctaj_nu << endl;
                float aux = zone[i]->prezenta_vot(da_2, nu_2, 0);
                output << "Prezenta vot:" << fixed << setprecision(2) << floor(100 * aux) / 100 << "%" << endl;
            } 
            else if (tip == 3) {
                int da[4], nu[4];
                cout << "Voturi pentru DA 3: ";
                input >> da[0];
                cout << da[0] << " ";
                cout << endl;
                input >> text;
                cout << "Voturi pentru NU 3: ";
                input >> nu[0];
                cout << nu[0] << " ";
                cout << endl;

                punctaj_da = zone[i]->punctaj_da(da, 0);
                punctaj_nu = zone[i]->punctaj_nu(nu, 0);

                if (punctaj_da > punctaj_nu)
                    output << "Acceptat ";
                else if (punctaj_da < punctaj_nu)
                    output << "Respins ";
                else
                    output << "Egalitate ";

                output << fixed << setprecision(1) << da[0] << "-" << nu[0] << endl;
                float aux = zone[i]->prezenta_vot(da, nu, ani);
                output << "Prezenta vot:" << fixed << setprecision(2) << floor(100 * aux) / 100 << "%" << endl;
            }
        }
    }

    input.close();
    output.close();

    // Eliberare memorie
    for (int i = 0; i < 3; i++) {
        delete zone[i];
    }

    delete[] zone;

    return 0;
}
