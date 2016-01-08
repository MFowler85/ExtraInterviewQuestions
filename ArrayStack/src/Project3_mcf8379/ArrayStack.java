/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Project3_mcf8379;
import java.util.AbstractCollection;
import java.util.ArrayList;
import java.util.Iterator;

/**
 *
 * @author mcf8379
 * 18 Nov 2015
 * Assignment 3: OOP 
 * CMPS 450
 */


/**ArrayStack is the class that builds a stack with the ArrayList data structure.
 * It implements the OurStack interface.
 */

public class ArrayStack extends AbstractCollection<Object> implements Iterable<Object>, OurStack {
    
    //vector is the ArrayList of type Object which will be used to implement the stack data structure.
    ArrayList<Object> vector = new ArrayList<Object>(); 
    
    //push works by taking in an item of type Object, and then calling ArrayList's build in "add" method.
    @Override
    public void push(Object item) { 
        vector.add(item);
    };
    
    //peek works by storing the last element of vector into val, and then returning val.
    @Override
    public Object peek(){
        Object val = vector.get(vector.size() - 1);
        return val;
    };
    
    /**pop works by first setting up an index to the last element in vector 
     * and then checking to see if that index is greater than -1.
     * Then this index is used to store the last element in val, which will be returned.
     * Afterwards, vector.remove will be called at that index to remove the last element.
     * 
     * If the index is not greater than -1, this implies the stack is empty and null should be returned.
     *  
     */
    
    @Override
    public Object pop(){
        int index = vector.size() - 1;
        
        if (index > -1){
            Object val = vector.get(index);
            vector.remove(index);
            return val;
        }
        
        else {
            return null; //empty stack...avoids error.
        }
    }; 
    
    
    /**add is the collections function. 
     * add is simply overrided to perform vector.add
     * True is returned always, because a stack can always accept more values.
     *  
     */
    
    @Override
    public boolean add(Object obj){
      vector.add(obj);
      return true;
    };
    
    /**size simply returns the size of the vector by utilizing the build in ArrayList method "size".
     * returns in int that is the size of vector.
     *
     * 
     */
    
    @Override
    public int size(){
        return vector.size();
    };
    
    
    /**
     * iterator is implemented from Iterable.
     * 
     * Initially an Iterator is created. 
     * Then, the 3 methods of iterator are overrided.
     * 
     * hasNext simply returns a boolean which will determine if index is less than the vector size.
     * if true, return true, else false.
     * This implies that there is more in the vector, and therefore hasNext should be true.
     * 
     * next will return the element in vector at the current index, and then increment index.
     * 
     * remove will simply throw an UnsupporteOperationException() because this is a stack and pop has to
     * be called to remove anything from it. 
     * 
     * @return 
     */
    @Override
    public Iterator<Object> iterator(){

        Iterator<Object> iter = new Iterator<Object>(){
            
            private int index = 0;
            
            @Override
            public boolean hasNext(){
                return index < vector.size();
            }
            
            @Override
            public Object next(){
                return vector.get(index++);
            }
            @Override
            public void remove(){
                throw new UnsupportedOperationException();
            }
        };
        return iter;

    };
}