﻿#pragma checksum "..\..\..\..\..\..\MVVM\View\AdminView\AdminLibraryView.xaml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "5315EA9BC0E240695CAFC711AF3129227915A922"
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
    /// AdminLibraryView
    /// </summary>
    public partial class AdminLibraryView : System.Windows.Controls.UserControl, System.Windows.Markup.IComponentConnector {
        
        
        #line 18 "..\..\..\..\..\..\MVVM\View\AdminView\AdminLibraryView.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.DataGrid dgUsers;
        
        #line default
        #line hidden
        
        
        #line 30 "..\..\..\..\..\..\MVVM\View\AdminView\AdminLibraryView.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.RadioButton radio_overall;
        
        #line default
        #line hidden
        
        
        #line 32 "..\..\..\..\..\..\MVVM\View\AdminView\AdminLibraryView.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.RadioButton radio_month;
        
        #line default
        #line hidden
        
        private bool _contentLoaded;
        
        /// <summary>
        /// InitializeComponent
        /// </summary>
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "5.0.14.0")]
        public void InitializeComponent() {
            if (_contentLoaded) {
                return;
            }
            _contentLoaded = true;
            System.Uri resourceLocater = new System.Uri("/UI;component/mvvm/view/adminview/adminlibraryview.xaml", System.UriKind.Relative);
            
            #line 1 "..\..\..\..\..\..\MVVM\View\AdminView\AdminLibraryView.xaml"
            System.Windows.Application.LoadComponent(this, resourceLocater);
            
            #line default
            #line hidden
        }
        
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "5.0.14.0")]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Never)]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Design", "CA1033:InterfaceMethodsShouldBeCallableByChildTypes")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1800:DoNotCastUnnecessarily")]
        void System.Windows.Markup.IComponentConnector.Connect(int connectionId, object target) {
            switch (connectionId)
            {
            case 1:
            this.dgUsers = ((System.Windows.Controls.DataGrid)(target));
            return;
            case 2:
            
            #line 28 "..\..\..\..\..\..\MVVM\View\AdminView\AdminLibraryView.xaml"
            ((System.Windows.Controls.Button)(target)).Click += new System.Windows.RoutedEventHandler(this.ReturnedBooks);
            
            #line default
            #line hidden
            return;
            case 3:
            
            #line 29 "..\..\..\..\..\..\MVVM\View\AdminView\AdminLibraryView.xaml"
            ((System.Windows.Controls.Button)(target)).Click += new System.Windows.RoutedEventHandler(this.UnreturnedBooks);
            
            #line default
            #line hidden
            return;
            case 4:
            this.radio_overall = ((System.Windows.Controls.RadioButton)(target));
            return;
            case 5:
            this.radio_month = ((System.Windows.Controls.RadioButton)(target));
            return;
            }
            this._contentLoaded = true;
        }
    }
}

