#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Product{

    private:
        int price;
        string idProduct;

    public:
        Product(){
            //konstruktor
        }

        Product(int harga, string id){
            //konstruktor
            price = harga;
            idProduct = id;
        }


        //set
        void setPrice(int harga){
            price = harga;
        }

        void setIdProduct(string id){
            idProduct = id;
        }

        //get
        int getPrice(){
            return price;
        }

        string getIdProduct(){
            return idProduct;
        }


        //methods
        void tampilkanProduct(){
            cout << "Price : " << getPrice() << endl;
            cout << "idProduct : " << getIdProduct() << endl;
        }


        ~Product(){
            //destruktor
        }

};


