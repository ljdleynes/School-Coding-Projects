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
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Data.SqlClient;
using System.Configuration;
using System.Data;
namespace UI.MVVM.View
{
    /// <summary>
    /// Interaction logic for AdminUnreturnedView.xaml
    /// </summary>
    public partial class AdminLogs : UserControl
    {
        public AdminLogs()
        {
            InitializeComponent();
            
        }
        public class User
        {
            //public int Id { get; set; }

           // public string Name { get; set; }

            //public DateTime LoginInformation { get; set; }
            //SelectionChanged="LibraryUserLogs_SelectionChanged"
            //public string Details
            //{
            // get
            //{
            //return String.Format("{0} was born on {1} and this is a long description of the person.", this.Name, this.LoginInformation.ToLongDateString());
            //}
            //}
        }
        /*
        public void FillDataGrid()

        {

            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server

            {

                string CmdString = "select Firstname, LoginInformation from LoginTable"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }

        }
        */



        private void January_Checked(object sender, RoutedEventArgs e)
        {
            January.Background = Brushes.Blue;
            JanuaryLB.Foreground = Brushes.Blue;
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server

            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 1"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);
                
                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }

            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Doe", LoginInformation = new DateTime(1971, 1, 23,11,32,26) });
            users.Add(new User() { Id = 2, Name = "Jane Doe", LoginInformation = new DateTime(1974, 1, 17, 20,34,26) });
            users.Add(new User() { Id = 3, Name = "Sammy Doe", LoginInformation = new DateTime(1991, 1, 2,3,5,2) });

