/* Design a calculator based on AWT application. */

import java.awt.*;
import java.awt.event.*;

class Practical_10B implements ActionListener {
	Frame f = new Frame("Calculator");
	Label l1 = new Label("Number 1: ");
	TextField t1 = new TextField();
	Label l2 = new Label("Number 2: ");
	TextField t2 = new TextField();
	Label l3 = new Label("");
	Button b1 = new Button("+");
	Button b2 = new Button("-");
	Button b3 = new Button("x");
	Button b4 = new Button("/");

	public Practical_10B() {
		int x = 70, y = 100;
		f.setLayout(null);
		f.setSize(500,500);
			
		f.add(l1);
		f.add(t1);
		f.add(l2);
		f.add(t2);
		f.add(b1);
		f.add(b2);
		f.add(b3);
		f.add(b4);
		f.add(l3);

		l1.setBounds(x,y,80,20);	
		t1.setBounds(x+100,y,80,20);	
		l2.setBounds(x+200,y,80,20);	
		t2.setBounds(x+300,y,80,20);	
		l3.setBounds(x,y+60,200,20);	

		b1.setBounds(x,y+30,80,20);
		b2.setBounds(x+100,y+30,80,20);
		b3.setBounds(x+200,y+30,80,20);
		b4.setBounds(x+300,y+30,80,20);
		
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
			
		f.setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e) {
		int a, b;
		a = Integer.parseInt(t1.getText());
		b = Integer.parseInt(t2.getText());
		if(e.getSource() == b1) {
			l3.setText("Addition: " + (a+b));
		} else if(e.getSource() == b2) {
			l3.setText("Subtraction: " + (a-b));
		} else if(e.getSource() == b3) {
			l3.setText("Multiplication: " + (a*b));
		} else if(e.getSource() == b4) {
			l3.setText("Division: " + (a/b));
		}
	}
	
	public static void main(String args[]) {
		new Practical_10B();
	}
}