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
    /// Interaction logic for SignUpWindow.xaml
    /// </summary>
    public partial class SignUpWindow : Window
    {
        public SignUpWindow()
        {
            InitializeComponent();
        }

        private void btnBackLogin_Click(object sender, RoutedEventArgs e)
        {
            LogIn loginWindow = new LogIn();
            loginWindow.Show();
            this.Close();
        }

        private void btnCreateAccount_Click(object sender, RoutedEventArgs e)
        {
            if (txtFirstname != null && txtLastname != null && txtNewUsername != null && txtNewPassword.SecurePassword.Length >= 8 && txtOfficeCode.SecurePassword.Length == 4)
            {

                SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");


                try
                {
                    if (con.State == System.Data.ConnectionState.Closed)
                        con.Open();
                    string query = "INSERT INTO LoginTable (Firstname,Lastname,Username,Password,LoginInformation) VALUES (@Firstname, @Lastname, @Username, @Password, NULL)";
                    SqlCommand cmd = new SqlCommand(query, con);
                    cmd.CommandType = System.Data.CommandType.Text;
                    cmd.Parameters.AddWithValue("@Firstname", txtFirstname.Text);
                    cmd.Parameters.AddWithValue("@Lastname", txtLastname.Text);
                    cmd.Parameters.AddWithValue("@Username", txtNewUsername.Text);
                    cmd.Parameters.AddWithValue("@Password", txtNewPassword.Password);
                    cmd.ExecuteNonQuery();
                    con.Close();
                    MessageBox.Show("Successfully Registered..");


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
            else
            {
                MessageBox.Show("Complete the Required Information or Wrong Office Code ...");
            }


        }
    }
}
