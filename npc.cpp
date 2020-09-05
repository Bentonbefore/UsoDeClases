#include "npc.h"
//constructor
NPC::NPC(std::string _nombre, int _vida, int _stam, float _rf, float _re, bool _enemigo)
{    //Se inicializa las propiedades y valores principales del enemigo
	nombre = _nombre;
	vida = _vida;
	stamina = _stam;
	resistencia_fisica = _rf;
	resistencia_energia = _re;
	enemigo = _enemigo;

enemigo = _enemigo;
}
//destructor 
NPC:: ~NPC() 
{

}

std::string NPC::Get_Nombre() //Se retorna el nombre del enemigo 
{
	return nombre;
}


int NPC::Get_Vida() // Se retorna la vida que tiene el npc
{
	return vida;
}

void NPC::Set_Vida(float _vida) // Se determina el daño que recibe el npc de acuerdo a su resistencia fisica
{
	vida = (resistencia_fisica)*_vida;
}

int NPC::Get_stamina() //se retorna la stamina 
{

	return stamina;
}

void NPC::Set_stamina(int _stam) //se inicializa o modifica la stamina 
{

stamina = _stam;

}

float NPC::Get_resistencia_fisica() //se retornia la resistencia fisica 
{

	return resistencia_fisica;

}

void NPC::Set_resistencia_fisica(float _rf) //se inicializa o modifica la stamina 
{

	resistencia_fisica = _rf;

}
	
float NPC::Get_ResEne() //se retorna la resistencia energia 
{

	return resistencia_energia;

}

void NPC::Set_ResEne(float _re) //se inicializa o modifica la resistencia energia 
{

	resistencia_energia = _re;

}

bool NPC::Get_Status() //se retorna el status del npc
{

	return enemigo;
	
}

void NPC::Set_Status(bool _player) //se inicializa o modifica el status del npc
{

	enemigo = _player;

}
    