            LibraryUserLogs.ItemsSource = users;
            */

        }
        private void February_Checked(object sender, RoutedEventArgs e)
        {
            February.Background = Brushes.Purple;
            FebruaryLB.Foreground = Brushes.Purple;
  
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server

            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 2"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }
            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 2, 23) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974, 2, 17) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991, 2, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }
        private void March_Checked(object sender, RoutedEventArgs e)
        {
            March.Background = Brushes.Chocolate;
            MarchLB.Foreground = Brushes.Chocolate;
       
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server

            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 3"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }
            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 3, 23) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974, 3, 17) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991, 3, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }
        private void April_Checked(object sender, RoutedEventArgs e)
        {
            April.Background = Brushes.Red;
            AprilLB.Foreground = Brushes.Red;
         
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 4"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }
            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 4, 23) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974, 4, 17) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991, 4, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }
        private void May_Checked(object sender, RoutedEventArgs e)
        {
            May.Background = Brushes.Yellow;
            MayLB.Foreground = Brushes.Yellow;
      
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 5"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }
            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 5, 23) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974, 5, 17) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991, 5, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }
        private void June_Checked(object sender, RoutedEventArgs e)
        {
            June.Background = Brushes.Coral;
            JuneLB.Foreground = Brushes.Coral;
           
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 6"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }
            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 6, 23) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974, 6, 17) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991, 6, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }
        private void July_Checked(object sender, RoutedEventArgs e)
        {
            July.Background = Brushes.LightGreen;
            JulyLB.Foreground = Brushes.LightGreen;
      
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 7"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }
            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 7, 23) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974, 7, 17) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991, 7, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }
        private void August_Checked(object sender, RoutedEventArgs e)
        {
            August.Background = Brushes.Orange;
            AugustLB.Foreground = Brushes.Orange;
            
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 8"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }
            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 8, 23) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974,8, 17) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991, 8, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }
        private void September_Checked(object sender, RoutedEventArgs e)
        {
            September.Background = Brushes.Brown;
            SeptemberLB.Foreground = Brushes.Brown;
           
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 9"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }
            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 9, 23) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974, 9, 17) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991, 9, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }
        private void October_Checked(object sender, RoutedEventArgs e)
        {
            October.Background = Brushes.Pink;
            OctoberLB.Foreground = Brushes.Pink;
           
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 10"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }
            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 10, 23) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974, 10, 17) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991, 10, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }
        private void November_Checked(object sender, RoutedEventArgs e)
        {
            November.Background = Brushes.Yellow;
            NovemberLB.Foreground= Brushes.Yellow;
            
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 11"; //Storing the command to CmdString which is why it is set to null

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }
            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 11 , 23, 13, 5,2) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974, 11, 17, 14,3,10) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991,11, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }
        private void December_Checked(object sender, RoutedEventArgs e)
        {
            December.Background = Brushes.Indigo;
            DecemberLB.Foreground = Brushes.Indigo;
           
            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
            {

                string CmdString = "select Firstname, LoginInformation from LoginTable where MONTH(LoginInformation) = 12"; //Storing the command to CmdString. This command only shows the firstName of the user, the LoginInformation where the Month is december. 

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable

            }

            /*
            List<User> users = new List<User>();
            users.Add(new User() { Id = 1, Name = "John Wick", LoginInformation = new DateTime(1971, 12, 23) });
            users.Add(new User() { Id = 2, Name = "Jane Foster", LoginInformation = new DateTime(1974, 12, 17) });
            users.Add(new User() { Id = 3, Name = "Sammy ", LoginInformation = new DateTime(1991, 12, 2) });

            LibraryUserLogs.ItemsSource = users;
            */
        }



        private void January_Unchecked(object sender, RoutedEventArgs e)
        {
            January.Background = Brushes.White;
            JanuaryLB.Foreground = Brushes.White;
        }

        private void February_Unchecked(object sender, RoutedEventArgs e)
        {
            February.Background = Brushes.White;
            FebruaryLB.Foreground = Brushes.White;
        }

        private void March_Unchecked(object sender, RoutedEventArgs e)
        {
            March.Background = Brushes.White;
            MarchLB.Foreground = Brushes.White;
        }

        private void April_Unchecked(object sender, RoutedEventArgs e)
        {
            April.Background = Brushes.White;
            AprilLB.Foreground = Brushes.White;
        }

        private void May_Unchecked(object sender, RoutedEventArgs e)
        {
            May.Background = Brushes.White;
            MayLB.Foreground = Brushes.White;
        }

        private void June_Unchecked(object sender, RoutedEventArgs e)
        {
            June.Background = Brushes.White;
            JuneLB.Foreground = Brushes.White;
        }

        private void July_Unchecked(object sender, RoutedEventArgs e)
        {
            July.Background = Brushes.White;
            JulyLB.Foreground = Brushes.White;
        }

        private void August_Unchecked(object sender, RoutedEventArgs e)
        {
            August.Background = Brushes.White;
            AugustLB.Foreground = Brushes.White;
        }

        private void September_Unchecked(object sender, RoutedEventArgs e)
        {
            September.Background = Brushes.White;
            SeptemberLB.Foreground = Brushes.White;
        }

        private void October_Unchecked(object sender, RoutedEventArgs e)
        {
            October.Background = Brushes.White;
            OctoberLB.Foreground = Brushes.White;
        }

        private void November_Unchecked(object sender, RoutedEventArgs e)
        {
            November.Background = Brushes.White;
            NovemberLB.Foreground = Brushes.White;
        }

        private void December_Unchecked(object sender, RoutedEventArgs e)
        {
            December.Background = Brushes.White;
            DecemberLB.Foreground = Brushes.White;
        }

        
        
        private void TextBox_KeyDown(object sender, KeyEventArgs e)
        {
           
            if (e.Key == Key.Return)
            {
                /*
                if (Box.Text == "XD")
                {
                    Box.Text = "F";
                }
                else
                {
                    
                }
                */
                string text = Box.Text;
                if (Box.Text != null)
                {
                    SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
                    string CmdString = "Select Firstname, LoginInformation from LoginTable where Firstname=@firstname"; //Storing the command to CmdString. This command only shows the firstName of the user, the LoginInformation where the Month is december. 

                    SqlCommand cmd = new SqlCommand(CmdString, con);
                    cmd.CommandType = System.Data.CommandType.Text;
                    cmd.Parameters.AddWithValue("@firstname", text);
                    SqlDataAdapter sda = new SqlDataAdapter(cmd);

                    DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

                    sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

                    LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable
                    Box.Clear();
                }
                
                
                
                //Box.Text = String.Empty;
                
            }
        }

        private void Btn_Click(object sender, RoutedEventArgs e)
        {
           
            
            
            string text = Box.Text;







            SqlConnection con = new SqlConnection("Data Source=AMIEL-DESKTOP;Initial Catalog=LibraryManagement;Integrated Security=True"); //Connecting to the SQL server
            string CmdString = "Select Firstname, LoginInformation from LoginTable where Firstname=@firstname"; //Storing the command to CmdString. This command only shows the firstName of the user, the LoginInformation where the Month is december. 

            SqlCommand cmd = new SqlCommand(CmdString, con);
            cmd.CommandType = System.Data.CommandType.Text;
            cmd.Parameters.AddWithValue("@firstname", text);
            SqlDataAdapter sda = new SqlDataAdapter(cmd);

            DataTable dt = new DataTable("LoginTable"); //Create an object that targets LoginTable

            sda.Fill(dt); //Fill the Datagrid with the data from the LogInTable

            LibraryUserLogs.ItemsSource = dt.DefaultView; //This is to display the Datagrid with the data from the LogInTable
            Box.Clear();


        }

        private void Box_PreviewMouseDown(object sender, MouseButtonEventArgs e)
        {
            if (Box.Text == "Search Name")
            {
                Box.Text = string.Empty;
            }
            
        }

        


        //private void LibraryUserLogs_SelectionChanged(object sender, SelectionChangedEventArgs e)
        //{

        //}
    }
}
