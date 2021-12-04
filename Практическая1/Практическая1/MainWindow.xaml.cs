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

namespace Практическая1
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
       
        public MainWindow()
        {
            InitializeComponent();
            
        }

        private void Трапеция_Click(object sender, RoutedEventArgs e)
        {
            Конус conewin = new Конус();
            conewin.Show();
           
        }

        

        private void Усеченныйконус_Click(object sender, RoutedEventArgs e)
        {
            Усеченный_конус abp = new Усеченный_конус();
            abp.Show();
        }

     

        private void Выход_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

        private void Цилиндр_Click_1(object sender, RoutedEventArgs e)
        {
            Цилиндр1 t = new Цилиндр1();
            t.Show();
        }

        private void Сфера_Click_1(object sender, RoutedEventArgs e)
        {
            Сфера q = new Сфера();
            q.Show();
        }
    }
}
