package com.model;
import java.io.Serializable;
@SuppressWarnings("serial")
public class Customer implements Serializable{
   private int id;
   private String name;
   private String email;
   private double balance;
   public int getId() {
	     return id;
   }
   public void setId(int id) {
	     this.id = id;
   }
   public String getName() {
	     return name;
   }
   public void setName(String name) {
	     this.name = name;
   }
   public String getEmail() {
	     return email;
   }
   public void setEmail(String email) {
	     this.email = email; 
   }
   public double getBalance() {
	     return balance;
   }
   public void setBalance(double balance) {
	     this.balance = balance;
   }  
}

