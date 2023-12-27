
public class Main {

  public static void main(String[] args) {
	  
    Pizza pizza = new Pizza("Basic", "Thin Crust", "Mozzarella Cheese", 4.99);
    pizza.addAdditional("Ham", 1.49);
    pizza.ItemizedPizza();
    pizza.addAdditional("Egg", 0.99);
    pizza.addAdditional("Coke", 0.29);
    System.out.printf("\nTotal price is: [$%.2f]", pizza.getTotal_Price());
    System.out.printf("\n\n");
       
    HealthyPizza healthyPizza = new HealthyPizza("Broccoli", 5.46);
    healthyPizza.ItemizedPizza();
    healthyPizza.Healthy_Package();
    healthyPizza.addAdditional("Egg", 1.56);
    healthyPizza.addAdditional("Tomato", 4.12);
    System.out.printf("\nTotal price is: [$%.2f]", healthyPizza.getTotal_Price());
    System.out.printf("\n\n");
    
    DeluxePizza deluxePizza = new DeluxePizza("Sausage & Bacon w/ Overloaded Cheese", 15.00);
    deluxePizza.ItemizedPizza();
    deluxePizza.Deluxe_Package();
    System.out.printf("\n\t--------Add Ons on Deluxe Pizza is currently not available--------");
    System.out.printf("\nTotal price is: [$%.2f]", deluxePizza.getTotal_Price());
    System.out.printf("\n\n");
  }
}
