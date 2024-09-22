#pragma once
#include"BLL.h"

void WriteUi()
{
	cout << "0. Find by name" << endl;
	cout << "1. Find by genre" << endl;
	cout << "2. Find by director" << endl;
	cout << "3. Best rating film in genre" << endl;
	cout << "4. Show all films" << endl;
	cout << "5. Write films" << endl;
	cout << "6. Exit" << endl;
	cout << "Enter command(0-6): ";
}

void Start(string film)
{
	int command = 0, amount = 0;
	FilmData filmdata;
	string name, genre;
	vector<FilmData> filmsnames;
	WriteUi();
	cin >> command;
	switch (command)
	{
		case 0:
			cout << "Enter name: ";
			cin >> name;
			filmdata = FindName(GetFilms(film), name);
			cout << "Name: " << filmdata.FilmName << endl;
			cout << "Director: " << filmdata.Director << endl;
			cout << "Genre: " << filmdata.FilmGenre << endl;
			cout << "Rating: " << filmdata.Rating << endl;
			cout << "Cost: " << filmdata.DiskCost << endl;
			break;
		case 1:
			cout << "Enter genre: ";
			cin >> genre;
			filmdata = FindGenre(GetFilms(film), genre);
			cout << "Name: " << filmdata.FilmName << endl;
			cout << "Director: " << filmdata.Director << endl;
			cout << "Genre: " << filmdata.FilmGenre << endl;
			cout << "Rating: " << filmdata.Rating << endl;
			cout << "Cost: " << filmdata.DiskCost << endl;
			break;
		case 2:
			cout << "Enter director: ";
			cin >> name;
			filmdata = FindDirector(GetFilms(film), name);
			cout << "Name: " << filmdata.FilmName << endl;
			cout << "Director: " << filmdata.Director << endl;
			cout << "Genre: " << filmdata.FilmGenre << endl;
			cout << "Rating: " << filmdata.Rating << endl;
			cout << "Cost: " << filmdata.DiskCost << endl;
			break;
		case 3:
			cout << "Enter genre: ";
			cin >> genre;
			filmdata = FindGenre(GetFilms(film), genre);
			cout << "Name: " << filmdata.FilmName << endl;
			cout << "Director: " << filmdata.Director << endl;
			cout << "Genre: " << filmdata.FilmGenre << endl;
			cout << "Rating: " << filmdata.Rating << endl;
			cout << "Cost: " << filmdata.DiskCost << endl;
			break;
		case 4:
			ShowFilms(GetFilms(film));
			break;
		case 5:
			cout << "Enter films amount: "; cin >> amount;
			for (size_t i = 0; i < amount; i++)
			{
				filmsnames.push_back(EnterFilm());
			}
			if (filmsnames.size() > 0)
			{
				WriteFilm(filmsnames, film);
			}
			break;
		case 6:
			break;
		default:
			break;
			
	}
}