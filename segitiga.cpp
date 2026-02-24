#include <iostream>
using namespace std;

int main()

{//langkah 1 mulai 
    
float alas,tinggi,luas;

//langkah 2 masukan alas
cout << "masukan alas: ";
cin >> alas;

//langkah 3 masukan tinggi
cout << "masukan tinggi: ";
cin >> tinggi;

//langkah 4 hitung luas 0.5 x alas x tinggi
luas = 0.5*alas*tinggi;

//langkah 5 hasil
cout << "luas segitiga adalah: "
<< luas << endl;

return 0;

}//selesai