#include "player.h"

Player::Player(std::string _nombre, int _vida, int _stam, float _rf, float _re, bool _player) //Constructor Clase Player
{
    //Se inicializa las propiedades y valores principales del Player
	nombre = _nombre; 
	vida = _vida;
	stamina = _stam;
	resistencia_fisica = _rf;
	resistencia_energia = _re;
	player = _player;
	
}

Player:: ~Player()// Destructor de Clase Player
{

}

std::string Player::Get_Nombre() //Se Retorna el nombre del jugador
{
	return nombre;
}

int Player::Get_Vida() // Se retorna la vida que tiene el jugador 
{
	return vida;
}

void Player::Set_Vida(float _vida) // Se determina el daño que recibe el jugador de acuerdo a su resistencia fisica
{
	vida = (resistencia_fisica)*_vida;
}

int Player::Get_stamina() //Se retorna el stamina del jugador
{
	return stamina;
}

void Player::Set_stamina(int _stam) //Se Inicializa o modifica el stamina
{
	stamina = _stam;
}

float Player::Get_resistencia_fisica()//Se retorna la resistencia fisica
{
	return resistencia_fisica;
}

void Player::Set_resistencia_fisica(float _rf)//Se Inicializa o Modifica la Resistencia Fisica
{
	resistencia_fisica = _rf;
}

float Player::Get_ResEne() //Se retorna la resistencia energia
{
	return resistencia_energia;

}
void Player::Set_ResEne(float _re)//Se Inicializa o Modifica la resistencia energia 
{
	resistencia_energia = _re;
}
bool Player::Get_Status()//Se Retorna el Status del Jugador
{
	return player;
}

void Player::Set_Status(bool _player) //Se Inicializa o Modifica el Status del jugador
{
	player = _player;
}
