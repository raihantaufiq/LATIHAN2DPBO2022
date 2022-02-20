class Product:

    def __init__(self, price, id):
    #konstruktor
        self.price = price
        self.idProduct = id

    #set
    def setPrice(self, price):
        self.price = price

    def setIdProduct(self, idProduct):
        self.idProduct = idProduct

    #get
    def getPrice(self):
        return self.price

    def getIdProduct(self):
        return self.idProduct

    #methods
    def tampilkanProduct(self):
        print("Price : " + str(self.getPrice()))
        print("idProduct : " + self.getIdProduct())

