/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Project3_mcf8379;
import java.util.Iterator;

/**
 *
 * @author mcf8379
 * 18 Nov 2015
 * Assignment 3: OOP 
 * CMPS 450
 */


//This is OurStack, it is the interface that is implemented in the files ArrayStack.java and ChainStack.java
//Each of the methods is given below, un-implemented of course.
public interface OurStack {
    
    public void push(Object item);
    
    public Object peek();
    
    public Object pop(); 
    
    public boolean add(Object obj);
    
    public int size();
    
    public Iterator<Object> iterator();
    
}
