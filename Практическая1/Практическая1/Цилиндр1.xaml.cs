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

namespace Практическая1
{
    /// <summary>
    /// Логика взаимодействия для Цилиндр1.xaml
    /// </summary>
    public partial class Цилиндр1 : Window
    {
        public Цилиндр1()
        {
            InitializeComponent();
        }
        private void Button_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

       

        private void Button_Click_2(object sender, RoutedEventArgs e)
        {
            string a = поле1.Text;
            string b= поле2.Text;
            string c = поле3.Text;
            int a_1 = Convert.ToInt32(a);
            int b_1 = Convert.ToInt32(b);
           double c_1 = 3.14;
            double abc = a_1 * b_1 * c_1;
            поле4.Text = abc.ToString();

        }
    }
}
