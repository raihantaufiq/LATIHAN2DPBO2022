<?php

class Hardware extends Product{

    private $brand;
    private $model;

    function __construct($product, $br, $mo){
        //konstruktor
        $this->setPrice($product->getPrice());
        $this->setIdProduct($product->getIdProduct());
        $this->brand = $br;
        $this->model = $mo;
    }


    //set
    public function setBrand($br){
        $this->brand = $br;
    }

    public function setModel($mo){
        $this->model = $mo;
    }

    //get
    public function getBrand(){
        return $this->brand;
    }

    public function getModel(){
        return $this->model;
    }


    //methods
    public function tampilkanHardware(){
        echo "Price : ".$this->getPrice()."<br/>";
        echo "idProduct : ".$this->getIdProduct()."<br/>";
        echo "Brand : ".$this->getBrand()."<br/>";
        echo "Model : ".$this->getModel()."<br/>";
    }


    function __destruct(){
        //destruktor
    }

}

?>
