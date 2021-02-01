

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
public class Example_1
{
	public static void main(String[] args) 
	{
		try
		{
			//Class.forName("LAPTOP-72M4NCBO");
			
			//Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
			Connection con=DriverManager.getConnection("jdbc:sqlserver://LAPTOP-72M4NCBO", "sa","niit@123");
			System.out.println(con);
			Statement statement=con.createStatement();
			ResultSet resultset=statement.executeQuery("select * from faculty");
			
			while(resultset.next())
			{
				System.out.println(resultset.getInt(1)+resultset.getString(2));
			}
		
		}
		catch (Exception e) {
			
			e.printStackTrace();
		}
		
	}
}
