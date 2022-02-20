<?php

class Product{

    private $price;
    private $idProduct;

    function __construct($pr, $id){
        //konstruktor
        $this->price = $pr;
        $this->idProduct = $id;
    }


    //set
    public function setPrice($pr){
        $this->price = $pr;
    }

    public function setIdProduct($id){
        $this->idProduct = $id;
    }

    //get
    public function getPrice(){
        return $this->price;
    }

    public function getIdProduct(){
        return $this->idProduct;
    }

    
    //methods
    public function tampilkanProduct(){
        echo "Price : ".$this->getPrice()."<br/>";
        echo "idProduct : ".$this->getIdProduct()."<br/>";
    }


    function __destruct(){
        //destruktor
    }

}

?>
