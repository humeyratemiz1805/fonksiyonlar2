/* 
Welcome to JDoodle!

You can execute code here in 88 languages. Right now you’re in the C++ IDE.

  1. Click the orange Execute button ▶ to execute the sample code below and see how it works.

  2. Want help writing or debugging code? Type a query into JDroid on the right hand side ---------------->

  3. Try the menu buttons on the left. Save your file, share code with friends and open saved projects.

Want to change languages? Try the search bar up the top. 
*/

#include <iostream>
using namespace std;

// En büyük sayıyı bulan fonksiyon
int enBuyukSayiyiBulma(int hepsiniancakDizi[], int uzunluk)
{
    int enBuyukSayi = hepsiniancakDizi[0];

    for (int i = 1; i < uzunluk; i++)
    {
        if (hepsiniancakDizi[i] > enBuyukSayi)
        {
            enBuyukSayi = hepsiniancakDizi[i];
        }
    }
    return enBuyukSayi;
}

int main()
{
    int sayilar[5] = {5, 60, 55, 23, 41};
    int sayilar2[5] = {-5, -50, -55, -23, -41};

    int donudurulenDeger1 = enBuyukSayiyiBulma(sayilar, 5);
    cout << "1. dizideki en büyük sayı: " << donudurulenDeger1 << endl;

    int donudurulenDeger2 = enBuyukSayiyiBulma(sayilar2, 5);
    cout << "2. dizideki en büyük sayı: " << donudurulenDeger2 << endl;

    return 0;
}
