package com.company;

 class Car {

    String name;
    public void vehicle() {

        System.out.println("   "+ name +"-> Starting Engine");
        System.out.println("   "+ name +"-> Accelerating at 300 meters per second");
    }

}

class Tesla extends Car {

    public void name_tesla() {
        System.out.println("\n Starting Tesla ------");
    }

    @Override
    public void vehicle() {
        super.vehicle();
        System.out.println("   " + name + "-> Consuming electric energy ");
        System.out.println("   "+ name +"-> Break");
    }
}

class BMW extends Car {

    public void name_bmw() {
        System.out.println("\n Starting BMW ------");
    }

    @Override
    public void vehicle() {
        super.vehicle();
        System.out.println("   "+ name +"-> Consuming oil energy ");
        System.out.println("   "+ name +"-> Break");
    }

}
class Porsche extends Car {

    public void name_porsche() {
        System.out.println("\n Starting Porsche ------");
    }
    @Override
    public void vehicle() {
        super.vehicle();
        System.out.println("   "+ name +"-> Consuming oil energy ");
        System.out.println("   "+ name +"-> Break");
    }

}
class Mercedes extends Car {

    public void name_mercedes() {
        System.out.println("\n Starting Mercedes ------");
    }
    @Override
    public void vehicle() {
        super.vehicle();
        System.out.println("   "+ name +"-> Consuming electric energy ");
        System.out.println("   "+ name +"-> Break");
    }

}

class Main {
    public static void main(String[] args) {

        // create an object of subclass
        Tesla car1 = new Tesla();
        car1.name_tesla();
        car1. name = "Tesla";
        car1.vehicle();

        // create an object of subclass
        BMW car2 = new BMW();
        car2.name_bmw();
        car2. name = "BMW";
        car2.vehicle();

        // create an object of subclass
        Porsche car3 = new Porsche();
        car3.name_porsche();
        car3. name = "Porsche";
        car3.vehicle();

        // create an object of subclass
        Mercedes car4 = new Mercedes();
        car4.name_mercedes();
        car4. name = "Mercedes";
        car4.vehicle();

    }
}
