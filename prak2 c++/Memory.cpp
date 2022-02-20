#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Memory : public Hardware{

    private:
        string frequency;
        string memorySize;
        string supportsCuda;

    public:
        Memory(){
            //konstruktor
        }

        Memory(Hardware x, string fr, string me, string su){
            //konstruktor
            this->setPrice(x.getPrice());
            this->setIdProduct(x.getIdProduct());
            this->setBrand(x.getBrand());
            this->setModel(x.getModel());
            frequency = fr;
            memorySize = me;
            supportsCuda = su;
        }

        Memory(int pr, string id, string br, string mo, string fr, string me, string su){
            //konstruktor
            this->setPrice(pr);
            this->setIdProduct(id);
            this->setBrand(br);
            this->setModel(mo);
            frequency = fr;
            memorySize = me;
            supportsCuda = su;
        }


        //set
        void setFrequency(string fr){
            frequency = fr;
        }

        void setMemorySize(string me){
            memorySize = me;
        }

        void setSupportsCuda(string su){
            supportsCuda = su;
        }

        //get
        string getFrequency(){
            return frequency;
        }

        string getMemorySize(){
            return memorySize;
        }

        string getSupportsCuda(){
            return supportsCuda;
        }


        //methods
        void tampilkanMemory(){
            cout << "Price : " << getPrice() << endl;
            cout << "idProduct : " << getIdProduct() << endl;
            cout << "Brand : " << getBrand() << endl;
            cout << "Model : " << getModel() << endl;
            cout << "Frequency : " << getFrequency() << endl;
            cout << "MemorySize : " << getMemorySize() << endl;
            cout << "SupportsCuda : " << getSupportsCuda() << endl;
        }


        ~Memory(){
            //destruktor
        }

};
