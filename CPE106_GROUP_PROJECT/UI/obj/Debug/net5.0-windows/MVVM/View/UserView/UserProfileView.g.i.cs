﻿#pragma checksum "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "AA55B5EEFC415C1001A714FAD3C21DF7242D341D"
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:4.0.30319.42000
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using System.Diagnostics;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Controls.Ribbon;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Effects;
using System.Windows.Media.Imaging;
using System.Windows.Media.Media3D;
using System.Windows.Media.TextFormatting;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Shell;
using UI.MVVM.View;


namespace UI.MVVM.View {
    
    
    /// <summary>
    /// UserProfileView
    /// </summary>
    public partial class UserProfileView : System.Windows.Controls.UserControl, System.Windows.Markup.IComponentConnector {
        
        
        #line 25 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox txtCUsername;
        
        #line default
        #line hidden
        
        
        #line 26 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox txtNUsername;
        
        #line default
        #line hidden
        
        
        #line 27 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Button btnUpdateUsername;
        
        #line default
        #line hidden
        
        
        #line 36 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox txtCPassword;
        
        #line default
        #line hidden
        
        
        #line 37 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox txtNPassword;
        
        #line default
        #line hidden
        
        
        #line 38 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Button btnUpdatePassword;
        
        #line default
        #line hidden
        
        
        #line 47 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Button btnGoBack;
        
        #line default
        #line hidden
        
        private bool _contentLoaded;
        
        /// <summary>
        /// InitializeComponent
        /// </summary>
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "6.0.2.0")]
        public void InitializeComponent() {
            if (_contentLoaded) {
                return;
            }
            _contentLoaded = true;
            System.Uri resourceLocater = new System.Uri("/UI;V1.0.0.0;component/mvvm/view/userview/userprofileview.xaml", System.UriKind.Relative);
            
            #line 1 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
            System.Windows.Application.LoadComponent(this, resourceLocater);
            
            #line default
            #line hidden
        }
        
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "6.0.2.0")]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Never)]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Design", "CA1033:InterfaceMethodsShouldBeCallableByChildTypes")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1800:DoNotCastUnnecessarily")]
        void System.Windows.Markup.IComponentConnector.Connect(int connectionId, object target) {
            switch (connectionId)
            {
            case 1:
            this.txtCUsername = ((System.Windows.Controls.TextBox)(target));
            return;
            case 2:
            this.txtNUsername = ((System.Windows.Controls.TextBox)(target));
            return;
            case 3:
            this.btnUpdateUsername = ((System.Windows.Controls.Button)(target));
            
            #line 27 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
            this.btnUpdateUsername.Click += new System.Windows.RoutedEventHandler(this.btnUpdateUsername_Click);
            
            #line default
            #line hidden
            return;
            case 4:
            this.txtCPassword = ((System.Windows.Controls.TextBox)(target));
            return;
            case 5:
            this.txtNPassword = ((System.Windows.Controls.TextBox)(target));
            return;
            case 6:
            this.btnUpdatePassword = ((System.Windows.Controls.Button)(target));
            
            #line 38 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
            this.btnUpdatePassword.Click += new System.Windows.RoutedEventHandler(this.btnUpdatePassword_Click);
            
            #line default
            #line hidden
            return;
            case 7:
            this.btnGoBack = ((System.Windows.Controls.Button)(target));
            
            #line 47 "..\..\..\..\..\..\MVVM\View\UserView\UserProfileView.xaml"
            this.btnGoBack.Click += new System.Windows.RoutedEventHandler(this.btnGoBack_Click);
            
            #line default
            #line hidden
            return;
            }
            this._contentLoaded = true;
        }
    }
}

