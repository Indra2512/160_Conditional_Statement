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

double hitungluas2(double a, double b){
    return 0.5 * a * b;
}

void procedurOutput(){
    cout << "luas Segitiga = " << HitungLuas() << endl;

}

string UkuranSegitiga(double l){
    //jika luas lebih dari 60

    if (l > 60){
        return "besar";
    }
    else{
        return "kecil";
    }
}
void procedurOutput2(){
    cout << "luas Segitiga = " << UkuranSegitiga(hitungluas2(alas, tinggi)) << endl;
}

int main(){
    procedurInput();
    procedurOutput2();

}