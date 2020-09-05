#pragma once
#include <string>

class Player
{
public:
//Contructor y Destructor de la clase Player
	Player (std::string _nombre, int _vida, int _stam, float _rf, float _re, bool _player);
	~Player();

	//Se declaran las funciones de la clase Player
	std::string Get_Nombre();
	int Get_Vida();
	void Set_Vida(float _vida);
	int Get_stamina();
	void Set_stamina(int _stam);
    float Get_resistencia_fisica();
	void Set_resistencia_fisica(float _rf);
    float Get_ResEne();
	void Set_ResEne(float _re);
    bool Get_Status();
	void Set_Status(bool _player);
    



private:

//Se Declaran las variables de la clase Player
	std::string nombre;
	int vida;
	int stamina;
	float resistencia_fisica;
	float resistencia_energia;
	bool player;


};
