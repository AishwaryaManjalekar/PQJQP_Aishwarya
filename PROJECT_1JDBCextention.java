import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class PROJECT_1JDBCextention 
{
	public static boolean insertstudentdetails(int id, String name, String course) throws SQLException 
	{
		Connection con = DriverManager
				.getConnection("jdbc:sqlserver://LAPTOP-72M4NCBO;databaseName=mydatabase;user=sa;password=niit@123");

		PreparedStatement statement = con.prepareStatement("insert into studentdetails values(?,?,?)");
		statement.setInt(1, id);
		statement.setString(2, name);
		statement.setString(3, course);
		int result;
		result = statement.executeUpdate();
		if (result > 0) 
		{
			return true;
		} 
		else 
		{
			return false;
		}
	}
	public static boolean updatestudentdetails(int id, String name) throws SQLException 
	{
		Connection con = DriverManager
				.getConnection("jdbc:sqlserver://LAPTOP-72M4NCBO;databaseName=mydatabase;user=sa;password=niit@123");

		PreparedStatement statement = con.prepareStatement("update studentdetails set name = ?  where id=?");
		statement.setInt(2, id);
		statement.setString(1, name);
		int result;
		result = statement.executeUpdate();
		if (result > 0) 
		{
			return true;
		} 
		else 
		{
			return false;
		}
	}
	public static boolean deletestudentdetails(int id) throws SQLException 
	{
		Connection con = DriverManager
				.getConnection("jdbc:sqlserver://LAPTOP-72M4NCBO;databaseName=mydatabase;user=sa;password=niit@123");

		PreparedStatement statement = con.prepareStatement("delete from studentdetails where id=?");
		statement.setInt(1, id);
		int result;
		result = statement.executeUpdate();
		if (result > 0) 
		{
			return true;
		} 
		else 
		{
			return false;
		}
	
	
	}
}