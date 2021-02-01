//in this program we will first import JFrame 
//then we declare menubar,menuitem
//IN THE FINAL OUT WE CAN SEE THE FILE(NEW,OPEN,SAVE) ,EDIT(CUT,COPY) ,HELP(); AT THE TOP LEFT OF THE PANEL



package To_Create_WebPage;

import java.awt.BorderLayout;
import java.awt.TextArea;

import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JPanel;

class BorderLayoutDemo extends JFrame
{
	JPanel p;
	JMenuBar menubar;
	JMenuItem newfile,openfile,savefile,cutedit,copyedit;
	public BorderLayoutDemo()
	{
		p=new JPanel(new BorderLayout());
        JMenuBar menubar=new JMenuBar();
	     
	     //TO CREATE CONTENT IN MENUBAR
	     
	     
	     JMenu filemenu=new JMenu("file");
	     JMenu editmenu=new JMenu("edit");
	     JMenu helpmenu=new JMenu("help");
	     
	     //TO ADD THIS TO MENU BAR
	     menubar.add(filemenu);
	     menubar.add(editmenu);
	     menubar.add(helpmenu);
	   
	     //TO ADD ITEMS TO THE MENU
			
			  newfile=new JMenuItem("new"); 
			  openfile=new JMenuItem("open"); 
			  savefile=new JMenuItem("save"); 
			  cutedit=new JMenuItem("cut");
			  copyedit=new JMenuItem("copy");
			 
			  //add the menuiteam to the menu
			  
			  filemenu.add(newfile); 
			  filemenu.add(openfile); 
			  filemenu.add(savefile);
			  editmenu.add(cutedit); 
			  editmenu.add(copyedit);
			  
			  
			  //these below statements will help in situating the file,edit,help option in north, south,east,west.
			  
			  
			  p.add(menubar,BorderLayout.NORTH);
			  add(p);
			  setDefaultCloseOperation(HIDE_ON_CLOSE);
			  setExtendedState(MAXIMIZED_BOTH);
			  
			  
			  // thses below lines will help me to create my own note pad
			  
			  
			  TextArea t=new TextArea();
			  p.add(t,BorderLayout.CENTER);
	}
}
public class Example5 {
public static void main(String[] args)
{
	BorderLayoutDemo bld=new BorderLayoutDemo();
	bld.setVisible(true);
}
}
