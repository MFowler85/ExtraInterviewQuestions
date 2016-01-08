/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Project3_mcf8379;
import java.util.Iterator;
import java.util.AbstractCollection;

/**
 *
 * @author mcf8379
 * 18 Nov 2015
 * Assignment 3: OOP 
 * CMPS 450
 */

/**ChainStack is going to utilize a singly linked list in order to implement the stack data structure. 
 * ChainStack extends AbstractCollection and implements Iterable and OurStack.
 * @author mcf8379
 */
public class ChainStack extends AbstractCollection<Object> implements Iterable<Object>, OurStack{
    
    /**Firstly, Node top is created. This will be the first Node of the stack.
     * Then, size, current and val are designated. 
     * size stores the size of the stack.
     * current is a pointer to the current Node. Utilized for traversing the linked list.
     * val is an Object that will be used to store items for returning.
     *
     */
    
    Node top = new Node();
    int size;
    Node current;
    Object val;
    //Note: can use current.next.next to while loop to the end!
    
    /**push is going to check if size is 0, which will then initialize top to the item passed in as a paremeter.
     * Otherwise, current will then traverse to the last element of the list.
     * Also, a temp node will be created and will have its data be set to that of the item passed in.
     * Then, current.next will be assigned the node temp. This adds the temp Node to the end of the list. 
     * 
     * @param item 
     */
    @Override
    public void push(Object item) { 
         
        if(size == 0){
            
            top.data = item;
            size = 1;
            
        }
        
        else {
            
            current = top;
            
            Node temp = new Node();
            temp.data = item;
            
            while(current.next != null){
                current = current.next;
            }
            size++;
            current.next = temp;
        }
    };
    
    /**peek will traverse to the last element of the list and then return val, where
     * val is the data stored in the last node.
     *  
     */
    
    @Override
    public Object peek(){
        
        current = top;
        
        while(current.next != null){
            current = current.next;
        }
           
        val = current.data;
        
        return val;
    };
    
    /**pop will utilize a while loop to traverse to the second to last element of the list.
     * We traverse to the second to last in order to be able to assign null to the pointer to the last element.
     * Upon arrival to second to last node, we assign val to the current.next.next and return this.
     * We also assign current.next to null, effectively removing the last element of the list. 
     * Lastly, size is decremented to show that our list has had one node removed. 
     * 
     */
    
    @Override
    public Object pop(){
        
        current = top;
        
        while(current.next.next != null){
            current = current.next;
        }
        
        val = current.next.data;
        current.next = null;
        size--;
        
        return val;
    }; 
    
    /**add is overrided to perform the same functionality as the push method above.
     * 
     * 
     *  
     */
    @Override
    public boolean add(Object obj){
             
        if(size == 0){
            
            top.data = obj;
            size = 1;
            
        }
        
        else {
            
            current = top;
            
            Node temp = new Node();
            temp.data = obj;
            
            while(current.next != null){
                current = current.next;
            }
            size++;
            current.next = temp;
        }
      return true;
    };
    
    
    /**size returns the size data member.
     *  
     */
    
    @Override
    public int size(){
        return size;
    };
    
    
    /**iterator first creates an iterator named iter.
     * Then the 3 iterator methods are overrided.
     * 
     * hasNext checks if index is less than size. 
     * a boolean value is returned dependent upon this check.
     * 
     * next returns the data stored in the current node, and then increments index, and updates
     * current to point to the next node.
     * 
     * remove throws an UnsupportedOperationException because stacks have to pop elements off.
     *  
     */
    @Override
    public Iterator<Object> iterator(){

        Iterator<Object> iter = new Iterator<Object>(){
            
            private int index = 0;
            Node current = top;
            
            @Override
            public boolean hasNext(){
                return index < size;
            }
            
            @Override
            public Object next(){
                Object data = current.data;
                current = current.next;
                index++;
                return data;
            }
            @Override
            public void remove(){
                throw new UnsupportedOperationException();
            }
        };
        return iter;

    };
    
    /**Node is a class which creates the Node structure to be utilized by the linked list.
     * Node has a pointer to type Node, and data of type Object that will store whatever is given to the push method.
     * 
     */
    private class Node {
        Node next;
        Object data;
    }
}
