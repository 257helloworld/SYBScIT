/* Design an AWT application to generate result marks sheet. */

import java.awt.*;
import java.awt.event.*;

class Practical_10C implements ActionListener {
	Frame f = new Frame("Result Marksheet");
	Label l1 = new Label("CJ: ");
	TextField t1 = new TextField();
	Label l2 = new Label("IES: ");
	TextField t2 = new TextField();
	Label l3 = new Label("SE: ");
	TextField t3 = new TextField();
	Label l4 = new Label("COST: ");
	TextField t4 = new TextField();
	Label l5 = new Label("CGA: ");
	TextField t5 = new TextField();
	Label l6 = new Label("");
	Label l7 = new Label("");
	Label l8 = new Label("");
	Button b1 = new Button("Generate");

	public Practical_10C() {
		int x = 70, y = 100;
		f.setLayout(null);
		f.setSize(500,500);
			
		f.add(l1);
		f.add(t1);
		f.add(l2);
		f.add(t2);
		f.add(l3);
		f.add(t3);
		f.add(l4);
		f.add(t4);
		f.add(l5);
		f.add(t5);
		f.add(b1);
		f.add(l6);
		f.add(l7);
		f.add(l8);

		l1.setBounds(x,y,45,20);	
		t1.setBounds(x+50,y,80,20);	
		l2.setBounds(x,y+30,45,20);	
		t2.setBounds(x+50,y+30,80,20);	
		l3.setBounds(x,y+60,45,20);	
		t3.setBounds(x+50,y+60,80,20);	
		l4.setBounds(x,y+90,45,20);	
		t4.setBounds(x+50,y+90,80,20);	
		l5.setBounds(x,y+120,45,20);	
		t5.setBounds(x+50,y+120,80,20);	
		l6.setBounds(x,y+200,200,20);	
		l7.setBounds(x,y+230,200,20);
		l8.setBounds(x,y+260,200,20);

		b1.setBounds(x,y+160,80,20);
		
		b1.addActionListener(this);
			
		f.setVisible(true);
	}
	public void actionPerformed(ActionEvent e) {
		int s1, s2, s3, s4, s5;
		double total, per;
		String gr = new String("");
		s1 = Integer.parseInt(t1.getText());
		s2 = Integer.parseInt(t2.getText());
		s3 = Integer.parseInt(t3.getText());
		s4 = Integer.parseInt(t4.getText());
		s5 = Integer.parseInt(t5.getText());
		total = s1 + s2 + s3 + s4 + s5;
		per = total / 7.5;

		if(per >= 90 && per <= 100) {
			gr = "A";
		} else if(per >= 80 && per < 90) {
			gr = "B";
		} else if(per >= 70 && per < 80) {
			gr = "C";
		} else if(per >= 60 && per < 70) {
			gr = "D";
		} else if(per >= 50 && per < 60) {
			gr = "E";
		} else if(per < 50) {
			gr = "F";
		}

		l6.setText("Total: " + total);
		l7.setText("Percentage: " + per);
		l8.setText("Grade: " + gr);
	}
	
	public static void main(String args[]) {
		Practical_10C p1 = new Practical_10C();
	}
}