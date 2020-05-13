/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package MAIN;

/**
 *
 * @author SAMIULLAH
 */
public class Car implements Comparable<Car> {
    private String Brand;
    private String Model;
    private int Year;
    private float Price;
    private int Engine;

    public Car(String Brand, String Model, int Year, float price, int Engine) {
        this.Brand = Brand;
        this.Model = Model;
        this.Year = Year;
        this.Price = price;
        this.Engine = Engine;
    }

    public String getBrand() {
        return Brand;
    }

    public void setBrand(String Brand) {
        this.Brand = Brand;
    }

    public String getModel() {
        return Model;
    }

    public void setModel(String Model) {
        this.Model = Model;
    }

    public int getYear() {
        return Year;
    }

    public void setYear(int Year) {
        this.Year = Year;
    }

    public float getPrice() {
        return Price;
    }

    public void setPrice(float price) {
        this.Price = price;
    }

    public int getEngine() {
        return Engine;
    }

    public void setEngine(int Engine) {
        this.Engine = Engine;
    }

    @Override
    public String toString() {
        return Brand+" "+Model+" "+Year+" : Rs"+Price+" "+Engine+"cc"; 
    }

    @Override
    public int compareTo(Car o) {
        if(Year>o.Year) 
            return 1;
       
        else if(Year<o.Year)
            return -1;
        
        else
            return 0;
        
    }
    
}
