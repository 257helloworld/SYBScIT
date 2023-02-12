/* Create AWT app to demonstrate various string operations like toUpperCase(),
 * toLowerCase(), length() and concat().
 */

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Practical_9B implements ActionListener {
    TextField t1 = new TextField();
    TextField t2 = new TextField();
    TextField t3 = new TextField("");
    TextField t4 = new TextField("");
    Button b1 = new Button("Upper Case");
    Button b2 = new Button("Lower Case");
    Button b3 = new Button("Length");
    Button b4 = new Button("Concat");
    public Practical_9B() {
        int x = 70, y = 85;
        Frame f = new Frame("String Operations");
        Label l1 = new Label("Input 1: ");
        Label l2 = new Label("Input 2: ");


        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);

        f.setSize(500,250);
        f.setLayout(null);

        l1.setBounds(x,y,80,20);
        t1.setBounds(x+85,y,80,20);
        l2.setBounds(x+180,y,80,20);
        t2.setBounds(x+270,y,80,20);
        b1.setBounds(x,y+30,80,20);
        b2.setBounds(x+90,y+30,80,20);
        b3.setBounds(x+180,y+30,80,20);
        b4.setBounds(x+270,y+30,80,20);
        t3.setBounds(x+130,y+60,80,20);
        t4.setBounds(x+130,y+90,80,20);

        f.add(l1);
        f.add(t1);
        f.add(l2);
        f.add(t2);
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.add(b4);
        f.add(t3);
        f.add(t4);

        t3.setVisible(false);
        t4.setVisible(false);

        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == b1) {
            t3.setText(t1.getText().toUpperCase());
            t4.setText(t2.getText().toUpperCase());
            t3.setVisible(true);
            t4.setVisible(true);
        } else if(e.getSource() == b2) {
            t3.setText(t1.getText().toLowerCase());
            t4.setText(t2.getText().toLowerCase());
            t3.setVisible(true);
            t4.setVisible(true);
        } else if(e.getSource() == b3) {
            t3.setText("Length: " + t1.getText().length());
            t4.setText("Length: " + t2.getText().length());
            t3.setVisible(true);
            t4.setVisible(true);
        } else if(e.getSource() == b4) {
            t3.setText(t1.getText().concat(t2.getText()));
            t4.setText("");
            t3.setVisible(true);
            t4.setVisible(false);
        }
    }

    public static void main(String args[]) {
        Practical_9B p1 = new Practical_9B();
    }
}
