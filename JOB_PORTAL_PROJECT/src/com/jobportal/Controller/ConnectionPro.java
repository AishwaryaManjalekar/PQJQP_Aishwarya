package com.jobportal.Controller;

import java.sql.Connection;
import java.sql.DriverManager;
public class ConnectionPro {
private static Connection con;
    
    public static Connection getConnection(){
        try{
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
            con=DriverManager.getConnection("jdbc:sqlserver://LAPTOP-72M4NCBO;databaseName=mydatabase;user=sa;password=niit@123");
            
        }catch(Exception e){
            e.printStackTrace();
        }
        return con;
    }
}