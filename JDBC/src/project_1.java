

import java.awt.BorderLayout;
import java.awt.GridLayout;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

class reg extends JFrame implements ActionListener
{
	JPanel p1,p2;
	JLabel l1,l2,l3;
	JTextField t1,t2,t3;
	JButton b1,b2,b3;
	
	
	reg()
	{
		p1=new JPanel(new GridLayout(3,2));
		add(p1,BorderLayout.NORTH);
		p2=new JPanel(new GridLayout(1,3));
		add(p2,BorderLayout.SOUTH);
		l1=new JLabel("enter student id");
		p1.add(l1);
		t1=new JTextField(100);
		p1.add(t1);
		
		l1=new JLabel("enter student name");
		p1.add(l2);
		t2=new JTextField(100);
		p1.add(t2);
		
		l3 = new JLabel("enter student course");
		p1.add(l3);
		t3 = new JTextField(100);
		p1.add(t3);
		
		b1 = new JButton("INSERT");
		b1.addActionListener(this);
		p2.add(b1);
		
		b2 = new JButton("UPDATE");
		b2.addActionListener(this);
		p2.add(b2);
		
		b3 = new JButton("DELETE");
		b3.addActionListener(this);
		p2.add(b3);
		
		setVisible(true);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(500, 500);
		
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		
	}
	
}
public class project_1 {

	public static void main(String[] args) {
		reg r=new reg();

	}

}
