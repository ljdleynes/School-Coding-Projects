   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null+clr-namespace:UI.MVVM.ViewUI.MVVM.View  5   	       UI.MVVM.View.Manage   5   	   W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   ,localclr-namespace:UI.MVVM.View     5   	     � Title$#  Manage Borrowers of All Books��5   	   $	��450��6/   $	��800��6<    � WindowStartupLocation$ CenterScreen=�6H    � 
ResizeMode$ NoResize=�6m   .��5	      � $��	0,0,0,-16q�6   ���	#FF517977 � ColumnDefinitions 5
   
   �� 5      $
��495* �6   �� 5      $	��45* �6   �� 5      $	��33* �6   �� 5      $
��208* �6   �� 5      $	��19* �6    � RowDefinitions 5   
   �� 5      $
��303* �6   �� 5      $	��89* �6   �� 5      $	��13* �6   .+�5   
   �� $��22,19,14,45q�6    J� RenderTransformOrigin$ 0.5,0.5&�6*   $��2��6J   $��5��6[   z�5      V� 5      .~�5      �� �� 5      �� 5       �� Angle$ 0.053Q�6&   T� 5      5      .@�5      �� $��Borrowed��6   ��5       �� 5!       �� EndPoint$	 0,1&�6*   .��5"      �  � Color$ 	#FFF0F0F0��6'   � 5#      $ 	#FFCCEDD5��6'   	 � Offset$	 1Q�69   5$      .��5&      � ���	#FFE5E5E5$	��361��6.    5'      �� 5(      $
��703* �6+   �� 5)      $	��55* �6+   .+�5+      &   System.Windows.Controls.DataGrid  -   5        
  Name$
 BorrowedTable��5+      $��1,1,2,20q�66      AutoGenerateColumns$ False��6u    �� IsTextSearchEnabled$
 True��6�      
IsReadOnly$
 True��6�      RowDetailsVisibilityMode$ 	Collapsed=�6�   $��2��6�      Columns 5,      0  *System.Windows.Controls.DataGridTextColumn  5-      ,  &System.Windows.Controls.DataGridColumn   Header$ Title��61      Width5  /System.Windows.Controls.DataGridLengthConverter$	 180 6A   1  +System.Windows.Controls.DataGridBoundColumn   Binding 6M   �� *	bookTitle+  5.      $ Author��61   $	 150 6B    6N   �� *
bookAuthor+  5/      $ Borrower's Name��61   $	 150 6K    6W   �� *borrowersName+  50      $ Borrow Date��61   $	 200 6G    6S   �� *
borrowDate+  51      $ Book ID��61   $ 60 6C    6N   �� *
bookNumber+53      54      55      �� 56      $��Returned��6   ��57      �� 58      $	 0,1&�6*   .��59      � $ 	#FFF0F0F0��6'   � 5:      $ 	#FFCCEDD5��6'   $	 1Q�69   5;      .��5=      � ���	#FFE5E5E5.+�5>        -   5        $
 ReturnedTable��5>      $ False��6c   $
 True��6   $
 True��6�   $ 	Collapsed=�6�   $��2��6�    5?        5@      $ Title��61   $	 180 6A    6M   �� *	bookTitle+  5A      $ Author��61   $	 150 6B    6N   �� *
bookAuthor+  5B      $ Borrower's Name��61   $	 150 6K    6W   �� *borrowersName+  5C      $ Borrow Date��61   $	 200 6G    6S   �� *
returnDate+  5D      $ Book ID��61   $ 60 6C    6N   �� *
bookNumber+5F      5G      5H      �� 5I      $��
Unreturned��6   ��5J      �� 5K      $	 0,1&�6*   .��5L      � $ 	#FFF0F0F0��6'   � 5M      $ 	#FFCCEDD5��6'   $	 1Q�69   5N      .��5P      � ���	#FFE5E5E5.+�5Q        -   5        $
 UnreturnedTable��5Q      $��1,1,2,20q�68   $ False��6w   $
 True��6�   $
 True��6�   $ 	Collapsed=�6�   $��2��6�    5R        5S      $ Title��61   $	 180 6A    6M   �� *	bookTitle+  5T      $ Author��61   $	 150 6B    6N   �� *
bookAuthor+  5U      $ Borrower's Name��61   $	 150 6K    6W   �� *borrowersName+  5V      $ Borrow Date��61   $	 195 6G    6S   �� *
returnDate+  5W      $ Book ID��61   $ 60 6C    6N   �� *
bookNumber+5Y      5Z      5[      5\      �� 5]   
   -   5        $��ADD INFORMATION��5]      $��286,57,26,10q�6+   $��1��6V   ���	#FFCCEDD5$��2��6z   �� 5^   
   -   5        $��Refresh��5^      $��87,62,10,10q�6#   ���	#FFCCEDD5$��3��6e   $��1��6u   5_      5`      