<?php

class Memory extends Hardware{

    private $frequency;
    private $memorySize;
    private $supportsCuda;

    function __construct($hardware, $fr, $me, $su){
        //konstruktor
        $this->setPrice($hardware->getPrice());
        $this->setIdProduct($hardware->getIdProduct());
        $this->setBrand($hardware->getBrand());
        $this->setModel($hardware->getModel());
        $this->frequency = $fr;
        $this->memorySize = $me;
        $this->supportsCuda = $su;
    }


    //set
    public function setFrequency($fr){
        $this->frequency = $fr;
    }

    public function setMemorySize($me){
        $this->memorySize = $me;
    }

    public function setSupportsCuda($su){
        $this->supportsCuda = $su;
    }

    //get
    public function getFrequency(){
        return $this->frequency;
    }

    public function getMemorySize(){
        return $this->memorySize;
    }

    public function getSupportsCuda(){
        return $this->supportsCuda;
    }


    //methods
    public function tampilkanMemory(){
        echo "Price : ".$this->getPrice()."<br/>";
        echo "idProduct : ".$this->getIdProduct()."<br/>";
        echo "Brand : ".$this->getBrand()."<br/>";
        echo "Model : ".$this->getModel()."<br/>";
        echo "Frequency : ".$this->getFrequency()."<br/>";
        echo "MemorySize : ".$this->getMemorySize()."<br/>";
        echo "SupportsCuda : ".$this->getSupportsCuda()."<br/>";
    }


    function __destruct(){
        //destruktor
    }

}

?>
