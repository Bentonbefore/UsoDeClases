#include <iostream>
#include <time.h>
#include "npc.h"
#include "player.h"
using namespace std;

int main()
{   //Status de los personajes
	bool StatusEne = true;
	Player Slayer("killer", 70, 200, 0.2f, 0.5, true);
	NPC orco("Baphy", 100, 300, 0.5f, 0.5, true);
	NPC goblin1("galawix", 25, 100, 0.2f, 0.1, true);
	NPC goblin2("vetrox", 25, 100, 0.2f, 0.1, true);
	NPC goblin3("chupacabras", 25, 100, 0.2f, 0.1, true);
	NPC goblin4("golem", 25, 100, 0.2f, 0.1, true);

	 //true
	while (Slayer.Get_Status()&&StatusEne)//Si Uno de los 2 muere se termina el juego
	{
		
		/* inicializando random: */
		srand(time(NULL));

		
		if (1==(rand() % 2 + 1)) //Seleccion random de ataque , if rand = 1 ataca Slayer , de otra forma el orco
		{
			int opc2;   //Menu de opciones de ataque 
				cout << "Que enemigo vas a atacar?  \n";
				cout << "Opcion 1: Orco " << orco.Get_Nombre() <<" \n";
				cout << "Opcion 2: Goblin " << goblin1.Get_Nombre() << "\n";
				cout << "Opcion 3: Goblin " << goblin2.Get_Nombre() << "\n";
				cout << "Opcion 4: Goblin " << goblin3.Get_Nombre() << "\n";
				cout << "Opcion 5: Goblin " << goblin4.Get_Nombre() << "\n";
				cin >> opc2;
				
			switch (opc2)
			{

			//Ataque a Orco
			case 1:
				if (orco.Get_Status())
				{
			        
					cout << "Player :" << Slayer.Get_Nombre() <<" Ataco a Orco : "<< orco.Get_Nombre() << "\n"; 
					orco.Set_Vida((orco.Get_Vida() - (rand() % 20 + 1))); //de acuerdo al random se determina cuanto daño se aplica hacia el Orco
					cout << "Le resta tanto de vida: " << orco.Get_Vida() << "\n";

					if (orco.Get_Vida() <= 0)  //Condicion para determinar si el orco ya no tiene puntos de vida
					{
						cout << " Haha shale se murio \n";
						orco.Set_Status(false);//Aqui se le indica al npc que ah muerto si su vida llega a 0 
					}
				}
				else
				{
					cout << "esta muerto :( \n"; //Cuando el orco ya muere y se le quiere volver a atacar, aparece este mensaje indicando que ya murio, por si se olvida.
				}

				break;
			case 2:
				if (goblin1.Get_Status())
				{
					cout << "Player : " << Slayer.Get_Nombre() << " Ataco a Goblin : " << goblin1.Get_Nombre() << "\n";
					goblin1.Set_Vida((goblin1.Get_Vida() - (rand() % 5 + 1))); // a base de los randoms, sucede igual como al Orco solamente que se le hace un cambio de puntos de ataque, porque estos tienen menos vida que el orco
					cout << "Le resta tanto de vida: " << goblin1.Get_Vida() << "\n";

					if (goblin1.Get_Vida() <= 0) //Condicion para determinar si el orco ya no tiene puntos de vida
					{
						cout << " Haha shale se murio \n";
						goblin1.Set_Status(false); //Aqui se le indica al npc que ah muerto si su vida llega a 0 
					}

				}
				else
				{
					cout << "Haha shale se murio \n"; //se vuelve a idicar que ya murio si se intenta volver a atacar.
				}

				break;
			case 3:
				if (goblin2.Get_Status())
				{
					cout << "Player : " << Slayer.Get_Nombre() << "Ataco a Goblin : " << goblin2.Get_Nombre() << "\n";
					goblin2.Set_Vida((goblin2.Get_Vida() - (rand() % 5 + 1))); // a base de los randoms, sucede igual como al Orco solamente que se le hace un cambio de puntos de ataque, porque estos tienen menos vida que el orco
					cout << " Le resta tanto de vida: " << goblin2.Get_Vida() << "\n";

					if (goblin2.Get_Vida() <= 0) //Condicion para determinar si el orco ya no tiene puntos de vida
					{
						cout << " Haha shale se murio \n";
						goblin2.Set_Status(false); //Aqui se le indica al npc que ah muerto si su vida llega a 0 
					}
				}          
				else
				{
					cout << "Haha shale se murio \n"; //se vuelve a idicar que ya murio si se intenta volver a atacar.
				}

				break;
			case 4:
				if (goblin3.Get_Status())
				{
					cout << " Player : " << Slayer.Get_Nombre() << " Ataco a Goblin : " << goblin3.Get_Nombre() << "\n";
					goblin3.Set_Vida((goblin3.Get_Vida() - (rand() % 5 + 1))); // a base de los randoms, sucede igual como al Orco solamente que se le hace un cambio de puntos de ataque, porque estos tienen menos vida que el orco
					cout << " Le resta tanto de vida: " << goblin3.Get_Vida() << "\n";

					if (goblin3.Get_Vida() <= 0) //Condicion para determinar si el orco ya no tiene puntos de vida
					{
						cout << " Haha shale se murio \n";
						goblin3.Set_Status(false); //Aqui se le indica al npc que ah muerto si su vida llega a 0 
					}

				}
				else
				{
					cout << "Haha shale se murio \n"; //se vuelve a idicar que ya murio si se intenta volver a atacar.
				}

				break;
			case 5:
				if (goblin4.Get_Status())
				{
					cout << "Player : " << Slayer.Get_Nombre() << " Ataco a Goblin : " << goblin4.Get_Nombre() << "\n";
					goblin4.Set_Vida((goblin4.Get_Vida() - (rand() % 5 + 1))); // a base de los randoms, sucede igual como al Orco solamente que se le hace un cambio de puntos de ataque, porque estos tienen menos vida que el orco
					cout << " Le resta tanto de vida: " << goblin4.Get_Vida() << "\n";

					if (goblin4.Get_Vida() <= 0) //Condicion para determinar si el orco ya no tiene puntos de vida
					{
					    cout << " Haha shale se murio \n";
						goblin4.Set_Status(false); //Aqui se le indica al npc que ah muerto si su vida llega a 0 
					}
				}
				else
				{
					cout << " Haha shale se murio \n"; //se vuelve a idicar que ya murio si se intenta volver a atacar.
				}

				break;

			}

		
	}	
		else 
		{
			if(orco.Get_Status()){//Si el Orco muere ya no puede atacar
			if (Slayer.Get_Status())//Se determina si el slayer murio
			{

				cout << "NPC : " << orco.Get_Nombre() << " Te han atacado : " << Slayer.Get_Nombre() << "\n";
				Slayer.Set_Vida((Slayer.Get_Vida() - (rand() % 20 + 1))); // Se determina mediante random la cantidad de vida que se le reduce al slayer
				cout << " Le resta tanto de vida " << Slayer.Get_Vida() << "\n" ; //Se muestra en pantalla cuanta vida restante tiene El player Slayer

				if (Slayer.Get_Vida() <= 0)//Se Verifica si el Player tiene vida para continuar
				{
					cout << " Haha shale te moriste , Game Over \n";
					Slayer.Set_Status(false);//si el Player tiene menos o igual a 0 de vida se cambia el status a muerto
				}

			}
			else
			{
				cout << "YOU DIED! \n";
			}
			}
			else {
			cout << "El orco no puede atacar esta Morido \n"; //Mensaje que retorna si el orco lider murio
			}
			
			}

		}
	  
		if (orco.Get_Status()||goblin1.Get_Status() || goblin2.Get_Status()||goblin3.Get_Status()||goblin4.Get_Status())//Se determina si algun enemigo sigue en pie
		{
			StatusEne = true; // si sigue vivo almenos 1 , la pelea sigue
		}
		else 
		{
			cout << "Todos Los Orcos Murieron , Has Ganado \n"; //Si no , se retorna que al jugador que ah ganado y se acaba el juego
			StatusEne = false;
		}

		
	}
		

