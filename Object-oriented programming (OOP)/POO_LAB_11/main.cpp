#include "pisici.cpp"
#include "pui.cpp"
#include "tinere.cpp"
#include "mature.cpp"

#include <cstring>

int main()
{
	
	//In cate zile ajunge la capacitate de 50%
	
	int nr_initial = 300;
    for(int i=1;i<500;i++)
    {
		nr_initial =  nr_initial - 2;
    	if(nr_initial == 150) cout << "Ajunge la 50% in " << i << " de zile" << endl << endl;
	}
	
	
    //Cat consuma pisicile
    
  	int nr_pisici= 300;
  	int mancare=0;
  	for(int i=0;i<100;i++)
    {
    	mancare = mancare + nr_pisici*100;
		nr_pisici =  nr_pisici - 2;
	}
	cout << "Pisicile consuma "<< mancare << " grame de mancare" << endl << endl;
	
		
	Pisici **v;
	Pisici *aux;
	
	v = new Pisici*[9];
	
	v[0] = new Pui ("Tom", 1, "Jucaus", 1,1);
	v[1] = new Pui("Ghita", 0, "Frumos", 0,0);
	v[2] = new Pui("Motanel", 1, "Dragalas", 1,2);
	v[3] = new Tinere("Targoviste", 2, "Simpatic", 1,0);
	v[4] = new Tinere("Pisicut", 2, "Linistit", 0,2);
	v[5] = new Tinere("Tonel", 3, "Slab", 1,2);
	v[6] = new Mature("Kiliut", 4, "Ascultator", 0,2);
	v[7] = new Mature("Rusia", 8, "Orfan", 1,1);
	v[8] = new Mature("Mustata", 5, "Rau", 1,0);
	
	cout << "Pisicile sunt: " << endl << endl;
	
	for(int i = 0 ; i < 9 ; i ++)
	{
	  v[i]->afisare();
	}
	 	 
	cout << endl;	
	  
	  
	//Cate din fiecare categorie  
	  
    int pui=0, tinere=0, mature=0;
    for(int i = 0 ; i < 9 ; i ++)
    {
    	if(v[i]->getVarsta() <=1) pui = pui+1;
    	if(v[i]->getVarsta() >1 && v[i]->getVarsta() <= 3) tinere = tinere+1;
    	if(v[i]->getVarsta() >3) mature = mature+1;
	}
	
	cout << "Pisici pui: " << pui << endl;
	cout << "Pisici tinere " << tinere << endl;
	cout << "Pisici mature " << mature << endl;
	cout << endl;


    //Cate din fiecare culoare

    int pui_alb=0, pui_negru=0, pui_colorat=0;
    for(int i = 0 ; i < 9 ; i ++)
    {
    	if(v[i]->getVarsta() <=1 && v[i]->getCuloare()==0) pui_alb = pui_alb+1;
    	if(v[i]->getVarsta() <=1 && v[i]->getCuloare()==1) pui_negru = pui_negru+1;
    	if(v[i]->getVarsta() <=1 && v[i]->getCuloare()==2) pui_colorat = pui_colorat+1;
	}
	
	cout << "Pui albe: " << pui_alb << endl;
	cout << "Pui negre " << pui_negru << endl;
	cout << "Pui colorate " << pui_colorat << endl;
	cout << endl;
	
	
	int tinere_alb=0, tinere_negru=0, tinere_colorat=0;
    for(int i = 0 ; i < 9 ; i ++)
    {
    	if(v[i]->getVarsta() >1 && v[i]->getVarsta() <= 3 && v[i]->getCuloare()==0) tinere_alb = tinere_alb+1;
    	if(v[i]->getVarsta() >1 && v[i]->getVarsta() <= 3 && v[i]->getCuloare()==1) tinere_negru = tinere_negru+1;
    	if(v[i]->getVarsta() >1 && v[i]->getVarsta() <= 3 && v[i]->getCuloare()==2) tinere_colorat = tinere_colorat+1;
	}
	
	cout << "Tinere albe: " << tinere_alb << endl;
	cout << "Tinere negre " << tinere_negru << endl;
	cout << "Tinere colorate " << tinere_colorat << endl;
	cout << endl;
	
	
	int mature_alb=0, mature_negru=0, mature_colorat=0;
    for(int i = 0 ; i < 9 ; i ++)
    {
    	if(v[i]->getVarsta() >3 && v[i]->getCuloare()==0) mature_alb = mature_alb+1;
    	if(v[i]->getVarsta() >3 && v[i]->getCuloare()==1) mature_negru = mature_negru+1;
    	if(v[i]->getVarsta() >3 && v[i]->getCuloare()==2) mature_colorat = mature_colorat+1;
	}
	
	cout << "Mature albe: " << mature_alb << endl;
	cout << "Mature negre " << mature_negru << endl;
	cout << "Mature colorate " << mature_colorat << endl;
	cout << endl;
	
	
	//Cate sunt vaccinate
	
	int pui_vaccin=0, tinere_vaccin=0, mature_vaccin=0;
	for(int i = 0 ; i < 9 ; i ++)
	{
		if(v[i]->getVaccin()==1 && v[i]->getVarsta() <=1) pui_vaccin= pui_vaccin+1;
		if(v[i]->getVaccin()==1 && v[i]->getVarsta() >1 && v[i]->getVarsta() <= 3) tinere_vaccin= tinere_vaccin+1;
		if(v[i]->getVaccin()==1 && v[i]->getVarsta() >1) mature_vaccin= mature_vaccin+1;
	}
	
	cout << "Pui vaccinati: " << pui_vaccin << endl;
	cout << "Tinere vaccinate " << tinere_vaccin << endl;
	cout << "Mature vaccinate " << mature_vaccin << endl;
	cout << endl;
	
	
	//Afisare cea mai lunga descriere
	
	for(int i = 0; i < 9; i++)
		for(int j = i; j < 9; j++)
			if(strlen(v[i]->getDescriere()) < strlen(v[j]->getDescriere()))
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
			
	cout <<	endl << "Top 3 pisici care au cea mai lunga descriere: " << endl << endl;
	for(int i = 0; i < 3; i++)
		v[i]->afisare();


	return 0;
}
