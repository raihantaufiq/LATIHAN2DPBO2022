from Product import Product

class Hardware(Product):

    def __init__(self, product, brand, model):
    #konstruktor
        self.price = product.getPrice()
        self.idProduct = product.getIdProduct()
        self.brand = brand
        self.model = model

    #set
    def setBrand(self, brand):
        self.brand = brand

    def setModel(self, model):
        self.model = model

    #get
    def getBrand(self):
        return self.brand

    def getModel(self):
        return self.model

    #methods
    def tampilkanHardware(self):
        print("Price : " + str(self.getPrice()))
        print("idProduct : " + self.getIdProduct())
        print("Brand : " + self.getBrand())
        print("Model : " + self.getModel())

