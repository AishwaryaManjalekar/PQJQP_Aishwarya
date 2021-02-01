package To_Create_WebPage;

import javax.swing.ButtonGroup;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JRadioButton;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class Example3 {

	public static void main(String[] args) {
		
		JFrame frame=new JFrame("new panel");
		
	     frame.setVisible(true);
	
	     frame.setExtendedState(JFrame.MAXIMIZED_BOTH);
	
	     frame.setTitle("First application");
	
	     frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	     
	     JPanel p=new JPanel();
	     frame.add(p);
	     
	     JLabel l=new JLabel("Enter your name");
	     p.add(l);
	     
	     JTextField tf1=new JTextField(25);
	     p.add(tf1);
	     
	     //incase u want to write big txt like address
	    
	     JLabel l1=new JLabel("enter address");
	     p.add(l1);
	     JTextArea ta1=new JTextArea(5,20);
	     p.add(ta1);
	     frame.setVisible(true);
	     
	     
	     JLabel l2=new JLabel("enter password");
	     p.add(l2);
	     
	     JPasswordField pf=new JPasswordField(25);
	     p.add(pf);
	     
	     frame.setVisible(true);
	     
	     
	     JLabel l3=new JLabel("area of interest");
	     p.add(l3);
	     
	     JCheckBox b1=new JCheckBox("web development");
	     JCheckBox b2=new JCheckBox("window development");
	     JCheckBox b3=new JCheckBox("mobile development");
	     JCheckBox b4=new JCheckBox("java development");
	     b4.setSelected(true);
	     
	     p.add(b1);
	     p.add(b2);
	     p.add(b3);
	     p.add(b4);
	     
	     JLabel l4=new JLabel("select gender");
	     p.add(l4);
	     ButtonGroup bg=new ButtonGroup();
	     
	     
	     JRadioButton rb1=new JRadioButton("male");
	     JRadioButton rb2=new JRadioButton("female");
	     
	     
	     bg.add(rb1);
	     bg.add(rb2);
	     
	     p.add(rb1);
	     p.add(rb2);
	     JLabel l5=new JLabel("select state");
	     p.add(l5);

	     JComboBox combobox=new JComboBox();
	     combobox.addItem("karnataka");
	     combobox.addItem("mumbai");
	     combobox.addItem("delhi");
	     combobox.addItem("goa");
	     p.add(combobox);
	     
	     frame.setVisible(true);
	}

}
