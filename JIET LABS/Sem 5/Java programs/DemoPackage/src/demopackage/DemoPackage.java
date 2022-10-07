/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package demopackage;
//import java.util.Scanner;
import package1.packClass;//use .* to import all classes it does not import packages
/**
 *
 * @author VAIBHAV SARAN
 */
public class DemoPackage {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       String n="sed";
       packClass ob = new packClass();
       ob.output(n);
    }
    
}
