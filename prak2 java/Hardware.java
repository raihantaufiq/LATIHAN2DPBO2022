class Hardware extends Product{
    
    private String brand;
    private String model;

    Hardware(){
        //konstruktor
    }

    Hardware(Product x, String brand, String model){
        //konstruktor
        this.setPrice(x.getPrice());
        this.setIdProduct(x.getIdProduct());
        this.brand = brand;
        this.model = model;
    }

    Hardware(int price, String idProduct, String brand, String model){
        //konstruktor
        this.setPrice(price);
        this.setIdProduct(idProduct);
        this.brand = brand;
        this.model = model;
    }

    //get set
    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    //methods
    public void tampilkanHardware(){
        System.out.println("Price: " + getPrice());
        System.out.println("idProduct: " + getIdProduct());
        System.out.println("Brand: " + getBrand());
        System.out.println("Model: " + getModel());
    }

}
