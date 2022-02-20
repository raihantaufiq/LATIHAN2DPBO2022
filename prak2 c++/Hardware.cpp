#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Hardware : public Product{

    private:
        string brand;
        string model;

    public:
        Hardware(){
            //konstruktor
        }

        Hardware(Product x, string br, string mo){
            //konstruktor
            this->setPrice(x.getPrice());
            this->setIdProduct(x.getIdProduct());
            brand = br;
            model = mo;
        }

        Hardware(int pr, string id, string br, string mo){
            //konstruktor
            this->setPrice(pr);
            this->setIdProduct(id);
            brand = br;
            model = mo;
        }


        //set
        void setBrand(string br){
            brand = br;
        }

        void setModel(string mo){
            model = mo;
        }

        //get
        string getBrand(){
            return brand;
        }

        string getModel(){
            return model;
        }


        //methods
        void tampilkanHardware(){
            cout << "Price : " << getPrice() << endl;
            cout << "idProduct : " << getIdProduct() << endl;
            cout << "Brand : " << getBrand() << endl;
            cout << "Model : " << getModel() << endl;
        }


        ~Hardware(){
            //destruktor
        }

};