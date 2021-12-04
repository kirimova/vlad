using System;
using System.Collections.Generic;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace Практическая_работа_5
{
    /// <summary>
    /// Логика взаимодействия для Игра.xaml
    /// </summary>
    public partial class Игра : Window
    {
        public Игра()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            Random a = new Random();
            int a1 = a.Next(1,7);
            Кость1.Source = new BitmapImage(new Uri(@"C:\Users\maris\OneDrive\Рабочий стол\White 1-6\White " + a1 + ".jpg"));
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            Random p = new Random();
            int p1 = p.Next(1,7);
            КостьЧерная.Source = new BitmapImage(new Uri(@"C:\Users\maris\OneDrive\Рабочий стол\Black 1-6\Black " + p1 + ".jpg"));
        }
        private void Button_Click_2(object sender, RoutedEventArgs e)
        {
            String g = Результата1.Text;
            int g_1 = Convert.ToInt32(g);
            int l = g_1;
            string q = Результат2.Text;
            int q_1 = Convert.ToInt32(q);
            int s = q_1;
            if (l > s)
            {
                Вывод.Text = "Первый игрок выйграл";
            }
            if (l == s)
            {
                Вывод.Text = "Боевая ничья";
            }
            if (l <s)
            {
                Вывод.Text =  "Второй игрок выиграл";
            }

        }
    }
}
