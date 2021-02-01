package To_Create_WebPage;

import java.awt.FlowLayout;

import javax.swing.JFrame;
import javax.swing.JPanel;

public class Example4 
{

	public static void main(String[] args) 
	{
	JFrame frame=new JFrame();
	frame.setVisible(true);
	frame.setExtendedState(JFrame.MAXIMIZED_BOTH);
	frame.setTitle("SECOND APPLICATION");
	frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	//create a panel
	JPanel p=new JPanel();
	
	FlowLayout flow=new FlowLayout();
	 p.setLayout(flow);
	
	
	
	frame.setVisible(true);
  
	}

}
