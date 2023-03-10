#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <random>
#include <algorithm>
#include <numeric>
#define pair std::pair<double,double>

class PerlinNoise {
std::vector<int> p;
private:
	
	double fade(double t);
	double lerp(double a, double b, double t);
	pair randCorner(int x, int y);
	static double Dot(pair a, pair b); //Скалярное произведение
	double grad(int hash, double x, double y, double z);
public:
	PerlinNoise() {};
	PerlinNoise(unsigned int seed);
	double Noise(float fx, float fy);
	double Noise(float fx, float fy, int octaves, float persistence);
	double Cloud(float x, float y, int octaves, float persistence = 0.5f);
	double Wood(float x, float y, int octaves, float persistence = 0.5f);
	double Khaki(float x, float y, int octaves, float persistence = 0.5f);
	double Malachite(float x, float y, int octaves, float persistence = 0.5f);

	double idk(float x, float y, int octaves, float persistence = 0.5f);
	static std::vector<int> getColor(int id, int initCol);

};