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
    /// Логика взаимодействия для Усеченный_конус.xaml
    /// </summary>
    public partial class Усеченный_конус : Window
    {
        public Усеченный_конус()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            string a = поле.Text;
            string b = поле1.Text;
            string c = поле2.Text;
            string d = поле3.Text;
            string p = поле4.Text;
            double a_1 = 3.14;
            int b_1 = Convert.ToInt32(b);
            int c_1 = Convert.ToInt32(c);
            int d_1 = Convert.ToInt32(d);
            double p_1 = (c_1 + d_1) * a_1;
            double p_2 = p_1 * b_1;
            поле4.Text = p_2.ToString();
        }
    }
}
