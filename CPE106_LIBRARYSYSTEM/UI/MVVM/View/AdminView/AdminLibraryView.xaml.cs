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
using System.Collections.ObjectModel;
using System.Data.SqlClient;
using System.Data;
using System.Configuration;
namespace UI.MVVM.View
{
    /// <summary>
    /// Interaction logic for AdminLibraryView.xaml
    /// </summary>
    public partial class AdminLibraryView : UserControl
    {
        public AdminLibraryView()
        {
            InitializeComponent();
		}

        private void ReturnedBooks(object sender, RoutedEventArgs e)
        {
            if (radio_overall.IsChecked==true)
            {
                SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
                {
                    //
                    con.Open();
                    string CmdString = "SELECT bookTitle, bookAuthor, borrowersName, returnDate, bookNumber FROM ReturnBook";

                    SqlCommand cmd = new SqlCommand(CmdString, con);

                    SqlDataAdapter sda = new SqlDataAdapter(cmd);

                    DataTable dt = new DataTable("ReturnBook");

                    sda.Fill(dt);


                    dgUsers.ItemsSource = dt.DefaultView;
                }
            }
            else if (radio_month.IsChecked==true)
            {
                SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
                {
                    //
                    con.Open();
                    string CmdString = "SELECT bookTitle, bookAuthor, borrowersName, returnDate, bookNumber FROM ReturnBook WHERE returnDate >= DATEADD(day, -30, getdate())";

                    SqlCommand cmd = new SqlCommand(CmdString, con);

                    SqlDataAdapter sda = new SqlDataAdapter(cmd);

                    DataTable dt = new DataTable("ReturnBook");

                    sda.Fill(dt);


                    dgUsers.ItemsSource = dt.DefaultView;
                }
            }
        }

        private void UnreturnedBooks(object sender, RoutedEventArgs e)
        {
            if (radio_overall.IsChecked == true)
            {
                SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
                {
                    //
                    con.Open();
                    string CmdString = "SELECT bookTitle, bookAuthor, borrowersName, returnDate, bookNumber FROM UnreturnedBook";

                    SqlCommand cmd = new SqlCommand(CmdString, con);

                    SqlDataAdapter sda = new SqlDataAdapter(cmd);

                    DataTable dt = new DataTable("UnreturnedBook");

                    sda.Fill(dt);


                    dgUsers.ItemsSource = dt.DefaultView;
                }
            }
            else if (radio_month.IsChecked == true)
            {
                SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
                {
                    //
                    con.Open();
                    string CmdString = "SELECT bookTitle, bookAuthor, borrowersName, returnDate, bookNumber FROM UnreturnedBook WHERE returnDate >= DATEADD(day, -30, getdate())";

                    SqlCommand cmd = new SqlCommand(CmdString, con);

                    SqlDataAdapter sda = new SqlDataAdapter(cmd);

                    DataTable dt = new DataTable("UnreturnedBook");

                    sda.Fill(dt);


                    dgUsers.ItemsSource = dt.DefaultView;
                }
            }
        }
    }
}
