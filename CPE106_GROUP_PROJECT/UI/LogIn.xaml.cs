using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;
using System.Data.SqlClient;

namespace UI
{
    /// <summary>
    /// Interaction logic for LogIn.xaml
    /// </summary>
    public partial class LogIn : Window
    {
        public LogIn()
        {
            InitializeComponent();
        }
        private void btnSubmit_Click(object sender, RoutedEventArgs e)
        {

            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");

            try
            {
                
                if (con.State == System.Data.ConnectionState.Closed)
                    con.Open();
                String query = "SELECT COUNT(UserID) FROM LoginTable WHERE Username=@Username AND Password=@Password";
                String query1 = "update LoginTable Set LoginInformation = GETDATE() where Username = @Username AND Password = @Password";
                SqlCommand cmd = new SqlCommand(query, con);
                SqlCommand cmd1 = new SqlCommand(query1, con);
                cmd.CommandType = System.Data.CommandType.Text;
                cmd.Parameters.AddWithValue("@Username", txtUsername.Text);
                cmd.Parameters.AddWithValue("@Password", txtPassword.Password);
                cmd1.CommandType = System.Data.CommandType.Text;
                cmd1.Parameters.AddWithValue("@Username", txtUsername.Text);
                cmd1.Parameters.AddWithValue("@Password", txtPassword.Password);
                int count = Convert.ToInt32(cmd.ExecuteScalar());
                if (count == 1)
                {
                    AdminView dashboard = new AdminView();
                   
                    cmd1.ExecuteNonQuery();
                    dashboard.Show();
                    this.Close();
                }
                else
                {
                    MessageBox.Show("Username or Password is Incorrect..");
                }

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            finally
            {
                con.Close();
            }

        }

        private void btnSignup_Click(object sender, RoutedEventArgs e)
        {
            SignUpWindow signUp = new SignUpWindow();
            signUp.Show();
            this.Close();
        }

        private void txtUsername_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.Key == Key.Return)
            {
                SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");

                try
                {

                    if (con.State == System.Data.ConnectionState.Closed)
                        con.Open();
                    String query = "SELECT COUNT(UserID) FROM LoginTable WHERE Username=@Username AND Password=@Password";
                    String query1 = "update LoginTable Set LoginInformation = GETDATE() where Username = @Username AND Password = @Password";
                    SqlCommand cmd = new SqlCommand(query, con);
                    SqlCommand cmd1 = new SqlCommand(query1, con);
                    cmd.CommandType = System.Data.CommandType.Text;
                    cmd.Parameters.AddWithValue("@Username", txtUsername.Text);
                    cmd.Parameters.AddWithValue("@Password", txtPassword.Password);
                    cmd1.CommandType = System.Data.CommandType.Text;
                    cmd1.Parameters.AddWithValue("@Username", txtUsername.Text);
                    cmd1.Parameters.AddWithValue("@Password", txtPassword.Password);
                    int count = Convert.ToInt32(cmd.ExecuteScalar());
                    if (count == 1)
                    {
                        AdminView dashboard = new AdminView();

                        cmd1.ExecuteNonQuery();
                        dashboard.Show();
                        this.Close();
                    }
                    else
                    {
                        MessageBox.Show("Username or Password is Incorrect..");
                    }

                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
                finally
                {
                    con.Close();
                }
            }

           
        }

        private void txtPassword_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.Key == Key.Return)
            {
                SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");

                try
                {

                    if (con.State == System.Data.ConnectionState.Closed)
                        con.Open();
                    String query = "SELECT COUNT(UserID) FROM LoginTable WHERE Username=@Username AND Password=@Password";
                    String query1 = "update LoginTable Set LoginInformation = GETDATE() where Username = @Username AND Password = @Password";
                    SqlCommand cmd = new SqlCommand(query, con);
                    SqlCommand cmd1 = new SqlCommand(query1, con);
                    cmd.CommandType = System.Data.CommandType.Text;
                    cmd.Parameters.AddWithValue("@Username", txtUsername.Text);
                    cmd.Parameters.AddWithValue("@Password", txtPassword.Password);
                    cmd1.CommandType = System.Data.CommandType.Text;
                    cmd1.Parameters.AddWithValue("@Username", txtUsername.Text);
                    cmd1.Parameters.AddWithValue("@Password", txtPassword.Password);
                    int count = Convert.ToInt32(cmd.ExecuteScalar());
                    if (count == 1)
                    {
                        AdminView dashboard = new AdminView();

                        cmd1.ExecuteNonQuery();
                        dashboard.Show();
                        this.Close();
                    }
                    else
                    {
                        MessageBox.Show("Username or Password is Incorrect..");
                    }

                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
                finally
                {
                    con.Close();
                }
            }

            
        }
        /*
private void Button_Click(object sender, RoutedEventArgs e)
{
if (txtUsername.Text == "admin" && txtPassword.Password == "pass")
{
AdminView AV = new AdminView(txtUsername.Text);
AV.WindowStartupLocation = WindowStartupLocation.CenterScreen;
AV.Show();
this.Close();

}
else if (txtUsername.Text == "guest" && txtPassword.Password == "pass")
{
UserView UV = new UserView(txtUsername.Text);
UV.WindowStartupLocation = WindowStartupLocation.CenterScreen;
UV.Show();
this.Close();

}
*/
    }
        
}
    

