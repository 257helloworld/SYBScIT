/* Design an AWT application that contains the interface to add student information
and display the same. */

import java.awt.*;
import java.awt.event.*;


public class Practical_10A implements ActionListener {
    public Practical_10A() {
        int x = 100, y = 100;
        Label l1 = new Label("First Name: ");
        Label l2 = new Label("Last Name: ");
        Label l3 = new Label("Roll No: ");
        Label l4 = new Label("Gender: ");
        Label l5 = new Label("Course: ");
        Label l7 = new Label("Address: ");
        Label l8 = new Label("Hobbies: ");

        TextField t1 = new TextField();
        TextField t2 = new TextField();
        TextField t3 = new TextField();

        // Gender
        CheckboxGroup gender = new CheckboxGroup();
        Checkbox c1 = new Checkbox("Male",false,gender);
        Checkbox c2 = new Checkbox("Female",false,gender);

        // Hobbies
        Checkbox c3 = new Checkbox("Games");
        Checkbox c4 = new Checkbox("Music");
        Checkbox c5 = new Checkbox("Singing");
        Checkbox c6 = new Checkbox("Dancing");
        Checkbox c7 = new Checkbox("Acting");
        Checkbox c8 = new Checkbox("Drwaing");

        Choice ch1 = new Choice();
        ch1.add("B.Com.");
        ch1.add("B.F.M.");
        ch1.add("B.M.M.");
        ch1.add("B.Sc.IT");
        ch1.add("B.A.F.");

        TextField tf1 = new TextField();

        Button b1 = new Button("Submit");
        b1.addActionListener(this);


        Frame f = new Frame("Student Information");
        FlowLayout fl = new FlowLayout();

        f.setSize(650,500);
        f.setLayout(null);

        l1.setBounds(x,y,100,20);
        l2.setBounds(x+230,y,70,20);
        l3.setBounds(x,y+30,100,20);
        l4.setBounds(x,y+60,100,20);
        l5.setBounds(x,y+90,100,20);
        l7.setBounds(x,y+120,100,20);
        l8.setBounds(x,y+180,100,20);
        
        t1.setBounds(x+100,y,100,20);
        t2.setBounds(x+300,y,100,20);
        t3.setBounds(x+100,y+30,100,20);
        c1.setBounds(x+100,y+60,100,20);
        c2.setBounds(x+200,y+60,100,20);
        ch1.setBounds(x+100,y+90,100,20);
        tf1.setBounds(x+100,y+120,200,40);
        tf1.setBounds(x+100,y+120,200,40);
        c3.setBounds(x+100,y+180,60,20);
        c4.setBounds(x+170,y+180,60,20);
        c5.setBounds(x+240,y+180,60,20);
        c6.setBounds(x+310,y+180,60,20);
        c7.setBounds(x+380,y+180,60,20);
        c8.setBounds(x+450,y+180,100,20);

        b1.setBounds(x+170,y+250,100,20);

        f.add(l1);
        f.add(t1);
        f.add(l2);
        f.add(t2);
        f.add(l3);
        f.add(t3);
        f.add(l4);
        f.add(c1);
        f.add(c2);
        f.add(l5);
        f.add(ch1);
        f.add(l7);
        f.add(tf1);
        f.add(l8);
        f.add(c3);
        f.add(c4);
        f.add(c5);
        f.add(c6);
        f.add(c7);
        f.add(b1);

        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {

    }

    public static void main(String args[]) {
        new Practical_10A();
    }
}
