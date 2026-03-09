#include <iostream>
using namespace std;

float berat, tinggi; 

void inputbmi()
 {
    cout << "\n--- Selamat Datang Mahasiswa Kelas A 2026 ---" << endl;
    cout << "Masukkan Berat Badan (kg): ";
    cin >> berat;
    cout << "Masukkan Tinggi Badan (m): ";
    cin >> tinggi;

}

 float hitungbmi (float a, float b)
{
    return a / (b * b);

}
   
string statusbmi (float bmi)
{
    if (bmi < 18.5)
        return "Berat badan kurang";
    else if (bmi < 25)
        return "Berat badan normal";
    else if (bmi < 30)
        return "Berat badan kelebihan";
    else 
        return "Obesitas";
        
}

int main() 
{
    inputbmi();

    float bmi = hitungbmi (berat, tinggi);
    cout << "\n--- Hasil ---" << endl;
    cout << "\nNilai BMI : " << bmi << endl;
   
    return 0;


}
 