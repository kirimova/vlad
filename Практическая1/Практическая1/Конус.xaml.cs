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
    /// Логика взаимодействия для Конус.xaml
    /// </summary>
    public partial class Конус : Window
    {
        public Конус()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            string a = поле1.Text;
            string b = поле2.Text;
            string c = поле3.Text;
            double a_1 = 3.14;
            int b_1 = Convert.ToInt32(b);
            int c_1 = Convert.ToInt32(c);
            double v = a_1 * b_1 * c_1;
            поле4.Text = v.ToString();
        }
    }
}
