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

namespace UI.MVVM.View
{
    /// <summary>
    /// Interaction logic for AdminList.xaml
    /// </summary>
    public partial class AdminList : UserControl
    {
        public AdminList()
        {
            InitializeComponent();
        }
        private void Button_Click(object sender, RoutedEventArgs e)
        {
            AllBooks__Window1_ NewList1 = new AllBooks__Window1_();
            NewList1.WindowStartupLocation = WindowStartupLocation.CenterScreen;
            NewList1.Show();
        }

        private void Button(object sender, RoutedEventArgs e)
        {

        }

        private void OpenWindow1(object sender, RoutedEventArgs e)
        {
            GenerateList objGenerateList = new GenerateList();
            objGenerateList.Show();
        }

        private void OpenWindow2(object sender, RoutedEventArgs e)
        {
            Manage objManage = new Manage();
            objManage.Show();
        }
        private void ActivateBorrowedBooksMonth(object sender, RoutedEventArgs e)
        {
            foreach (Window window in Application.Current.Windows)
            {
                if (window.GetType() == typeof(BorrowedBooksMonth))
                {
                    return;
                }
            }

            BorrowedBooksMonth ListBorrowedActive = new BorrowedBooksMonth();
            ListBorrowedActive.Show();
        }

        private void ActivateGenreBooks(object sender, RoutedEventArgs e)
        {
            foreach (Window window in Application.Current.Windows)
            {
                if (window.GetType() == typeof(GenreBooks))
                {
                    return;
                }
            }

            GenreBooks ListBookGenre = new GenreBooks();
            ListBookGenre.Show();
        }
        
    }
}
