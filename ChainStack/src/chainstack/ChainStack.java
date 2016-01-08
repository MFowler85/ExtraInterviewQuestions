/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package chainstack;

import java.util.Iterator;
import java.util.AbstractCollection;
/**
 * @author mcf8379
 * 18 Nov 2015
 * Assignment 3: OOP 
 * CMPS 450
 */

public class ChainStack<Object> implements Iterable<Object> {
    
    Node top = new Node();
    int size;
    Node current;
    Object val;
    //Note: can use current.next.next to while loop to the end! Ask if we can use current pointer though.
    
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
    
    public Object peek(){
        
        current = top;
        
        while(current.next != null){
            current = current.next;
        }
           
        val = current.data;
        
        return val;
    };
    
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
    
    public int size(){
        return size;
    };
    
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


private class Node {
    Node next;
    Object data;
}





    public static void main(String[] args) {
        ChainStack stack = new ChainStack(); //instantiate stack

        for(int i = 1; i < 11; i++){
            stack.push(i);
        }
        stack.push("Hello");
        
        //for(int i = 0; i < stack.size(); i++) Size is not implemented!
        
        for(int i = 0; i < 5; i++){
        System.out.print("The top of the stack is: ");
        System.out.println(stack.peek());
        System.out.print("Now we will remove the top element from the stack: ");
        System.out.println(stack.pop());
        System.out.print("The new top is: ");
        System.out.println(stack.peek());
        }
        System.out.println("\nNow to test the Iterator!");
        Iterator itr = stack.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }
    }
    
}
