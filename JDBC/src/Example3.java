import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.util.Scanner;

public class Example3 {

	public static void main(String[] args) {
		Connection con;
		Statement stat;
		Scanner scanner=new Scanner(System.in);
		try
		{
			con=DriverManager.getConnection("jdbc:sqlserver://LAPTOP-72M4NCBO;databaseName=mydatabase;user=sa;password=niit@123");
			stat=con.createStatement();
			int id;
			String name;
			String course;
			System.out.println("Enter the id");
			id=scanner.nextInt();
			System.out.println("Enter the name");
			name=scanner.next();
			System.out.println("Enter the course");
			course=scanner.next();
			String query="insert into studentdetails values("+id+",'"+name+"','"+course+"')";
			System.out.println(query);
			//boolean result=stat.execute("insert into studentdetails values(1,'aishwarya','java')");
			stat=con.createStatement();
			int result1=stat.executeUpdate(query);
			if(result1>0)
				System.out.println("inserted");
			else
				System.out.println("not inserted");
			System.out.println(result1);
			System.out.println(con);
		}
		catch(Exception e)
		{
			
		}

	}

}
