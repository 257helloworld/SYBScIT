/* Design a AWT program to print the factorial for an input value. */

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Practical_9A implements ActionListener {
    TextField t1 = new TextField();
    Label out_label = new Label("");
    public Practical_9A() {
        int x = 100, y = 85;

        Frame f = new Frame("Factorial");
        Label l1 = new Label("Enter a number: ");
        Button b1 = new Button("Factorial");
        
        f.setSize(450,200);
        f.setLayout(null);
        
        l1.setBounds(x,y,80,20);
        t1.setBounds(x+90,y,100,20);
        b1.setBounds(x+70,y+30,80,20);
        out_label.setBounds(x,y+60,200,20);
        
        f.add(l1);
        f.add(t1);
        f.add(b1);
        f.add(out_label);
        f.setVisible(true);        
        
        b1.addActionListener(this);
    }

    public int factorial(int n) {
        int fact = 1;
        while(n > 0) {
            fact = fact * n;
            n--;
        }
        return fact;
    }

    public void actionPerformed(ActionEvent e) {
        int n = Integer.parseInt(t1.getText());
        out_label.setText("Factorial of " + n + ": " + factorial(n));
    }

    public static void main(String args[]) {
        new Practical_9A();
    }
}