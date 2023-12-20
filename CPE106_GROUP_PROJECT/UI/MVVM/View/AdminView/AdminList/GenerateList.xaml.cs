﻿using System;
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
    /// Interaction logic for GenerateList.xaml
    /// </summary>
    public partial class GenerateList : Window
    {
        public GenerateList()
        {
            InitializeComponent();
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-4S8UIR5;Initial Catalog=LibraryManagement;Integrated Security=True");
            {
                string CmdString = "select bookTitle, bookAuthor, borrowDate, borrowersName, bookNumber from Borrowers";

                SqlCommand cmd = new SqlCommand(CmdString, con);
                //cmd.CommandType = System.Data.CommandType.Text;

                SqlDataAdapter sda = new SqlDataAdapter(cmd);

                DataTable dt = new DataTable("Books");

                sda.Fill(dt);

                BorrowedTable.ItemsSource = dt.DefaultView;
            }
        }
    }
   }

