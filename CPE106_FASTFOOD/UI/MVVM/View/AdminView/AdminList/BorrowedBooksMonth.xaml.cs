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
    /// Interaction logic for BorrowedBooksMonth.xaml
    /// </summary>
    public partial class BorrowedBooksMonth : Window { 
  
        public BorrowedBooksMonth()
        {

            InitializeComponent();
            FillBorrowedMonth();
        }
       
        private void FillBorrowedMonth()
        {
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                string CmdString = "select bookTitle, bookAuthor, borrowDate, borrowersName, bookNumber from Borrowers where borrowDate >= DATEADD(day, -30, getdate())";

                SqlCommand cmd = new SqlCommand(CmdString, con);
                //cmd.CommandType = System.Data.CommandType.Text;

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("Books");

                sda.Fill(dt);

                bookInfoGrid.ItemsSource = dt.DefaultView;
            }
        }
        private void RefreshBorrowedTable(object sender, RoutedEventArgs e)
        {
            FillBorrowedMonth();
        }
        private void CloseWindow(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

    }


}
  
