   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=nullclr-namespace:UIUI  5   	   %    UI.MVVM.View.BorrowedBooksMonth   5   	   W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   "localclr-namespace:UI     5   	     � Title$+  %List of Borrowed Books (Past 30 Days)��5   	   $	��600��67   $	��800��6D    � 
ResizeMode$ NoResize=�6P    � WindowStartupLocation$ CenterScreen=�6f   ���	#FF4F7978
���   �.��5	      �  � ColumnDefinitions 5
   
   �� 5      $
��459* �6   �� 5      $
��199* �6   �� 5      $
��142* �6   .+�5   
   &   System.Windows.Controls.DataGrid  -   5          Name$ bookInfoGrid��5         AutoGenerateColumns$ False��6)   $��0,0,28,0q�6E      CanUserAddRows$ False��6W      CanUserDeleteRows$ False��6n      CanUserReorderColumns$ False��6�   	   
IsReadOnly$
	 True��6�   $��Visible=�6�   $��2��6�   
   RowDetailsVisibilityMode$
 VisibleWhenSelected=�6     Columns 5      0  *System.Windows.Controls.DataGridTextColumn  5      ,  &System.Windows.Controls.DataGridColumn   Width5  /System.Windows.Controls.DataGridLengthConverter$	 190 6%      Header$ Title��61      
IsReadOnly$
 True��6^      CanUserReorder$ False��6p   1  +System.Windows.Controls.DataGridBoundColumn   Binding 6@   �� *	bookTitle+6p     5      $	 120 6%   $ Author��61    6A   �� *
bookAuthor+  5      $	 120 6%   $ Date Borrowed��61    6H   �� *
borrowDate+  5      $ 140.5 6%   $ Borrower's Name��63    6L   �� *borrowersName+  5      $ 52 6%   $ Book ID��60    6A   �� *
bookNumber+5      �� 5   
   -   5        $��Close��5      $��2��65   $
��Left=�6E   $��
30,540,0,0q�6`   $	��Top=�6t   $��68��6�    J� RenderTransformOrigin$ 
0.544,0.47&�6�   �� 5   
   $��1��6   $
��Left=�6    $	��228��6;   $��	187,0,0,0q�6H   $��Center=�6[   $	��141��6v   $��/Images/Screenshot.jpg��6�   $��2��6�   �� 5    
   -   5        $��Refresh��5       $��2��6#   $
��Left=�63   $��
30,493,0,0q�6N   $	��Top=�6b   $��68��6z   $ 
0.544,0.47&�6�   6�   5"      5#      