   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null+clr-namespace:UI.MVVM.ViewUI.MVVM.View  5   	   %    UI.MVVM.View.AllBooks__Window1_   5   	   W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   ,localclr-namespace:UI.MVVM.View     5   	     � 
ResizeMode$  NoResize=�5   
    � Title$+ %Manage And Generate List Of All Books��5	   	   $	��800��67   $
��1200��6D   .��5      � $��0,0,0,-6q�6    � RowDefinitions 5   
   �� 5      $
��107* �6   �� 5      $
��157* �6   �� 5      $	��44* �6   �� 5      $	��44* �6   �� 5      $	��44* �6   �� 5      $	��44* �6   �� 5      $	��44* �6    � ColumnDefinitions 5   
   �� 5      $��2* �6   �� 5      $��8* �6   .+�5   
   &   System.Windows.Controls.DataGrid  -   5          Name$ AllBooksDataGrid��5      $��0��5      $��0��6    $��2��60   $��5q�6D   
�������   RowBackground
 �����   AlternatingRowBackground
 �����$   HorizontalScrollBarVisibility$ Visible=�5      "   VerticalScrollBarVisibility$ Visible=�6;   	   AutoGenerateColumns$	 False��6a   
 �� AlternationCount$
 2��5         CanUserAddRows$ False��6(   $��3��6?      
IsReadOnly$
 True��6P   $��0,12,304,72q�6b      Columns 5      0  *System.Windows.Controls.DataGridTextColumn  5       ,  &System.Windows.Controls.DataGridColumn   Header$ Book ID��6%      Width5  /System.Windows.Controls.DataGridLengthConverter$ 80 66   1  +System.Windows.Controls.DataGridBoundColumn   Binding 6A   �� *BookId+6^     5!      $ 
Book Title��6%   $	 200 69    6E   �� *
bookName+6d     5"      $ Genre��6%   $	 170 65    6A   �� *	bookGenre+6a     5#      $ Author��6%   $	 200 66    6B   �� *author+6_     5$      $ Publication Date��6%   $	 200 6@    6L   �� *publicationDate+6r   5'      �� 5)   
   $��Book Title:��6   $��2��6'   $��0��64   $��Center=�6D   $
��Left=�6_   $��	105,0,0,0q�6z   �� 5*   
   -   5         ��Name$ BookTitleAdd��5*   @   $��2��6   $��1��6   $��2,2,2,2q�6/   6@   �� 5,   
   $��Genre:��6   $��3��6"   $��0��6/   $��Center=�6?   $
��Left=�6Z   $��	114,0,0,0q�6u   �� 5-   
   -   5        $ GenreAdd��5-   @   $��3��6   $��1��6   $��2,2,2,2q�6/   6@   �� 5/   
   $��Author:��6   $��4��6#   $��0��60   $��Center=�6@   $
��Left=�6[   $��	112,0,0,0q�6v   �� 50   
   -   5        $ 	AuthorAdd��50   @   $��4��6   $��1��6   $��2,2,2,2q�6/   6@   �� 52   
   $$��Publication Date (YYYY-MM-DD):��6   $��5��6:   $��0��6G   $��Center=�6W   $
��Left=�6r   $��50,0,0,0q�6�   �� 53   
   -   5        $ PublicationAdd��53   @   $��5��6   $��1��6   $��2,2,2,2q�6/   6@   �� 55   
   -   5         ��Name$ btnAdd��55   j   $��6��6   $��1��6   $	��Add��6.   $��40��6<   $	��150��6I   $��140,2,300,2q�6U   56      �� 57   
   $��2��6   $��	0,0,0,151q�6)   58      �� 59   
   $!��Delete Row (Enter Book ID):��6   $��1��67   $	��Top=�6G   $
��Left=�6_   $��
693,87,0,0q�6z   �� 5:   
   -   5        $ deleteField��5:      $��1��6'   $
��Left=�67   $��734,107,0,0q�6R    �� TextWrapping$
 Wrap=�6g   $	��Top=�6{   $	��120��6�   �� 5;   
   -   5        $��1��5;      $��1��6   $��Delete��6.   $	��150��6?   $��719,47,91,160q�6K   6b   �� 5<   
   -	   5        $��1��5<      $��1��6   $��Refresh��6.   $	��150��6@   $��719,181,91,36q�6L   6c   5?      5@      