   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null+clr-namespace:UI.MVVM.ViewUI.MVVM.View  5   	       UI.MVVM.View.GenreBooks   5   	   W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   ,localclr-namespace:UI.MVVM.View     5   	     � Title$  List of Books Per Genre��5   	   $	��450��6)   $	��800��66    � 
ResizeMode$ NoResize=�6B    � WindowStartupLocation$ CenterScreen=�6X   .��5	      �  � ColumnDefinitions 5
   
   �� 5      $	��40* �6   �� 5      $��7* �6   �� 5      $
��113* �6   .+�5   
   �� $��3��6   .+�5      o� $	��Top=�6   .@�5      m� -   5         m�Name$ 	sortGenre��5      $��_Sort by Major Genre��6.   .@�5      m� -   5        $ menuAAA��5      $��_Action and Adventure��60   6O   m� 5      -   5        $ menuC��5      $��	_Classics��6.   6A   m� 5      -   5        $ menuDAM��5      $��_Detective and Mysteries��60   6R   m� 5      -   5        $ menuF��5      $��_Fantasy��6.   6@   m� 5      -   5        $ menuH��5      $��_Horror��6.   6?   �� 5      m� 5      -   5        $��_Exit��5   2   5      5      5      &   System.Windows.Controls.DataGrid  5    
   -   5        $��GenreBooksList��5          AutoGenerateColumns$ False��6)    �� IsTextSearchEnabled$
 True��6E      
IsReadOnly$
 True��6`   $��0,40,0,0q�6r   $��3��6�      RowDetailsVisibilityMode$ 	Collapsed=�6�   	   Columns	 5!      0  *System.Windows.Controls.DataGridTextColumn  5"      ,  &System.Windows.Controls.DataGridColumn
   Width5  /System.Windows.Controls.DataGridLengthConverter$	
 200 6%      Header$ Title��61   1  +System.Windows.Controls.DataGridBoundColumn   Binding 6@   �� *
bookName+  5#      $	
 120 6%   $ Author��61    6A   �� *author+  5$      $	
 150 6%   $ Date Published��61    6I   �� *publicationDate+  5%      $	
 168 6%   $ Book Id��61    6B   �� *BookId+  5&      $	
 168 6%   $ Genre��61    6@   �� *	bookGenre+5*      �� 5+   
   -	   5         ��Name$ selectedGenreLabel��5+      $�� ��6,   $
��Left=�67   $��1,-4,0,0q�6R   $	��Top=�6d   ���	#FF4F7978$��25��6�   $	��496��6�   $��1��6�   $��2��6�   5,      5-      