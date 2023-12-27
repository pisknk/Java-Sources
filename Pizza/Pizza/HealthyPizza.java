
public class HealthyPizza extends Pizza{
  
  private double totalPrice = 0;
  private String vegetable;

public HealthyPizza() {}
  
  public HealthyPizza(String vegetable, double Price) {
	System.out.println("------------HEALTHY PIZZA------------\n");
	  
    this.setPizza_Type("Healthy Pizza");
    this.setQuantity_Price(Price);
    this.setInitial_Price(Price);
    this.setVegetable_Name(vegetable);
    this.setCheese_Name("Mozarilla");
    this.setCrust_Type("Low Carb crust");

  }
  
  public void setVegetable_Name(String vegetable) {
	  this.vegetable = vegetable;
  }
  
  public void Healthy_Package() {
	    System.out.println("\n" + "Vegetable: " +  vegetable);
  }
}
