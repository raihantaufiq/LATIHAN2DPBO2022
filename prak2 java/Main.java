public class Main {
    
    public static void main(String[] args){

        Product[] product = new Product[2];
        Hardware[] hardware = new Hardware[2];
        Memory[] memory = new Memory[2];

        //mengisi data
        //produk
        product[0] = new Product(1000, "123");
        
        product[1] = new Product();
        product[1].setPrice(950);
        product[1].setIdProduct("404");

        //perangkat keras
        hardware[0] = new Hardware(product[0] ,"NICE", "N1");
        hardware[1] = new Hardware(product[1], "DEFY", "D1");

        //memory
        memory[0] = new Memory(hardware[0], "1000Mhz", "2GB", "Yes");
        memory[1] = new Memory(hardware[1], "800Mhz", "4GB", "No");


        //tampilkan
        int i;
        //produk
        System.out.println("--- Product ---");
        for(i=0; i<2; i++){
            System.out.println("===============");
            product[i].tampilkanProduct();
            System.out.println("");
        }

        //hardware
        System.out.println("--- Hardware ---");
        for(i=0; i<2; i++){
            System.out.println("===============");
            hardware[i].tampilkanHardware();
            System.out.println("");
        }

        //memory
        System.out.println("--- Memory ---");
        for(i=0; i<2; i++){
            System.out.println("===============");
            memory[i].tampilkanMemory();
            System.out.println("");
        }
        

    }

}
