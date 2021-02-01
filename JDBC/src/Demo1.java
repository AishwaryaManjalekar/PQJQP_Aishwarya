
import java.sql.Connection;
import java.sql.Driver;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class Demo1 {
	public static void main(String[] args) {
		try {
			
		
			Driver d=new com.microsoft.sqlserver.jdbc.SQLServerDriver();
			
			Connection connection = DriverManager.getConnection("jdbc:sqlserver:///LAPTOP-72M4NCB0","sa","niit@123");
			Connection connection1 = DriverManager.getConnection("jdbc:h2:~/test","sa","");
			
			System.out.println(connection);
			Statement statement=connection.createStatement();
			ResultSet resultset=statement.executeQuery("select * from student");
			while(resultset.next())
			{
				System.out.println(resultset.getInt(1)+resultset.getString(2));
			}
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}