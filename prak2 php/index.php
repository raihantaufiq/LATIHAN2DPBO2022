<?php

    include "Product.php";
    include "Hardware.php";
    include "Memory.php";

    //isi data
    //product
    $product[0] = new Product(1000, "123");
    $product[1] = new Product(950, "404");

    //hardware
    $hardware[0] = new Hardware($product[0], "NICE", "N1");
    $hardware[1] = new Hardware($product[1], "DEFY", "D1");

    //memory
    $memory[0] = new Memory($hardware[0], "1000Mhz", "2GB", "Yes");
    $memory[1] = new Memory($hardware[1], "800Mhz", "4GB", "No");


    //tampilkan
    //product
    echo "--- Product ---<br/>";
    for ($i=0; $i<2; $i++) {
        echo "===============<br/>";
        $product[$i]->tampilkanProduct();
        echo "<br/>";
    }

    //hardware
    echo "--- Hardware ---<br/>";
    for ($i=0; $i<2; $i++) {
        echo "===============<br/>";
        $hardware[$i]->tampilkanHardware();
        echo "<br/>";
    }

    //memory
    echo "--- Memory ---<br/>";
    for ($i=0; $i<2; $i++) {
        echo "===============<br/>";
        $memory[$i]->tampilkanMemory();
        echo "<br/>";
    }

?>
