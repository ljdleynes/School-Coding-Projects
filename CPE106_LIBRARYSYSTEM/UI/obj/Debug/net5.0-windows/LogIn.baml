   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=nullclr-namespace:UIUI  5   	       UI.LogIn   5   	   W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   "localclr-namespace:UI     5   	   LmaterialDesign1http://materialdesigninxaml.net/winfx/xaml/themes     5   	     � Title$  LoginWindow��5	   	   $	��800��6   $	��920��6*    � WindowStartupLocation$ CenterScreen=�66    � 
ResizeMode$ NoResize=�6[   ��5
      �� 5   
    �� ImageSource$ /Images/login.png��6   .��5      �� 
���   � �� CornerRadius$ 20��6    $��20,20,450,20q�62    J� RenderTransformOrigin$ 0.5,0.5&�6H   z�5   
   V� 5      .~�5      �� �� 5       �� AngleY$ -0.186Q�6    �� 5      T� 5       T� Y$ -0.747Q�6%   5      ._�5   
   �� $��20q�6   .+�5      �� $��20 100q�6   .+�5      �� $��Library Staff Login��6   $��20q�67   
������� �� TextAlignment$ Center=�6V   $��25(�6m   $��JPCS Engineering Font)�6{   �� 5      6   �� 5      	 �� Orientation$	 
Horizontal=�6   $��10q�66   .+�5      �� $��
Username: ��6    $
��10 0q�62   
�������$
 Left=�6R   $��25(�6g   $��Times New Roman)�6u   
 J� Opacity$

 0.8 Q�6�   �� 5      -   5        $��txtUsername��5      $	��5 0q�61   
���   �$	��250��6R   $��20(�6^   6l   5      �� 5      $	 
Horizontal=�6   $��10q�66   .+�5      �� $��
Password: ��6    $
��10 0q�62   
�������$
 Left=�6R   $��25(�6g   $��Times New Roman)�6u   $	
 0.8Q�6�   G� 5       -   5        $��txtPassword��5    "   $
��10 0q�65   
���   �$	��250��6V   $��20(�6b   6p   5!      �� 5"      $��Center=�6   $��10q�6:   .+�5#      �� -   5         ��Name$ 	btnSubmit��5#   �   $	��100��6   $��40��6)   $��2q�65   ���#D94448���#D94448
�������$��Login��6�   5$      5%      �� 5&      $	 
Horizontal=�6   $��
10 100 0 0q�62   $��Center=�6F   .+�5'      �� $��No Account Yet?��6   $
��10 0q�63   
�������$	��177��6T   $��20(�6`   $ Center=�6n   $��JPCS Engineering Font)�6�   $��20��6�   5(      �� 5)      $	 
Horizontal=�6   $��10 5 0 0q�62   $��Center=�6D   .+�5*      �� -   5        $ 	btnSignup��5*      $��84��6   $��35��6%   $��0q�61   
������� � ToolTip$ Login��6o   $��Sign Up��6�   $��Times New Roman)�6�   ��6E   Z� 6�   5+      5,      5/      50      