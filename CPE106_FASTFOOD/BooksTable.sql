CREATE TABLE Books (
		--Insert Book Variables Here:
		BookId int IDENTITY(1,1) PRIMARY KEY,
		bookName VARCHAR(32),
		bookGenre VARCHAR(32),
		author VARCHAR(200), 
		publicationDate date
);

DBCC CHECKIDENT(Books, RESEED, 0)

CREATE TABLE Borrowers (
		BorrowersId int IDENTITY(1,1) PRIMARY KEY,
		bookTitle VARCHAR(200), 
		bookAuthor VARCHAR(200),
		borrowDate date,
		borrowersName VARCHAR(200) 
);

CREATE TABLE ReturnBook (
		BookId int IDENTITY(1,1) PRIMARY KEY,
		bookTitle VARCHAR(200), 
		bookAuthor VARCHAR(200), 
		returnDate date, 
		borrowersName VARCHAR(200) 
);

CREATE TABLE UnreturnedBook (
		BookId int IDENTITY(1,1) PRIMARY KEY,
		bookTitle VARCHAR(200), 
		bookAuthor VARCHAR(200),
		returnDate date, 
		borrowersName VARCHAR(200) 
);

alter table Borrowers
add bookNumber int NOT NULL DEFAULT (0);

alter table ReturnBook
add bookNumber int NOT NULL DEFAULT (0);

alter table UnreturnedBook
add bookNumber int NOT NULL DEFAULT (0);

alter table Borrowers
add foreign key (bookNumber) references Books(BookId);

alter table ReturnBook
add foreign key (bookNumber) references Books(BookId);

alter table UnreturnedBook
add foreign key (bookNumber) references Books(BookId);

-- Add books to Library --

INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('Life of Pi', 'Action and Adventure', 'Yann Martel', '2001-09-11');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('The Letter Keeper', 'Action and Adventure', 'Charles Martin', '2021-06-08');


INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('Gone Girl', 'Detective and Mysteries', 'Gillian Flynn', '2012-05-24');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('The Sweetness At the Bottom of the Pie', 'Detective and Mysteries', 'Alan Bradley', '2009-01-22');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('The Alienist', 'Detective and Mysteries', 'Caleb Carr', '1994-03-15');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('In the Woods', 'Detective and Mysteries', 'Tana French', '2007-01-30');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('Murder on the Orient Express', 'Detective and Mysteries', 'Agatha Christie', '1934-01-01');

INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('The Fifth Season', 'Fantasy', 'N.K. Jemisin', '2015-08-04');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('A Game of Thrones', 'Fantasy', 'George R.R. Martin', '1996-08-01');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('The Name of the Wind', 'Fantasy', 'Patrick Rothfuss', '2007-03-27');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('The Way of Kings', 'Fantasy', 'Brandon Sanderson', '2010-08-31');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('Six of Crows', 'Fantasy', 'Leigh Bardugo', '2015-09-29');

INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('Dracula', 'Horror', 'Bram Stroker', '1897-05-26');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('It', 'Horror', 'Stephen King', '1986-09-15');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('The Shining', 'Horror', 'Stephen King', '1977-01-28');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('The Hunger', 'Horror', 'Alma Katsu', '2018-03-06');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('Bird Box', 'Horror', 'Josh Malerman', '2014-03-27');


INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('Dream Town', 'Action and Adventure', 'David Baldacci', '2022-04-19');
INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('Moby-Dick', 'Action and Adventure', 'Herman Melville', '1851-10-18');

INSERT INTO Books (bookName, bookGenre, author, publicationDate) VALUES ('NOS4A2', 'Horror', 'Joe Hill', '2013-04-30');

