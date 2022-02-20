#import
from Product import Product
from Hardware import Hardware
from Memory import Memory

#isi data
#product
product = [] #buat array product

product.append(Product(1000, "123"))

product.append(Product(950, "404"))

#hardware
hardware = [] #buat array hardware

hardware.append(Hardware(product[0], "NICE", "N1"))

hardware.append(Hardware(product[1], "DEFY", "D1"))

#memory
memory = [] #buat array memory

memory.append(Memory(hardware[0], "1000Mhz", "2GB", "Yes"))

memory.append(Memory(hardware[1], "800Mhz", "4GB", "No"))


#tampilkan
#product
print("--- Product ---")
for i in range(2):
    print("===============")
    product[i].tampilkanProduct()
    print("")

#hardware
print("--- Hardware ---")
for i in range(2):
    print("===============")
    hardware[i].tampilkanHardware()
    print("")

#memory
print("--- Memory ---")
for i in range(2):
    print("===============")
    memory[i].tampilkanMemory()
    print("")

