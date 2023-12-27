
public class DeluxePizza extends Pizza{
   
   private String toppings;
   private String drinks;
   private String Fries;

public DeluxePizza() {}
   
   public DeluxePizza(String toppings, double Price) {
	   System.out.println("------------DELUXE PIZZA------------\n");
	   
       this.setPizza_Type("Deluxe");
       this.setQuantity_Price(Price);
       this.setInitial_Price(Price);
       this.setCheese_Name("Mozarilla");
       this.setToppings_Name(toppings);
       this.setDrinks_Name("Coke");
       this.setFries("Fries(Large)");
       this.setCrust_Type("Thin crust");
       
  }
    
   public void setToppings_Name(String toppings) {
	   this.toppings = toppings;
   }
   
   public void setDrinks_Name(String drinks) {
	   this.drinks = drinks;
   }
   
   public void setFries(String Fries) {
	   this.Fries = Fries;
   }
   
   public void Deluxe_Package() {
	    System.out.println("\n" + "Drinks: " + drinks + "\n" + "Toppings Bundle: " + toppings);
	  }
   
}
