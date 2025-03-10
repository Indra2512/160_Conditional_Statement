#include <iostream>
using namespace std;

double alas, tinggi;

void procedurInput(){
    cout << "Masukkan Nilai alas : ";
    cin >> alas;
    
    cout << "Masukkan Nilai tinggi : ";
    cin >> tinggi;
}

double HitungLuas(){
    return 0.5 * alas * tinggi;
}


void procedurOutput(){
    cout << "luas Segitiga = " << HitungLuas() << endl;

}

int main(){
    procedurInput();
    procedurOutput();
}