## Descriere temă: <br>
 Pe o planetă existau 3 regiuni, fiecare avea un alt mod în care era condusă. <br>
### Prima zonă
- condusă de o facțiune religioasă.
- fiecare cetatean are 4 obligatii de indeplinit.
- cetățenii care își îndeplinesc toate obligațiile față de cultul religios au dreptul la un 1 punct de vot atunci cand sunt decizii foarte importante de hotărât.
- cei care își neglijează una din îndatoriri pierd 0.2*nr de îndatoriri neglijate(astfel cineva care neglijează 2 îndatoriri va avea 0,6 puncte de vot). <br>
### A doua zonă
- dominată militar.
- oamenii normali nu au drept de vot.
- doar cei cu o anumită funcție pot sa voteze, votul lor este mai mult sau mai putin important in functie de pozitia avuta.
- funcțiile sunt pe o scala de la 1 (cetatean) la 10 (a doua persoană după conducător).
- cei care au drept de vot trebuiau să aibă minim 6 la valoarea funcției.
- valoarea votului = valoarea functiei. <br>
### A treia zonă
- are un conducător ales odată la 6 luni.
- conducătorul decide vârsta minimă atunci când se voteză o anumită lege(poate alege intre 14 +, 20 + sau 40 ani +).
- toti cetatenii care au varsta minima pentru a vota, au votul echivalent cu al celorlalti. <br>

## Formatul fișierului de input
Fișierul de input va conține:
- numărul corespunzător zonei și populația din acea zonă
- zona 1 va conține numărul de persoane care au respectat în următoarea ordine obligațiile: 4 3 2 1 0 (pentru exemplul de la final 30000 de persoane au respectat 3 obligații, adică au 0.8 puncte de vot).
- zona 2 va conține câte persoane au o anumită funcție în ordinea următoare: 10 9 8 7 6 5 4 3 2 1 (pentru exemplul de la final 7 persoane au funcția cu valoare 10 și 6500 de persoane au funcția cu valoarea 6).
- zona 3 va conține numărul de persoane din categoriile de vârstă în următoarea ordine: 0-14 14-20 20-40 40+ (pentru exemplul de mai jos 55000 de persoane sunt sub 14 ani, 39500 de persoane au o vârstă cuprinsă între 20 si 40 de ani).
- conducătorul nu voteză, astfel suma cetățenilor din categoriile fiecarei zone este mai mică cu 1 decât numarul total de cetățeni.
- următoarele linii contin numarul de întrebari + zona la care fac referință.
- sub întrebare exista 2 randuri în care se gasesc informațiile despre câte persoane au votat DA/NU conform formatului zonei de care aparțin.  <br>

## Formatul fișierului de output
Fișierul de ieșire va avea următorul format: <br>
&emsp;**Zona X** <br>
&emsp;**Întrebarea** <br>
&emsp;**Acceptat/Respins/Egalitate punctaj pentru DA – punctaj pentru NU** <br>
- Acestea trebuie să fie în fișierul de output în aceeași ordine în care au fost primite în fișierul de input.
- Adăugați și procentul din populația eligibilă să voteze care și-a exprimat această opțiune, nu rotunjiti cifrele din procente, daca aveti 0.239 afisati 23%. <br>
## Exemplu:
### Input.txt
 1 150000 <br>
 70000 30000 40000 9000 999 <br>
 2 230000 <br>
 7 240 345 1234 6500 12000 4000 56000 32000 117673 <br>
 3 195000 <br>
 55000 32000 39500 68499 <br>
 2 1 <br>
 Declaram 2 decembrie zi libera? <br>
 Da 20000 10000 15000 100 5 <br>
 Nu 14000 9000 25000 8900 994 <br>
 Oferim 1000 lei bonus de sarbatori? <br>
 Da 50000 9000 20000 5000 400 <br>
 Nu 1000 11000 10000 500 100 <br>
 1 2 <br>
 Doriti sa marim taxele cu 10%? <br>
 Da 2 100 300 1000 2000 <br>
 Nu 4 50 40 200 4500 <br>
 1 3 20 <br>
 Marim salariul minim cu 100 lei? <br>
 Da 40000 <br>
 NU 40000 <br>
### Output.txt
 Zona 1 <br>
 Declaram 2 decembrie zi libera? <br>
 Respins 37041.0-39958.8 <br>
 Prezenta vot: 68.66% <br>
 Oferim 1000 lei bonus de sarbatori? <br>
 Acceptat 71280.0-16020.0 <br>
 Prezenta vot: 71.33% <br>
 Zona 2 <br>
 Doriti sa marim taxele cu 10%? <br>
 Respins 22320-29210 <br>
 Prezenta vot: 98.43% <br>
 Zona 3 <br>
 Marim salariul minim cu 100 lei? <br>
 Egalitate 40000-40000 <br>
 Prezenta vot: 74.07% <br>
