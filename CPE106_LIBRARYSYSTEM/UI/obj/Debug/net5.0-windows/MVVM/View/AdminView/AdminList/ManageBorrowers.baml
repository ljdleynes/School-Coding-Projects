   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null+clr-namespace:UI.MVVM.ViewUI.MVVM.View  5   	   "    UI.MVVM.View.ManageBorrowers   5   	   W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   ,localclr-namespace:UI.MVVM.View     5   	     � Title$1  +Manage Borrowers of Books (Add Information)��5   	   $	��450��6=   $	��645��6J    � WindowStartupLocation$ CenterScreen=�6V    � 
ResizeMode$ NoResize=�6{   .��5	      � ���	#FF517977.+�5
   
   � $��10,10,10,10q�6   
������� � RowDefinitions 5      �� 5      $��1* �6    �� 5      $��1* �6    �� 5      $��1* �6    �� 5      $��1* �6    �� 5      $��1* �6    �� 5      $��1* �6     � ColumnDefinitions 5      �� 5      $��2* �6#   �� 5      $��8* �6#   .+�5      	� -   5         	�Name$
 brwd��5      $��Borrowed��6(   $
��Left=�6;   $��15��6V   $��2��6b   $	��Top=�6o   $��95��6�   $��	40,42,0,0q�6�   $��2��6�   	� 5      -   5        $ rtrnd��5      $��Returned��6)   $
��Left=�6<   $��15��6W   $��3��6c   $	��Top=�6p   $��95��6�   $��2��6�   $��40,0,0,0q�6�   	� 5      -   5        $ unrtrnd��5      $��
Unreturned��6+   $
��Left=�6@   $��15��6[   $��3��6g   $	��Top=�6t   $��95��6�   $��	40,22,0,0q�6�   $��2��6�   �� 5      $��BookID:��6   $
��Wrap=�6(   $��Center=�6<   $
��Left=�6W   $��10,0,0,0q�6r   �� 5      $��Borrower's Name:��6   $
��Wrap=�61   $	��Top=�6E   $
��Left=�6]   $��1��6x   $��	10,25,0,0q�6�   �� 5      $��	Category:��6   $
��Wrap=�6)   $	��Top=�6=   $
��Left=�6U   $��2��6p   $��	17,10,0,0q�6}   �� 5      -   5         ��Name$ BorrowerNameAdd��5   =   $
��Left=�6   $��16��61    �� TextWrapping$
 Wrap=�6W   $��Center=�6k   $��52��6�   $��60,0,0,0q�6�    J� RenderTransformOrigin$ 0.5,0.5&�6�   .��6�   z�5       V� 5!      .~�5"      �� 	 �� ScaleY$	 1Q�6)   �� 5#      �� 5$      T� 5%      5&      .��5'   +   5(      �� 5)      -   5        $ BookTitleAdd��5)   J   $
��Left=�6   $��16��61   $��1��6=   $
 Wrap=�6a   $��Center=�6u   $	��152��6�   $��	101,0,0,0q�6�   $��2��6�   �� 5*      -   5        $	��ADD��5*      $
��Left=�6#   $��31��6>   $��8,49,0,0q�6J   $��4��6\   $	��Top=�6i   $	��104��6�   ���	#FFCCEDD5$��1��6�   $��2��6�   5+      5,      5-      