/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package MAIN;

import java.util.Comparator;

/**
 *
 * @author SAMIULLAH
 */
public class SortPrice implements Comparator<Car> {

    @Override
    public int compare(Car o1, Car o2) {
        if(o1.getPrice()>o2.getPrice())return 1;
        else if(o1.getPrice()<o2.getPrice()) return -1;
        else return 0;
    }
    
    
}
