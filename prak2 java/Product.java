class Product{

    private int price;
    private String idProduct;

    Product(){
        //konstruktor
    }

    Product(int price, String idProduct){
        //konstruktor
        this.price = price;
        this.idProduct = idProduct;
    }

    //get set
    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public String getIdProduct() {
        return idProduct;
    }

    public void setIdProduct(String idProduct) {
        this.idProduct = idProduct;
    }

    //methods
    public void tampilkanProduct(){
        System.out.println("Price: " + getPrice());
        System.out.println("idProduct: " + getIdProduct());
    }

}
