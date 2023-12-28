using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;

namespace UI
{
    class SqlConnect
    {
        public SqlConnection Con { get; set; }//the object
        private string conString { get; set; }//the string to store your connection parameters
        public void conOpen()
        {
            conString = "Data Source = AMIEL - DESKTOP; Initial Catalog = Customer; Integrated Security = True";
            Con = new SqlConnection(conString);
            try
            {
                Con.Open();
            }
            catch
            {

            }
        }
        public void conClose()
        {
            Con.Close();
        }
    }
    
    

}
//Data Source=AMIEL-DESKTOP;Initial Catalog=Customer;Integrated Security=True