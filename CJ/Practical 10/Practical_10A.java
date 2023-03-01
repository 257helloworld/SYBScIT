/* Design an AWT application that contains the interface to add student information
and display the same. */

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class Practical_10A {
    public Practical_10A() {
        Label l1 = new Label("First Name: ");
        Label l2 = new Label("Last Name: ");
        Label l3 = new Label("Roll No: ");
        Label l4 = new Label("Gender: ");
        Label l5 = new Label("Course: ");
        Label l6 = new Label("Division: ");

        TextField t1 = new TextField();
        TextField t2 = new TextField();
        TextField t3 = new TextField();

        CheckboxGroup gender = new CheckboxGroup();
        Checkbox c1 = new Checkbox("Male",false,gender);
        Checkbox c2 = new Checkbox("Female",false,gender);

        Choice ch1 = new Choice();
        ch1.add("B.Com.");
        ch1.add("B.F.M.");
        ch1.add("B.M.M.");
        ch1.add("B.Sc.IT");
        ch1.add("B.A.F.");

        Frame f = new Frame("Student Information");
        FlowLayout fl = new FlowLayout();

        f.setSize(500,500);
        f.setLayout(fl);

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

        f.setVisible(true);
    }

    public static void main(String args[]) {
        new Practical_10A();
    }
}
