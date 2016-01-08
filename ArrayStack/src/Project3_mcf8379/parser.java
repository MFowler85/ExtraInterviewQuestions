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


/**This class is utilized to perform the parsing of an input to determine whether it is valid.
 * Initially, an object of class parser is created. 
 * Then, this object calls parser on a given input.
 * 
 * The input must be a String!
 * Two if statements check to see if the input is one of the 3 possible input types that are relevent:
 * Either "(,{,[" or "),},]" are accepted for determining if the statement is valid. 
 * Then, checks are done to determine whether the ordering is proper.
 * 
 * The for loop checks each character in the String "statement" and checks goes into the if conditions.
 * The first if condition checks for open braces, which then would push those onto the stack.
 * 
 * The second if checks for closed braces, which then compares it to the top of the stack to see if they match
 * as far as being an open/close combination. If they do pair up, a pop is called for the stack to remove the top most element.
 * 
 * An edge case checks to see if the first input is a closing brace, which would return false right away.
 * 
 * This is done for the entire string statement, and for each pair type of opening and closing brace.
 * 
 * Finally, upon finishing the for loop, a check is done to see if there is anything still in the stack.
 * If there is, this implies that one of the braces did not have a matching close brace, therefore return false.
 * 
 * Lastly, return true if everything else passed. 
 */

public class parser {
    
    public boolean parser(String statement){
        
        //String statement = obj;
        OurStack stack = new ArrayStack();
        
        for(int i = 0; i < statement.length(); i++){
            if (statement.charAt(i) == '(' ||  statement.charAt(i) == '{' || statement.charAt(i) == '['){
                stack.push(statement.charAt(i));
            }
            if (statement.charAt(i) == ')' ||  statement.charAt(i) == '}' || statement.charAt(i) == ']'){
                
                if (stack.size() == 0) //this checks to see if first value is a close parenthesis...etc.                 
                    return false;
                String temp = stack.peek().toString();

                
                if(statement.charAt(i) == ')' && temp.charAt(0) != '('){
                    return false;
                }
                else if (statement.charAt(i) == '}' && temp.charAt(0) != '{'){
                    return false;
                }
                else if (statement.charAt(i) == ']' && temp.charAt(0) != '['){
                    return false;
                }
                stack.pop();
            }  
        }
        if(stack.size() != 0)
                return false;
//        System.out.print("The stack size is: ");
//        System.out.println(stack.size());
        
        return true; //return true if passes
    }
}
