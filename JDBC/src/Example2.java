import java.sql.Statement;
import java.sql.Connection;
import java.sql.DriverManager;

public class Example2 {
		public static void main(String[] args) {
			Connection con;
			Statement stat;
			try
			{
				Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
				con=DriverManager.getConnection("jdbc:sqlserver://LAPTOP-72M4NCBO", "sa", "niit@123");
				stat=con.createStatement();
				stat.execute("create table Family(SIno int,name varchar(100))");
			}
			catch (Exception e) {
				System.err.println(e.getMessage());
			}
		}
	}
