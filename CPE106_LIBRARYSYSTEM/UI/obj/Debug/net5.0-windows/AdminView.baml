   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=nullclr-namespace:UIUI  5   	   +clr-namespace:UI.MVVM.ViewUI.MVVM.View  5   	       UI.AdminView   5   	   W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   "localclr-namespace:UI     5   	   0	viewModelclr-namespace:UI.MVVM.View     5   	   $	��800��5	   	   $	��920��6     � 
ResizeMode$  NoResize=�5
   	   
������  � Title$ Group 6 Library��5   	    � WindowStyle$
 None=�5   	    � AllowsTransparency$
 True��5   	    � DataContext 5      !  UI.MVVM.View.AdminViewModel  5   
   .��5      � .+�5   
   �� ���#CCCCFF �� CornerRadius$ 10��5      ._�5      �  � ColumnDefinitions 5      �� 5      $	��150 �6'   �� 5       � RowDefinitions 5      �� 5      $��25 �6$   �� 5      $	��100 �6$   �� 5      .+�5       �� -   5        $��2��5       
������._�5!      � $��Stretch=�6   .+�5"      �� 
���  ��$��SemiBold"�5$      .��5&      Group 6 Library6+   �� 5'      $��Right=�6%    �� Orientation$ 
Horizontal=�5(   !   .+�5)      �� -   5        $��20��5)   %   $��20��5*   !   $
��🗕��5+   !   
������ $��0q�5-   !   
���  ��5/   !   �� 52      -   5        $��20��52   %   $��20��53   !   $	��❌��54   !   
������ $��0q�56   !   
���  ��58   !   59      5;      5=      �� 5?      $��1��6   .+�5@      �� $��90��6   $��/Images/ManBook.png��6)   6H   5A      �� 5C      $��2��6   .+�5D      	� $��Profile��5E      $��50��5F      $��17(�5G         Profile#��[  5H      	 d� 	IsChecked$
	 TrueY�5I      $��Showcard Gothic)�5K      ��5J      �� *ProfileViewCommand+5N      	� 5P      $��Library��5Q      $��50��5R      $��17(�5S        Library#��[ 5T      $��Showcard Gothic)�5V      ��5U      �� *LibraryViewCommand+5V      	� 5X      $
��List��5Y      $��50��5Z      $��17(�5[        ListLogs#��[ 5]      $��Showcard Gothic)�5^      ��5\      �� *ListViewCommand+5^      	� 5`      $
��Logs��5a      $��50��5b      $��17(�5c      #��[ 5e      $��Showcard Gothic)�5f      ��5d      �� *LogsViewCommand+5f      �� 5i      -   5        $��	0,430,0,0q�5i      $��50��61   $
��Left=�6=   .��5j      �� $ 
Horizontal=�6%   .+�5k      �� $��30��6$   $N��Hhttps://cdn.icon-icons.com/icons2/1509/PNG/512/systemshutdown_104277.png��60   �� 5l      $��20(�6$   $��Logout��63   $��Showcard Gothic)�6D   5m      5n      5o      �� 5p      $ 
Horizontal=�6   $��1��67   $��1��6G   .+�5r      �� $	��100��5s      $��Images/KidReading.png��5t      �� 5w      $��Stretch=�6   $��Stretch=�5x      $	��100��5y      $��	510,0,0,0q�5z      $��1��5{      $B��<http://clipart-library.com/new_gallery/library-clipart-6.gif��5|      5      �� 5�      $��1��6!   $��2��5�      ��5�      �� *PresentViewZ+5�      5�      5�      5�      