   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=nullclr-namespace:UIUI  5          UI.MVVM.View.AdminLogs   5      W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5      R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5      Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5      @d2http://schemas.microsoft.com/expression/blend/2008     5      "localclr-namespace:UI     5      ���#228B22.��5      �   � ColumnDefinitions  5   
   �� 5      $	��600 �6   �� 5      .+�5   
   �� $��1��6   .+�5      �� 
��� ���$��20(�6)   $��40,0,0,0q�67   $��Showcard Gothic)�6I   $��Months��6h   �� 5       �� Orientation$ 
Horizontal=�6   .+�5$      ��  �� CornerRadius$ 10��6   ���#353935._�5'      � $	��129��6   .+�5(      �� $��1��6$   $��	0,0,-45,0q�68   �� 5)      -   5        $	��Box��50   &   $��	1,1,-50,1q�5)   "   $��Search Name��5*   &   $��0q�5+   &   
������ $��Center=�5-   &   $��5q�5.   &   ���#CFCFCF52   &   56      57      �� 58      -   5         ��Name$	 Btn��58      $��0q�6&   
������ $��20��6e   $��28��6q   .��59      �� $��18��6   $��18��6(   $��/Images/searchglass.png��63    J� RenderTransformOrigin$ 0.881,0.446&�6T   5:      5;      	� 5>      -   5         	�Name$ January��5>       	� 	GroupName$ Months��6E   $��20(�6X   $��Center=�6f   .��5?      �� -   5        $��	JanuaryLB��5?      
�������$��Showcard Gothic)�6=   .��6Z   	January6c   5@      	� 5A      -   5        $ February��5A      $ Months��6G   $��20(�6Z   $��Center=�6h   .��5B      �� -   5        $��
FebruaryLB��5B      
�������$��Showcard Gothic)�6?   .��6\   
February6f   5C      	� 5D      -   5        $ March��5D      $ Months��6A   $��20(�6T   $��Center=�6b   .��5E      �� -   5        $��MarchLB��5E      
�������$��Showcard Gothic)�6;   .��6X   March6_   5F      	� 5G      -	   5        $ April��5G      $ Months��6A   $��20(�6T   $��Center=�6b   .��5H      �� -
   5        $��AprilLB��5H      
�������$��Showcard Gothic)�6;   .��6X   April6_   5I      	� 5J      -   5        $	 May��5J      $ Months��6=   $��20(�6P   $��Center=�6^   .��5K      �� -   5        $��MayLB��5K      
�������$��Showcard Gothic)�69   .��6V   May6[   5L      	� 5M      -   5        $
 June��5M      $ Months��6?   $��20(�6R   $��Center=�6`   .��5N      �� -   5        $��JuneLB��5N      
�������$��Showcard Gothic)�6;   .��6X   June6^   5O      	� 5P      -   5        $
 July��5P      $ Months��6?   $��20(�6R   $��Center=�6`   .��5Q      �� -   5        $��JulyLB��5Q      
�������$��Showcard Gothic)�6:   .��6W   July6]   5R      	� 5S      -   5        $ August��5S      $ Months��6C   $��20(�6V   $��Center=�6d   .��5T      �� -   5        $��AugustLB��5T      
�������$��Showcard Gothic)�6<   .��6Y   August6a   5U      	� 5V      -   5        $ 	September��5V      $ Months��6I   $��20(�6\   $��Center=�6j   .��5W      �� -   5        $��SeptemberLB��5W      
�������$��Showcard Gothic)�6?   .��6\   	September6g   5X      	� 5Y      -   5        $ October��5Y      $ Months��6E   $��20(�6X   $��Center=�6f   .��5Z      �� -   5        $��	OctoberLB��5Z      
�������$��Showcard Gothic)�6>   .��6[   	October6d   5[      	� 5\      -   5        $ November��5\      $ Months��6G   $��20(�6Z   $��Center=�6h   .��5]      �� -   5        $��
NovemberLB��5]      
�������$��Showcard Gothic)�6>   .��6[   
November6e   5^      	� 5_      -   5        $ December��5_      $ Months��6G   $��20(�6Z   $��Center=�6h   .��5`      �� -   5        $��
DecemberLB��5`      
�������$��Showcard Gothic)�6>   .��6[   
December6e   5a      �� 5c      $��/Images/Books.png��6   $	��100��6/   $��0,60,0,0q�6<   5e      &   System.Windows.Controls.DataGrid  5f   
   -   5        $��LibraryUserLogs��5f         AutoGenerateColumns$ False��6+   ���#FBCEB1$	��600��6\      Columns 5g      0  *System.Windows.Controls.DataGridTextColumn  5h      ,  &System.Windows.Controls.DataGridColumn	   Header$	 	Firstname��6%   
   Width5  /System.Windows.Controls.DataGridLengthConverter$	
 300 6V   1  +System.Windows.Controls.DataGridBoundColumn   Binding 68   �� *	Firstname+6V     5i      $	 LoginInformation��6%   $	
 300 6d    6?   �� *LoginInformation+6d   5k      5l      5m      