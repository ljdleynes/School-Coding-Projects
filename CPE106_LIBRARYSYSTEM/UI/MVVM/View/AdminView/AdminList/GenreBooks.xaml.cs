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
    /// Interaction logic for GenreBooks.xaml
    /// </summary>
    public partial class GenreBooks : Window
    {
        public GenreBooks()
        {
            InitializeComponent();
        }
        private void ActivateAAA(object sender, RoutedEventArgs e)
        {
            menuAAA.IsChecked = true;

            menuC.IsChecked = false;
            menuDAM.IsChecked = false;
            menuF.IsChecked = false;
            menuH.IsChecked = false;

            selectedGenreLabel.Content = "Selected Genre: Action and Adventure";

            FillAAA();
        }

        private void FillAAA()
        {
            //string valueCls = "Classics";
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                string CmdString = "select bookName, author, publicationDate, BookId, bookGenre from Books where bookGenre = 'Action and Adventure'";

                SqlCommand cmd = new SqlCommand(CmdString, con);
                //cmd.CommandType = System.Data.CommandType.Text;

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("Books");

                sda.Fill(dt);

                GenreBooksList.ItemsSource = dt.DefaultView;
            }
        }

        private void ActivateC(object sender, RoutedEventArgs e)
        {
            menuC.IsChecked = true;

            menuAAA.IsChecked = false;
            menuDAM.IsChecked = false;
            menuF.IsChecked = false;
            menuH.IsChecked = false;

            selectedGenreLabel.Content = "Selected Genre: Classics";

            //connection to classics
            FillClassics();
        }
        private void FillClassics()
        {
            //string valueCls = "Classics";
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                string CmdString = "select bookName, author, publicationDate, BookId, bookGenre from Books where bookGenre = 'Classics'";

                SqlCommand cmd = new SqlCommand(CmdString, con);
                //cmd.CommandType = System.Data.CommandType.Text;

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("Books");

                sda.Fill(dt);

                GenreBooksList.ItemsSource = dt.DefaultView;
            }
        }
        private void ActivateDAM(object sender, RoutedEventArgs e)
        {
            menuDAM.IsChecked = true;

            menuC.IsChecked = false;
            menuAAA.IsChecked = false;
            menuF.IsChecked = false;
            menuH.IsChecked = false;

            selectedGenreLabel.Content = "Selected Genre: Detective and Mysteries";

            //GenreBooksList.ItemsSource = MyDAMBooks;
            FillDAM();
        }
        private void FillDAM()
        {
            //string valueCls = "Classics";
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                string CmdString = "select bookName, author, publicationDate, BookId, bookGenre from Books where bookGenre = 'Detective and Mysteries'";

                SqlCommand cmd = new SqlCommand(CmdString, con);
                //cmd.CommandType = System.Data.CommandType.Text;

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("Books");

                sda.Fill(dt);

                GenreBooksList.ItemsSource = dt.DefaultView;
            }
        }

        private void ActivateF(object sender, RoutedEventArgs e)
        {
            menuF.IsChecked = true;


            menuC.IsChecked = false;
            menuDAM.IsChecked = false;
            menuAAA.IsChecked = false;
            menuH.IsChecked = false;

            selectedGenreLabel.Content = "Selected Genre: Fantasy";

            //GenreBooksList.ItemsSource = MyFBooks;
            FillF();
        }
        private void FillF()
        {
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                string CmdString = "select bookName, author, publicationDate, BookId, bookGenre from Books where bookGenre = 'Fantasy'";

                SqlCommand cmd = new SqlCommand(CmdString, con);
                //cmd.CommandType = System.Data.CommandType.Text;

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("Books");

                sda.Fill(dt);

                GenreBooksList.ItemsSource = dt.DefaultView;
            }
        }

        private void ActivateH(object sender, RoutedEventArgs e)
        {
            menuH.IsChecked = true;


            menuC.IsChecked = false;
            menuDAM.IsChecked = false;
            menuF.IsChecked = false;
            menuAAA.IsChecked = false;

            selectedGenreLabel.Content = "Selected Genre: Horror";

            //GenreBooksList.ItemsSource = MyHBooks;
            FillH();
        }
        private void FillH()
        {
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                string CmdString = "select bookName, author, publicationDate, BookId, bookGenre from Books where bookGenre = 'Horror'";

                SqlCommand cmd = new SqlCommand(CmdString, con);
                //cmd.CommandType = System.Data.CommandType.Text;

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("Books");

                sda.Fill(dt);

                GenreBooksList.ItemsSource = dt.DefaultView;
            }
        }
        private void CloseGenre(object sender, RoutedEventArgs e)
        {
            this.Close();
        }
    }
}



//Classics cbookGenre1 = new Classics();
//bookGenre1.Title =
//bookGenre1.Author =
//bookGenre1.Date =
//bookGenre1.ImageUrl =
//bookGenre1.Publisher =
//bookGenre1.Genre =
