   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null+clr-namespace:UI.MVVM.ViewUI.MVVM.View  5   	       UI.MVVM.View.GenerateList   5   	   W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   ,localclr-namespace:UI.MVVM.View     5   	     � Title$)  #Generate List of All Borrowed Books��5   	   $	��450��65   $	��800��6B    � WindowStartupLocation$ CenterScreen=�6N   .��5	      �  � RowDefinitions 5
   
   �� 5      $��1* �6   �� 5      $��1* �6   �� 5      $��1* �6   �� 5      $��1* �6   �� 5      $��1* �6   �� 5      $��1* �6   �� 5      $��1* �6   �� 5      $��1* �6   �� 5      $��1* �6   �� 5      $��1* �6   �� 5      $��1* �6   �� 5      $��1* �6    � ColumnDefinitions 5   
   �� 5      $��5* �6   �� 5      $��4* �6   �� 5      $��4* �6   �� 5      $��4* �6   .+�5   
   &   System.Windows.Controls.DataGrid  -   5          Name$ BorrowedTable��5      $��10,10,10,18q�6*      AutoGenerateColumns$ False��6?    �� IsTextSearchEnabled$
 True��6[      
IsReadOnly$
 True��6v      RowDetailsVisibilityMode$ 	Collapsed=�6�   $��4��6�   $��12��6�   	   Columns	 5       0  *System.Windows.Controls.DataGridTextColumn  5!      ,  &System.Windows.Controls.DataGridColumn
   Header$
 Title��6%      Width5  /System.Windows.Controls.DataGridLengthConverter$	 180 65   1  +System.Windows.Controls.DataGridBoundColumn   Binding 6A   �� *	bookTitle+  5"      $
 Author��6%   $	 150 66    6B   �� *
bookAuthor+  5#      $
 Borrower's Name��6%   $	 150 6?    6K   �� *borrowersName+  5$      $
 Borrow Date��6%   $	 200 6;    6G   �� *
borrowDate+  5%      $
 Book ID��6%   $ 60 67    6B   �� *
bookNumber+5'      5+      5,      