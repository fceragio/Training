/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: federico <federico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 05:25:14 by federico          #+#    #+#             */
/*   Updated: 2025/05/06 08:03:00 by federico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}


// int main(){
// 	Character	goodGuy1("The_Protagonist");
// 	Character	goodGuy2("The_Ally");
// 	Character	badGuy1("The_Antagonist");
// 	Cure		tooManyMateria;
// 	Ice*		fake_materia = NULL;

// 	std::cout << '\n';
// 	Cure*	heal_materia = new Cure();
// 	Ice*	ice_materia = new Ice();

// 	std::cout << '\n';
// 	AMateria*	heal_pointer = new Cure();
// 	AMateria*	ice_pointer = new Ice();

// 	std::cout << '\n';
// 	goodGuy1.equip(heal_pointer);
// 	goodGuy1.equip(ice_pointer);
// 	goodGuy1.equip(heal_materia);
// 	goodGuy1.equip(ice_materia);
// 	goodGuy1.equip(&tooManyMateria);
// 	goodGuy1.equip(fake_materia);

// 	std::cout << '\n';
// 	goodGuy2.equip(heal_pointer);

// 	std::cout << '\n';
// 	goodGuy1.use(0, goodGuy2);
// 	goodGuy1.use(1, badGuy1);
// 	goodGuy1.use(2, goodGuy1);
// 	goodGuy1.use(3, badGuy1);
// 	goodGuy1.use(4, badGuy1);
// 	goodGuy1.use(10, goodGuy2);

// 	std::cout << '\n';
// 	goodGuy1.unequip(-1);
// 	goodGuy1.unequip(0);
// 	goodGuy1.unequip(1);
// 	goodGuy1.unequip(4);
// 	goodGuy1.unequip(100);

// 	std::cout << '\n';
// 	goodGuy2 = goodGuy1;
// 	std::cout << "The new ";
// 	goodGuy2.use(1, badGuy1);
// 	std::cout << "The new ";
// 	goodGuy2.use(2, goodGuy1);

// 	std::cout << '\n';
// 	goodGuy1.use(0, goodGuy2);
// 	goodGuy1.use(1, goodGuy2);

// 	std::cout << '\n';
// 	std::cout << '\n';
// 	MateriaSource	source;
// 	AMateria*		temp;

// 	std::cout << '\n';
// 	source.createMateria("Ice");
// 	source.learnMateria(ice_pointer);
// 	temp = source.createMateria("Ice");
// 	source.createMateria("ice");
// 	delete temp;

// 	std::cout << '\n';
// 	source.createMateria("Cure");
// 	source.learnMateria(heal_pointer);
// 	temp = source.createMateria("Cure");
// 	source.createMateria("cure");
// 	delete temp;

// 	std::cout << '\n';
// 	source.learnMateria(NULL);
// 	source.learnMateria(heal_pointer);
// 	source.learnMateria(heal_pointer);
// 	source.learnMateria(heal_pointer);


// 	std::cout << '\n';
// 	std::cout << '\n';
// 	for (int i = 0; i < FLOOR_SLOTS + BASE_INV + 1; i++){
// 		temp = source.createMateria("Ice");
// 		badGuy1.equip(temp);
// 		badGuy1.unequip(0);
// 	}
	
// 	std::cout << '\n';
// 	delete temp;
	
// 	std::cout << std::endl;

// 	return 0;
// }
