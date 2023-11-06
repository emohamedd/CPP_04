# C++ Module 04 - Polymorphism, Abstract Classes, and Interfaces

## Exercise 00: Polymorphism

### Description
- Create a base class called `Animal` with a protected attribute `type`.
- Implement a `Dog` class and a `Cat` class that inherit from `Animal`. Set the `type` attribute based on the class name.
- Each animal should have a `makeSound()` method that prints an appropriate sound.

### Requirements
- Implement the classes with specific constructors and destructors.
- Implement tests to demonstrate polymorphism.

## Exercise 01: I don’t want to set the world on fire

### Description
- Create a `Brain` class with an array of 100 `std::string` called `ideas`.
- `Dog` and `Cat` should have a private `Brain*` attribute.
- Upon construction, `Dog` and `Cat` should create their `Brain` using `new Brain()`.
- Upon destruction, `Dog` and `Cat` should delete their `Brain`.
- Create an array of `Animal` objects (half `Dog`, half `Cat`) and delete them in the correct order. Check for memory leaks.

### Requirements
- Ensure deep copying of `Dog` and `Cat`.
- Implement tests to check for memory leaks and deep copying.

## Exercise 02: Abstract class

### Description
- Make the `Animal` class non-instantiable to prevent instantiation.
- Fix the `Animal` class so it's not possible to create instances of it.

### Requirements
- Update the `Animal` class to be non-instantiable.

## Exercise 03: Interface & Recap

### Description
- Implement an abstract class `AMateria` with necessary member functions.
- Implement concrete classes `Ice` and `Cure` that inherit from `AMateria`.
- Create a `Character` class with an inventory of `AMateria` objects.
- Implement an interface `ICharacter` for the `Character` class.
- Implement a `MateriaSource` class that can learn and create `AMateria` objects.

### Requirements
- Implement the classes with specific constructors, destructors, and member functions.
- Ensure deep copying for the `Character` class.
- Implement tests to demonstrate the functionality of the classes.

