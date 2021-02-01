package To_Create_WebPage;

import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JPanel;
import javax.swing.JTabbedPane;

public class Example1 
{
	public static void main(String[] args) 
	{
	
		//to create a frame
		JFrame frame=new JFrame();
	
	     frame.setVisible(true);
	
	//frame.setUndecorated(true);
	
	     frame.setExtendedState(JFrame.MAXIMIZED_BOTH);
	
	     frame.setTitle("First application");
	
	     frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	     
	     //to create a panel
	     
	     JPanel p1=new JPanel();
	     
	     JPanel p2=new JPanel();
	     
	     frame.add(p1);
	     
	     frame.add(p2);
	     
	     //to create tab
	     
	     JTabbedPane tab=new JTabbedPane();
	     
	     tab.addTab("First", p1);
	     
	     tab.addTab("second", p2);
	     
	     frame.add(tab);
	     
	     frame.setVisible(true);
	     
	     //TO CREATE MENU BAR
	     
	     JMenuBar menubar=new JMenuBar();
	     
	     //TO CREATE CONTENT IN MENUBAR
	     
	     
	     JMenu filemenu=new JMenu("file");
	     JMenu editmenu=new JMenu("edit");
	     JMenu helpmenu=new JMenu("help");
	     
	     //TO ADD THIS TO MENU BAR
	     menubar.add(filemenu);
	     menubar.add(editmenu);
	     menubar.add(helpmenu);
	     frame.setVisible(true);
	     //TO ADD ITEMS TO THE MENU
			
			  JMenuItem newfile=new JMenuItem("new"); 
			  JMenuItem openfile=new JMenuItem("open"); 
			  JMenuItem savefile=new JMenuItem("save"); 
			  JMenuItem cutedit=new JMenuItem("cut");
			  JMenuItem copyedit=new JMenuItem("copy");
			  frame.setVisible(true);
			  //add the menuiteam to the menu
			  
			  filemenu.add(newfile); 
			  filemenu.add(openfile); 
			  filemenu.add(savefile);
			  editmenu.add(cutedit); 
			  editmenu.add(copyedit);
			 
			  frame.setVisible(true);
	           frame.add(menubar);
	     
	          frame.setVisible(true);
	          
	          
	          //TO ADD LABEL
	          
	          
	      

	}

}
