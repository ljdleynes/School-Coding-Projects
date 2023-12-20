using System;

using UI.Core;

namespace UI.MVVM.View
{
    class AdminViewModel : ObservableObject
    {
        public RelayCommand ProfileViewCommand { get; set; }
        public RelayCommand LibraryViewCommand { get; set; }

        public RelayCommand ListViewCommand { get; set; }

        public RelayCommand LogsViewCommand { get; set; }
        public AdminLibraryView LV { get; set; }
        public AdminProfileView PV { get; set; }
        public AdminLogs Logs { get; set; }
        public AdminList List { get; set; }



        private object _presentView;
        public object PresentViewZ
        {
            get { return _presentView; }
            set
            {
                _presentView = value;
                OnPropertyChanged();
            }
        }
        public AdminViewModel()
        {
            PV = new AdminProfileView();
            LV = new AdminLibraryView();
            Logs = new AdminLogs();
            List = new AdminList();
            
            PresentViewZ = PV;

            ProfileViewCommand = new RelayCommand(o =>
            {
                PresentViewZ = PV;
            });
            LibraryViewCommand = new RelayCommand(o =>
            {
                PresentViewZ = LV;
            });
            ListViewCommand = new RelayCommand(o =>
            {
                PresentViewZ = List;
            });
            LogsViewCommand = new RelayCommand(o =>
            {
                PresentViewZ = Logs;
            });
        }
    }
}
