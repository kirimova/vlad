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
    /// Логика взаимодействия для Сфера.xaml
    /// </summary>
    public partial class Сфера : Window
    {
        public Сфера()
        {
            InitializeComponent();
        }

        private void Выход_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            string r = поле1.Text;
            string b = поле2.Text;
            int r_1 = Convert.ToInt32(r)*Convert.ToInt32(r);
            double b_1 = 3.14;

            double p = r_1 * b_1;
            поле3.Text = p.ToString();
        }
    }
}
