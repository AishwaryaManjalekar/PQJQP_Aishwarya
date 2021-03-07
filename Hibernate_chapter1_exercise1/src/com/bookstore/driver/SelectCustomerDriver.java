package com.bookstore.driver;

import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

import com.bookstore.model.Customer;

public class SelectCustomerDriver {

	public static void main(String[] args) {
		try {
			SessionFactory sessionFactory;
			Configuration configuration = new Configuration().configure("hibernate.cfg.xml");
			sessionFactory = configuration.buildSessionFactory();
			Session session = sessionFactory.openSession();
			List<Customer> allCustomer = session.createQuery("from Customer").list();
			if(!(allCustomer.isEmpty()))
			{
				for (Customer customer : allCustomer) {
					System.out.println("Name : " + customer.getName()+"    Price : "+customer.getPrice()+"Firstname : " + customer.getFirstname()+"    Lastname : "+customer.getLastname());
				}
			}
			else
			{
				System.out.println("No Record Found... Please add record to view them.");
			}
		} catch (Exception ex) {
			ex.printStackTrace();
		}

	}

}
