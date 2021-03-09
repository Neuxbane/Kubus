#include <iostream>

float kubus(float p, float l, float t, float v){// Sebagai Rumus
    float re;
    if (p == 0) re = v/(l*t);// Jika Panjang tidak diketahui maka rumusnya Volume / (Lebar * Tinggi)
    if (l == 0) re = v/(p*t);// Jika Lebar tidak diketahui maka rumusnya Volume / (Panjang * Tinggi)
    if (t == 0) re = v/(l*p);// Jika Tinggi yang tidak diketahui maka rumusnya Volume / (Lebar * Panjang)
    if (v == 0) re = l*p*t;// Jika Volume yang tidak diketahui maka rumusnya Lebar * Panjang * Tinggi
    return re;
}

int main(){
    float p,l,t,v;// Digunakan untuk mendeskripsikan Variable
    std::cout << "Panjang Kubus: ";
    std::cin >> p;// p untuk Panjang
    std::cout << "Lebar Kubus: ";
    std::cin >> l;// l untuk Lebar
    std::cout << "Tinggi Kubus: ";
    std::cin >> t;// t untuk Tinggi
    std::cout << "Vloume Kubus: ";
    std::cin >> v;// v untuk Volume
    std::cout << "\nHasil: " << kubus(p,l,t,v) << "\n";// Digunakan untuk menampilkan hasilnya
    return 0;
}