CREATE TABLE LoginTable (
UserID INT NOT NULL IDENTITY(1,1) PRIMARY KEY,
Firstname VARCHAR(32) NOT NULL,
Lastname VARCHAR(32) NOT NULL,
Username VARCHAR(32) NOT NULL,
Password VARCHAR(32) NOT NULL
);

INSERT INTO LoginTable (Firstname, Lastname, Username, Password) VALUES ('Lianne', 'Leynes', 'ljleynes', 'pass12345');
INSERT INTO LoginTable (Firstname, Lastname, Username, Password) VALUES ('Trisha', 'Wong', 'trishawong', 'pass54321');
INSERT INTO LoginTable (Firstname, Lastname, Username, Password) VALUES ('Vien', 'Santos', 'Vsantos', 'vsantos123');
INSERT INTO LoginTable (Firstname, Lastname, Username, Password) VALUES ('Richelle', 'Tobias', 'richelleT', 'rt123456');
INSERT INTO LoginTable (Firstname, Lastname, Username, Password) VALUES ('Amiel', 'Ordas', 'OrdasAM', 'Ordas2313');
INSERT INTO LoginTable (Firstname, Lastname, Username, Password) VALUES ('Gerson', 'Ortega', 'gortega', 'ortega1234');

alter table LoginTable
add LoginInformation smalldatetime NULL;

select * from LogInTable;

