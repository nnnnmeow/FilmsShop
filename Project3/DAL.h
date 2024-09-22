#pragma once
#include<string>
#include<vector>
#include<fstream>
#include<iostream>
using namespace std;
struct FilmData
{
	string FilmName;
	string Director;
	string FilmGenre;
	int Rating;
	string DiskCost;
};

//Get films from file
vector<FilmData> GetFilms(string name)
{
	vector<FilmData> films; FilmData film;
	ifstream file(name);

	while (!file.eof())
	{
		file >> film.FilmName;
		file >> film.Director;
		file >> film.FilmGenre;
		file >> film.Rating;
		file >> film.DiskCost;
		films.push_back(film);
	}

	file.close();
	films.pop_back();
	return films;
}
