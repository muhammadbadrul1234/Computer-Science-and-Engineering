import javax.swing.*;
import javax.swing.border.Border;
import javax.swing.border.LineBorder;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.sql.*;
public class Main {
    public static void Main(String[] args){
         JFrame frame = new JFrame("CalculatoRegistrationr");
         DbConnect db = new DbConnect();
            public Registration(){
            frame.setSize(500,500);
            frame.setLocationRelativeTo(null);
            frame.setLayout(null);
            frame.setDefaultCloseOperation(3);
            JLabel jlavel=new JLabel("Name");
            jlabel.setBounds(10,10,100,20);
            frame.add(jlabel);
            JTextField jtf = new JTextField();
		    jtf.setBounds(120,10,100,20);
            frame.add(jtf);
            JLabel jlavel2=new JLabel("Email");
            jlabel.setBounds(10,40,100,20);
            frame.add(jlabel2);
            JTextField jtf2 = new JTextField();
		    jtf.setBounds(120,40,100,20);
            frame.add(jtf2);
            JLabel jlavel3=new JLabel("Pass");
            jlabel.setBounds(10,70,100,20);
            frame.add(jlabel3);
            JPasswordField jpf=new JPasswordField();
		    jtf.setBounds(120,70,100,20);
            frame.add(jpf);
            JButton btn=new JButton("Register");
            btn..setBounds(120,100,100,20);
            frame.add(btn);
            btn.addActionListener(new ActionListener(){
                public void actionPerformed(ActionEvent e){
                    String name= jtf.getText();
                    String email= jtf1.getText();
                    String pass= jpf.getText();
                    system.out.println(name+" "+email+" "+pass );
                    String query= "INSERT INTO 'student_info'('Name','Email','Pass')VALUES('["+name+"]'+' ["+email+"]'+' ["+pass+"]' )";
                    db.insert(query);
                }
            });
            frame.setVisiable(true);
        }
    }   
}
public class DbConnect{
    /* 
    7 steps of data connection(Important Question for Final)
    01.Import
    02.Load and Register the driver
    03.Create a Connection
    04.Create a Statement
    05. Execute and Query
    06.Process and Result
    07.Close
    ****/
    private Connection con;
    private Statement st;
    DbConnect(){
        /*Try Catch is mandatory to avoid the error throw*/
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            con= DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root" ,"" );
            st=con.createStatement();
        }catch(Exception e){
            system.out.println("Connection Failed");
        }
        void insert(String query){
            try{
                st.executeUpdate(query);
            }catch (Exception e){
                system.out.println("Insertion Failed");
            }
        }
    }
}
public class Registration{

}
