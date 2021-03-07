package com.jobportal.Controller;


import java.sql.*;

public class UserDatabase {
	Connection con;

	public UserDatabase(Connection con) {
		this.con = con;
	}

	
	public boolean saveUser(User user) {
		boolean set = false;
		try {
			
			String query = "insert into [dbo].[registration](uname,password,email,phone) values(?,?,?,?)";

			PreparedStatement pt = this.con.prepareStatement(query);
			pt.setString(1, user.getUname());
			pt.setString(2, user.getPassword());
			pt.setString(3, user.getEmail());
			pt.setString(4, user.getPhone());

			pt.executeUpdate();
			set = true;
		} catch (Exception e) {
			e.printStackTrace();
		}
		return set;
	}
	
	public User logUser(String uname,String password) {
		User user=null;
		try {
        String query="select*from [dbo].[registration] where uname=? and password=? ";
        PreparedStatement pst=this.con.prepareStatement(query);
        pst.setString(1, uname);
        pst.setString(2, password);
        ResultSet rs=pst.executeQuery();
        if(rs.next()) {
        	user=new User();
        	user.setUname(rs.getString("uname"));
        	user.setPassword(rs.getString("password"));
        	user.setEmail(rs.getString("email"));
        	user.setPhone(rs.getString("phone"));
        }
		}
		catch(Exception e) {
			e.printStackTrace();
		}
		return user;
			
		
	}
}