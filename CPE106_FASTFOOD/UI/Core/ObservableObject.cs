using System;
using System.Runtime.CompilerServices;
using System.ComponentModel;

namespace UI.Core
{
    class ObservableObject: INotifyPropertyChanged
    {
        public event PropertyChangedEventHandler PropertyChanged;

        protected void OnPropertyChanged([CallerMemberName] string name= null)
        {
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(name));
        }
    }
}
