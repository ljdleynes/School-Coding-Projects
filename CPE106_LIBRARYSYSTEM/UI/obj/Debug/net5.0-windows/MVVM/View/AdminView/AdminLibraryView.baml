   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null+clr-namespace:UI.MVVM.ViewUI.MVVM.View  5      #    UI.MVVM.View.AdminLibraryView   5      W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5      R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5      Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5      @d2http://schemas.microsoft.com/expression/blend/2008     5      ,localclr-namespace:UI.MVVM.View     5      ���#FFFDD0.��5      � $��0q�6   ���	#FFF0F0F0  � ColumnDefinitions  5   
   �� 5      $	��200 �6   �� 5      $��* �6   .+�5   
   &   System.Windows.Controls.DataGrid  -   5        $��dgUsers��5       �� IsTextSearchEnabled$
 True��6"      
IsReadOnly$
 True��6=      RowDetailsVisibilityMode$ 	Collapsed=�6O      AutoGenerateColumns$ False��6t   $��Stretch=�6�   $
��Left=�6�   $
��Left=�6�   $��2��6�   $	��770��6  $��	0,109,0,0q�6     Columns 5      0  *System.Windows.Controls.DataGridTextColumn  5      ,  &System.Windows.Controls.DataGridColumn   Header$ Title��6%      Width5  /System.Windows.Controls.DataGridLengthConverter$	 180 65   1  +System.Windows.Controls.DataGridBoundColumn   Binding 6A   �� *	bookTitle+  5      $ Author��6%   $	 150 66    6B   �� *
bookAuthor+  5      $ Borrower's Name��6%   $	 150 6?    6K   �� *borrowersName+  5      $ Return/Borrow Date��6%   $	 200 6B    6N   �� *
returnDate+  5      $ Book ID��6%   $ 60 67    6B   �� *
bookNumber+5      �� 5   
   -   5        $��View Returned Books��5      $
��Left=�6/   $��	38,27,0,0q�6J   $	��Top=�6]   $��20��6u   $	��118��6�   6�   �� 5   
   -   5        $��View Unreturned Books��5      $
��Left=�61   $��	38,69,0,0q�6L   $	��Top=�6_   6w   	� 5   
   -   5        	 	�Name$	 radio_overall��5      $��Overall��6-   $��1��6?   $
��Left=�6O   $��	33,33,0,0q�6j   $	��Top=�6}   	� 5    
   -   5        $	 radio_month��5       $��Last 30 Days��6+   $��1��6B   $
��Left=�6R   $��	33,67,0,0q�6m   $	��Top=�6�   5"      5#      