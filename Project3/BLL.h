#pragma once
#include"DAL.h"

//find film by name
FilmData FindName(vector<FilmData> film, string word)
{
	FilmData abc;
	for (size_t i = 0; i < film.size(); i++)
	{
		if (film[i].FilmName == word)
		{
			return film[i];
		}
	}
	cout << "Not found!" << endl;
	return abc;
}

//find film by genre
FilmData FindGenre(vector<FilmData> film, string word)
{
	FilmData abc;
	for (size_t i = 0; i < film.size(); i++)
	{
		if (film[i].FilmGenre == word)
		{
			return film[i];
		}
	}
	cout << "Not found!" << endl;
	return abc;
}

//find film by director
FilmData FindDirector(vector<FilmData> film, string word)
{
	FilmData abc;
	for (size_t i = 0; i < film.size(); i++)
	{
		if (film[i].Director == word)
		{
			return film[i];
		}
	}
	cout << "Not found!" << endl;
	return abc;
}

//find most popular film in genre
FilmData MostPopular(vector<FilmData> film, string genre)
{
	int bestrating = film[0].Rating; int bestnum = 0;
	for (size_t i = 0; i < film.size(); i++)
	{
		if (film[i].FilmGenre == genre && film[i].Rating > bestrating)
		{
			bestrating = film[i].Rating;
			bestnum = i;
		}
	}
	return film[bestnum];
}

//show all films
void ShowFilms(vector<FilmData> film)
{
	cout << "-------------------Films-------------------" << endl;
	for (int i = 0; i < film.size(); i++)
	{
		cout << "----Film" << i << "----" << endl;
		cout << "Name: " << film[i].FilmName << endl;
		cout << "Director: " << film[i].Director << endl;
		cout << "Genre: " << film[i].FilmGenre << endl;
		cout << "Rating: " << film[i].Rating << endl;
		cout << "Cost: " << film[i].DiskCost << endl;
		cout << "-------------" << endl;
	}
	cout << "-------------------------------------------" << endl;
}

//write films to file
void WriteFilm(vector<FilmData> film, string filename)
{
	ofstream out(filename);
	for (int i = 0; i < film.size(); i++)
	{
		out << film[i].FilmName << endl;
		out << film[i].Director << endl;
		out << film[i].FilmGenre << endl;
		out << film[i].Rating << endl;
		out << film[i].DiskCost << endl;
	}
	out.close();
}

//enter film data from keyboard
FilmData EnterFilm()
{
	FilmData film;
	cout << "Film Name: ";
	cin >> film.FilmName;
	cout << "Film Director: ";
	cin >> film.Director;
	cout << "Fil Genre: ";
	cin >> film.FilmGenre;
	cout << "Film Rating: ";
	cin >> film.Rating;
	cout << "Film disk price: ";
	cin >> film.DiskCost;
	return film;
}
void ProgramAutor()
{
	cout << "Maskym Yanishevskiy" << endl;
}