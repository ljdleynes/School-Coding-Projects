   M S B A M L   `   `   `  ����=  9UI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=nullclr-namespace:UIUI  5   	       UI.SignUpWindow   5   	   W SPresentationCore, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=5.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=5.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   "localclr-namespace:UI     5   	   LmaterialDesign1http://materialdesigninxaml.net/winfx/xaml/themes     5   	     � Title$  SignUpWindow��5	   	   $	��800��6   $	��920��6+    � WindowStartupLocation$ CenterScreen=�67    � 
ResizeMode$ NoResize=�6\   ��5      �� 5   
    �� ImageSource$ /Images/signup.png��6   .��5      �� 
���   � �� CornerRadius$ 20��6    $��20,20,400,20q�62    J� RenderTransformOrigin$ 0.5,0.5&�6H   z�5   
   V� 5      .~�5      �� �� 5       �� AngleY$ -0.186Q�6    �� 5      T� 5       T� Y$ -0.747Q�6%   5      ._�5   
   �� $��Center=�6   $��	0,40,0,20q�62   $	��478��6E   .+�5      �� $(��"Create Your Library Staff Account ��6   $��20q�6B   
������� �� TextAlignment$ Center=�6a   $��25(�6x   $��JPCS Engineering Font)�6�   �� 5      $$��to Continue to Library System ��6   $
��20 1q�6>   
�������$
 Left=�6_   $��20(�6t   $��JPCS Engineering Font)�6�   �� 5      $��20 10q�6   6)   �� 5      	 �� Orientation$	 
Horizontal=�6   $
��10 0q�63   $	��450��6A   .+�5      �� 
�������$	��200��6*   $��15(�66   $��	Firstname��6D   
 J� Opacity$	
 0.8Q�6X   $
��Left=�6f   $	��5 0q�6�   �� 5      
�������$	��250��6*   $��15(�66   $��Lastname��6D   $	
 0.8Q�6W   $
��35 0q�6e   5      �� 5      $	 
Horizontal=�6   $��	10 0 30 5q�62   $	��450��6E   .+�5       �� -   5         ��Name$ txtFirstname��5       $
��10 0q�60   $��2q�6>   
�������
���   �$	��220��6x   $��20(�6�   �� 5!      -   5        $ txtLastname��5!      $
��10 0q�6/   $��2q�6>   
�������
���   �$	��190��6x   $��20(�6�   5"      �� 5#      $	 
Horizontal=�6   $
��10 0q�63   $	��450��6A   .+�5$      �� 
�������$	��200��6*   $��15(�66   $��Enter your Username/Email��6D   $	
 0.8Q�6h   $
��Left=�6v   $	��5 0q�6�   5%      �� 5&      $	 
Horizontal=�6   $��	10 0 30 5q�62   $	��450��6E   .+�5'      �� -   5        $ txtNewUsername��5'      $
��10 0q�62   $��2q�6@   
�������
���   �$	��430��6z   $��20(�6�   5(      �� 5)      .+�5*      �� $
��15 0q�6   
�������$	��450��68   $��12(�6D   $-��'You can use letters,numbers and periods��6R   $	
 0.8Q�6�   5+      �� 5,      $	 
Horizontal=�6   $
��10 0q�63   $	��450��6A   .+�5-      �� 
�������$	��200��6*   $��15(�66   $��Password��6D   $	
 0.8Q�6W   $
��Left=�6e   $	��5 0q�6�   �� 5.      
�������$	��250��6*   $��15(�66   $��Office Code��6D   $	
 0.8Q�6Z   $
��35 0q�6h   5/      �� 50      $	 
Horizontal=�6   $��	10 0 30 5q�62   $	��450��6E   .+�51      G� -   5         G�Name$ txtNewPassword��51      $
��10 0q�66   $��2q�6D   
�������
���   �$	��220��6~   $��20(�6�   G� 52      -   5        $ txtOfficeCode��52       G� 	MaxLength$ 4��65   $
��10 0q�6C   $��2q�6Q   
�������
���   �$	��190��6�   $��20(�6�   53      �� 54      .+�55      �� $
��15 0q�6   
�������$	��450��68   $��12(�6D   $��Use 8 or more characters ��6R   $	
 0.8Q�6v   56      �� 58      $	 
Horizontal=�6   $��10 30q�62   $	��450��6A   .+�59      �� -   5         ��Name$ btnBackLogin��59   �   $
��Left=�6   $	��115��6;   $��35��6G   $��0q�6S   
�����_� � ToolTip$ Login��6�   $��Sign in instead��6�   $��Times New Roman)�6�   ��6g   Z� 6�   �� 5:      -   5        $ btnCreateAccount��5:   �   $��190 0q�6   $	��141��6(   $��40��64   $��2q�6@   ���#D94448���#D94448
�������$ Login��6�   $��Create Account��6�   5;      5<      5>      5@      5A      