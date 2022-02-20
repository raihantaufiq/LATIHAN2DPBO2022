from Hardware import Hardware

class Memory(Hardware):

    def __init__(self, hardware, freq, memory, cuda):
    #konstruktor
        self.price = hardware.getPrice()
        self.idProduct = hardware.getIdProduct()
        self.brand = hardware.getBrand()
        self.model = hardware.getModel()
        self.frequency = freq
        self.MemorySize = memory
        self.supportsCuda = cuda

    #set
    def setFrequency(self, frequency):
        self.frequency = frequency

    def setMemorySize(self, memorySize):
        self.MemorySize = memorySize

    def setSupportsCuda(self, supportsCuda):
        self.supportsCuda = supportsCuda

    #get
    def getFrequency(self):
        return self.frequency

    def getMemorySize(self):
        return self.MemorySize

    def getSupportsCuda(self):
        return self.supportsCuda
    
    #methods
    def tampilkanMemory(self):
        print("Price : " + str(self.getPrice()))
        print("idProduct : " + self.getIdProduct())
        print("Brand : " + self.getBrand())
        print("Model : " + self.getModel())
        print("Frequency : " + self.getFrequency())
        print("MemorySize : " + self.getMemorySize())
        print("SupportsCuda : " + self.getSupportsCuda())

