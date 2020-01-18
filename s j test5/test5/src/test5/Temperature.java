package test5;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

@SuppressWarnings("serial")
public class Temperature extends JFrame implements ActionListener {
    private JButton transformFButton = new JButton("…„ œ◊™ª™ œ");
    private JButton transformCButton = new JButton("ª™ œ◊™…„ œ");
    private JTextField fTextField = new JTextField();
    private JTextField cTextField = new JTextField();
    float c, f;

    public Temperature() {
        super("ª™ œ…„ œ");
        try {
        	frame();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void frame() {
        fTextField.setBounds(10, 30, 100, 25);
        cTextField.setBounds(130, 30, 100, 25);
        transformCButton.setBounds(10, 58, 100, 25);
        transformFButton.setBounds(130, 58, 100, 25);
        transformCButton.addActionListener(this);
        transformFButton.addActionListener(this);
        Container c = getContentPane();
        c.add(fTextField);
        c.add(cTextField);
        c.add(transformCButton);
        c.add(transformFButton);
        c.setLayout(null);

        this.setSize(250, 150);
        this.setResizable(false);
        this.setLocationRelativeTo(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
    }

    public static void main(String[] args) {
        new Temperature();
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == transformFButton) {

            try {
                c = Float.parseFloat(cTextField.getText());
                f = c * 9 / 5 + 32;
                fTextField.setText(String.valueOf(f));
            } catch (Exception ex) {
                ex.printStackTrace();
            }
        }
        if (e.getSource() == transformCButton) {
            try {
                f = Float.parseFloat(fTextField.getText());
                c = (f - 32) * 5 / 9;
                cTextField.setText(String.valueOf(c));
            } catch (Exception ex) {
                ex.printStackTrace();
            }
        }
    }

}