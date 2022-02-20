#include <iostream>
#include "Product.cpp"
#include "Hardware.cpp"
#include "Memory.cpp"

using std::cout;
using std::endl;

int main(){

    Product product[2];
    Hardware hardware[2];
    Memory memory[2];

    //isi data
    //produk
    product[0] = Product(1000, "123");

    product[1].setPrice(950);
    product[1].setIdProduct("404");

    //hardware
    hardware[0] = Hardware(product[0], "NICE", "N1");
    hardware[1] = Hardware(product[1], "DEFY", "D1");

    //memory
    memory[0] = Memory(hardware[0], "1000Mhz", "2GB", "Yes");
    memory[1] = Memory(hardware[1], "800Mhz", "4GB", "No");


    //tampilkan
    int i;
    //produk
    cout << "--- Product ---" << endl;
    for(i=0; i<2; i++){
        cout << "===============" << endl;
        product[i].tampilkanProduct();
        cout << "" << endl;
    }

    //hardware
    cout << "--- Hardware ---" << endl;
    for(i=0; i<2; i++){
        cout << "===============" << endl;
        hardware[i].tampilkanHardware();
        cout << "" << endl;
    }

    //memory
    cout << "--- Memory ---" << endl;
    for(i=0; i<2; i++){
        cout << "===============" << endl;
        memory[i].tampilkanMemory();
        cout << "" << endl;
    }

    return 0;
}