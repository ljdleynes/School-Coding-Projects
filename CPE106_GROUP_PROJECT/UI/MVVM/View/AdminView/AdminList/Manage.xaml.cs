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
using System.Data;
using System.Configuration;

namespace UI.MVVM.View
{
    /// <summary>
    /// Interaction logic for Manage.xaml
    /// </summary>
    public partial class Manage : Window
    {
        public Manage()
        {
            InitializeComponent();
            FillBorrowedTable();
            FillUnreturnedTable();
        }
        private void FillBorrowedTable()
        {
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                //
                con.Open();
                string CmdString = "SELECT * FROM Borrowers";

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("Borrowers");

                sda.Fill(dt);


                BorrowedTable.ItemsSource = dt.DefaultView;
            }
        }
        private void FillReturnTable()
        {
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                //
                con.Open();
                string CmdString = "SELECT * FROM ReturnBook";

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("ReturnBook");

                sda.Fill(dt);


                ReturnedTable.ItemsSource = dt.DefaultView;
            }
        }
        private void FillUnreturnedTable()
        {
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                //
                con.Open();
                string CmdString = "SELECT * FROM UnreturnedBook";

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("UnreturnedBook");

                sda.Fill(dt);


                UnreturnedTable.ItemsSource = dt.DefaultView;
            }
        }

        private void RefreshTable(object sender, RoutedEventArgs e)
        {
            FillBorrowedTable();
            FillReturnTable();
            FillUnreturnedTable();
        }
        private void OpenWindow3(object sender, RoutedEventArgs e)
        {
            ManageBorrowers objManageBorrowers = new ManageBorrowers();
            objManageBorrowers.Show();
        }

        private void DataGrid_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {

        }

       
    }
}
