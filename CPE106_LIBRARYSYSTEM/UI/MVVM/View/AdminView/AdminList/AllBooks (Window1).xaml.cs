using System.Collections.ObjectModel;
using System.Windows;
using System.Windows.Controls;
using System.Data.SqlClient;
using System.Data;
using System.Configuration;

namespace UI.MVVM.View
{
    /// <summary>
    /// Interaction logic for AllBooks__Window1_.xaml
    /// </summary>
    public partial class AllBooks__Window1_ : Window
    {
       
        public AllBooks__Window1_()
        {
            InitializeComponent();
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                con.Open();

                string CmdString = "SELECT BookId, bookName, bookGenre, author, publicationDate FROM Books";

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("Books");

                sda.Fill(dt);


                AllBooksDataGrid.ItemsSource = dt.DefaultView;
            }
        }
        private void btnAdd_Click(object sender, RoutedEventArgs e)
        {
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                con.Open();

                string CmdString = "INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES (@bookName, @bookGenre, @author, @publication)";

                SqlCommand cmd = new SqlCommand(CmdString, con);
                cmd.CommandType = System.Data.CommandType.Text;
                cmd.Parameters.AddWithValue("@bookName", BookTitleAdd.Text);
                cmd.Parameters.AddWithValue("@bookGenre", GenreAdd.Text);
                cmd.Parameters.AddWithValue("@author", AuthorAdd.Text);
                cmd.Parameters.Add("@publication", SqlDbType.Date).Value = PublicationAdd.Text;

                cmd.ExecuteNonQuery();

                con.Close();
            }
        }

        private void btnDelete_Click(object sender, RoutedEventArgs e)
        {
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                con.Open();

                string CmdString = "DELETE FROM Books WHERE BookId=@userinput";

                SqlCommand cmd = new SqlCommand(CmdString, con);
                cmd.CommandType = System.Data.CommandType.Text;
                cmd.Parameters.AddWithValue("@userinput", deleteField.Text);

                cmd.ExecuteNonQuery();

                con.Close();
            }
        }

        private void RefreshTable(object sender, RoutedEventArgs e)
        {
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                con.Open();

                string CmdString = "SELECT BookId, bookName, bookGenre, author, publicationDate FROM Books";

                SqlCommand cmd = new SqlCommand(CmdString, con);

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("Books");

                sda.Fill(dt);


                AllBooksDataGrid.ItemsSource = dt.DefaultView;
            }
        }
    }
}
