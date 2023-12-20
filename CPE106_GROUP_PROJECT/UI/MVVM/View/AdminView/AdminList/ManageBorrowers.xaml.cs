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
    /// Interaction logic for ManageBorrowers.xaml
    /// </summary>
    public partial class ManageBorrowers : Window
    {
        public ManageBorrowers()
        {
            InitializeComponent();
        }
        private void executeBorrowers(object sender, RoutedEventArgs e)
        {
            if (brwd.IsChecked == true) 
                {
                    //
                    SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
                    {
                        con.Open();

                        string CmdString = "INSERT INTO Borrowers (bookTitle, bookAuthor, bookNumber, borrowDate) SELECT bookName, author, BookId, CAST(GETDATE() as DATE) FROM Books WHERE BookId=@userinput";

                        SqlCommand cmd = new SqlCommand(CmdString, con);
                        cmd.CommandType = System.Data.CommandType.Text;
                        cmd.Parameters.AddWithValue("@userinput", BorrowerNameAdd.Text);

                        cmd.ExecuteNonQuery();


                        string CmdString2 = "UPDATE Borrowers SET borrowersName=@nameBorrower WHERE bookNumber=@userinput;";

                        SqlCommand cmd2 = new SqlCommand(CmdString2, con);
                        cmd2.CommandType = System.Data.CommandType.Text;
                        cmd2.Parameters.AddWithValue("@nameBorrower", BookTitleAdd.Text);
                        cmd2.Parameters.AddWithValue("@userinput", BorrowerNameAdd.Text);

                        cmd2.ExecuteNonQuery();

                        con.Close();
                        this.Close();
                    }
                }
                else if (rtrnd.IsChecked == true)
                {
                    //
                    SqlConnection con2 = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
                    {
                        con2.Open();

                        string CmdString = "INSERT INTO ReturnBook (bookTitle, bookAuthor, bookNumber, returnDate) SELECT bookName, author, BookId, CAST(GETDATE() as DATE) FROM Books WHERE BookId=@userinput";

                        SqlCommand cmd = new SqlCommand(CmdString, con2);
                        cmd.CommandType = System.Data.CommandType.Text;
                        cmd.Parameters.AddWithValue("@userinput", BorrowerNameAdd.Text);

                        cmd.ExecuteNonQuery();


                        string CmdString2 = "UPDATE ReturnBook SET borrowersName=@nameBorrower WHERE bookNumber=@userinput;";

                        SqlCommand cmd2 = new SqlCommand(CmdString2, con2);
                        cmd2.CommandType = System.Data.CommandType.Text;
                        cmd2.Parameters.AddWithValue("@nameBorrower", BookTitleAdd.Text);
                        cmd2.Parameters.AddWithValue("@userinput", BorrowerNameAdd.Text);

                        cmd2.ExecuteNonQuery();

                        con2.Close();
                        this.Close();
                    }
                    
                }
            else if (unrtrnd.IsChecked==true)
                {
                    //
                    SqlConnection con3 = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");

                    con3.Open();

                    string CmdString = "INSERT INTO UnreturnedBook (bookTitle, bookAuthor, bookNumber, returnDate) SELECT bookName, author, BookId, CAST(GETDATE() as DATE) FROM Books WHERE BookId=@userinput";

                    SqlCommand cmd = new SqlCommand(CmdString, con3);
                    cmd.CommandType = System.Data.CommandType.Text;
                    cmd.Parameters.AddWithValue("@userinput", BorrowerNameAdd.Text);

                    cmd.ExecuteNonQuery();


                    string CmdString2 = "UPDATE UnreturnedBook SET borrowersName=@nameBorrower WHERE bookNumber=@userinput;";

                    SqlCommand cmd2 = new SqlCommand(CmdString2, con3);
                    cmd2.CommandType = System.Data.CommandType.Text;
                    cmd2.Parameters.AddWithValue("@nameBorrower", BookTitleAdd.Text);
                    cmd2.Parameters.AddWithValue("@userinput", BorrowerNameAdd.Text);

                    cmd2.ExecuteNonQuery();

                    con3.Close();
                    this.Close();
                    
                }
                              
            }
        }
    }
