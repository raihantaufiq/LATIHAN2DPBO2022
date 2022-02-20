class Memory extends Hardware{
    
    private String frequency;
    private String memorySize;
    private String supportsCuda;

    Memory(){
        //konstruktor
    }

    Memory(Hardware x, String frequency, String memorySize, String supportsCuda){
        //konstruktor
        this.setPrice(x.getPrice());
        this.setIdProduct(x.getIdProduct());
        this.setBrand(x.getBrand());
        this.setModel(x.getModel());
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    Memory(int price, String idProduct, String brand, String model, String frequency, String memorySize, String supportsCuda){
        //konstruktor
        this.setPrice(price);
        this.setIdProduct(idProduct);
        this.setBrand(brand);
        this.setModel(model);
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    //get set
    public String getFrequency() {
        return frequency;
    }

    public void setFrequency(String frequency) {
        this.frequency = frequency;
    }

    public String getMemorySize() {
        return memorySize;
    }

    public void setMemorySize(String memorySize) {
        this.memorySize = memorySize;
    }

    public String getSupportsCuda() {
        return supportsCuda;
    }

    public void setSupportsCuda(String supportsCuda) {
        this.supportsCuda = supportsCuda;
    }

    //methods
    public void tampilkanMemory(){
        System.out.println("Price: " + getPrice());
        System.out.println("idProduct: " + getIdProduct());
        System.out.println("Brand: " + getBrand());
        System.out.println("Model: " + getModel());
        System.out.println("Frequency: " + getFrequency());
        System.out.println("MemorySize: " + getMemorySize());
        System.out.println("SupportsCuda: " + getSupportsCuda());
    }

}
