/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Project3_mcf8379;
import java.util.Iterator;
import java.util.Scanner;

/**
 *
 * @author mcf8379
 * 18 Nov 2015
 * Assignment 3: OOP 
 * CMPS 450
 */

/**RunThis is the class which contains main.
 * All of the classes built will be created and run from here.
 * I have written code to test that both of my stack implementations function correctly. 
 * 
 * I then wrote code to test my parser class, with a user input and with some static inputs.
 * 
 * @author mcf8379
 */
public class RunThis {
 
    
    public static void main(String[] args) {
        
        
        System.out.println("\n------This will test the ArrayStack------\n");
        
        OurStack stack = new ArrayStack(); //instantiate stack of ArrayStack. I used Ourstack interface.

        for(int i = 1; i < 11; i++){ //push 10 integers onto the stack.
            stack.push(i);
        }
        stack.push("Everest"); //push a string onto the stack to show stack can take generic types.
        
        System.out.print("The top of the stack is: ");
        System.out.println(stack.peek());
        
        System.out.print("Now we will remove the top element from the stack: ");
        System.out.println(stack.pop());
        System.out.print("The new top is: ");
        System.out.println(stack.peek());
        System.out.print("The stack size is: ");
        System.out.println(stack.size());
        stack.add(11); //add to the stack

        
        
        System.out.println("Now to test the Iterator!");
        Iterator itr = stack.iterator();
        while(itr.hasNext()){
            System.out.print(itr.next());
            System.out.print(" ");
        }
        

    
    
        System.out.println("\n\n\n\n------This will test the ChainStack------");
        
        OurStack stack2 = new ChainStack(); //instantiate stack of type ChainStack, used OurStack interface.

        for(int i = 1; i < 11; i++){ //push 10 items onto the stack.
            stack2.push(i);
        }
        stack2.push("Everest"); //pushed a string onto stack to show that stack accepts generic types.
    
        System.out.print("\nThe top of the stack is: ");
        System.out.println(stack2.peek());
        System.out.print("Now we will remove the top element from the stack: ");
        System.out.println(stack2.pop());
        System.out.print("The new top is: ");
        System.out.println(stack2.peek());
        stack2.add(11); //add to the stack

        System.out.println("\nNow to test the Iterator!");
        Iterator itr2 = stack2.iterator();
        
        while(itr2.hasNext()){
            System.out.print(itr2.next());
            System.out.print(" ");
        }
        
        
        System.out.println("\n\n\n\n------This will test the Parser------\n");
        
        parser p = new parser();
        System.out.print("Enter your statement to be tested: ");
        Scanner keyboard = new Scanner(System.in);

        String statement = keyboard.next();
        System.out.print("You entered: ");
        System.out.println(statement);
        System.out.print("This statement is: ");
        System.out.println(p.parser(statement));
        
        System.out.print("Now I will test some generic cases.\n");
        System.out.print("Test 1: Is ((a + b) + (c + d)) valid?   Answer: ");
        System.out.println(p.parser("((a + b) + (c + d))"));
        System.out.print("Test 1: Is ((a + b) + [c + d]} valid?   Answer: ");
        System.out.println(p.parser("((a + b) + [c + d]}"));
        System.out.print("Test 1: Is ()) valid?   Answer: ");
        System.out.println(p.parser("())"));  
        System.out.print("Test 1: Is ()()() valid?   Answer: ");
        System.out.println(p.parser("()()()"));  
   
        
    } //end of main
    
}


