
public class Pizza {
	
  private String Crust_Type;
  private String Pizza_Type;
  private String Cheese_Name;
  private double Price;
  private double Price_Initial;
  private double Price_Total;
    
  public Pizza() {}  
  
  public Pizza(String Pizza_Type, String Crust_Type, String Cheese_Name, double Price) {
	  System.out.println("------------DEFAULT PIZZA------------\n");
	  
    setPizza_Type(Pizza_Type);
    setCrust_Type(Crust_Type);
    setCheese_Name(Cheese_Name);
    setQuantity_Price(Price);
    setInitial_Price(Price);
   
  }
  
  // SETTERS
  public void setCrust_Type(String Crust_Type) {
    this.Crust_Type = Crust_Type;
  }
  
  public void setPizza_Type(String Pizza_Type) {
    this.Pizza_Type = Pizza_Type;
  }
  
  public void setQuantity_Price(double Price) {
    this.Price = Price;  
  }
  
  public void setInitial_Price(double Price_Initial) {
        Price_Total = Price_Total + Price_Initial;
  }
  
  public void setCheese_Name(String Pizza_Name) {
    this.Cheese_Name = Pizza_Name;
  }
  
  // GETTERS 
  public double getTotal_Price() {
    return Price_Total;
  }
  
  private String Additional;
  private double Price_Addional;
  public void addAdditional(String Additional, double Price) {
    this.Additional = Additional;
    Price_Addional = Price;
    Price_Total = Price_Total + Price_Addional;
    
    printAdditionalExtra();
  }
  
  public void printAdditionalExtra() {
    System.out.println("Added " + Additional + " for an extra $" + Price_Addional);
  }

  public void ItemizedPizza() {
    System.out.println("Pizza Type: " + Pizza_Type + "\n" + "Pizza Crust: " + Crust_Type
                      + "\n" + "Cheese: " + Cheese_Name + "\n" + "Price is $" + Price);
  }
  
}
