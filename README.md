## Playlist can be found <a href="https://www.youtube.com/playlist?list=PLNyt26ZAn9qQhjDnNx0tI87H31L0rYNlo">here</a>

# Index

<pre>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/1.cpp">1 - Classes, Public and Private access modifiers</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/2.cpp">2 - OOPs Recap & Nesting of Member Functions</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/3.cpp">3 - Objects Memory Allocation & using Arrays in Classes</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/4.cpp">4 - Static Data Members & Methods</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/5.cpp">5 - Array of Objects & Passing Objects as Function Arguments</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/6.cpp">6 - Friend Functions</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/7.cpp">7 - Friend Classes & Member Friend Functions</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/8.cpp">8 - More on Friend Functions</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/9.cpp">9 - Constructors</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/10.cpp">10 - Parameterized and Default Constructors</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/11.cpp">11 - Constructor Overloading</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/12.cpp">12 - Constructors With Default Arguments</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/13.cpp">13 - Dynamic Initialization of Objects Using Constructors</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/14.cpp">14 - Copy Constructor</a>
<a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/15.cpp">15 - Destructor</a>
</pre>



# Why Object-Oriented Programming?
- C++ language was designed with the main intention of adding object-oriented programming to C language
- As the size of the program increases readability, maintainability, and bug-free nature of the program decrease.
- This was the major problem with languages like C which relied upon functions or procedure (hence the name procedural programming language)
- As a result, the possibility of not addressing the problem adequately was high
- Also, data was almost neglected, data security was easily compromised
- Using classes solves this problem by modeling program as a real-world scenario

# Difference between Procedure Oriented Programming and Object-Oriented Programming
### Procedure Oriented Programming
- Consists of writing a set of instruction for the computer to follow
- The main focus is on functions and not on the flow of data
- Functions can either use local or global data
- Data moves openly from function to function <br/>
### Object-Oriented Programming
- Works on the concept of classes and object
- A class is a template to create objects
- Treats data as a critical element
- Decomposes the problem in objects and builds data and functions around the objects

# Basic Concepts in Object-Oriented Programming
- Classes - Basic template for creating objects
- Objects – Basic run-time entities
- Data Abstraction & Encapsulation – Wrapping data and functions into a single unit
- Inheritance – Properties of one class can be inherited into others
- Polymorphism – Ability to take more than one forms
- Dynamic Binding – Code which will execute is not known until the program runs
- Message Passing – message (Information) call format

# Benefits of Object-Oriented Programming
- Better code reusability using objects and inheritance
- Principle of data hiding helps build secure systems
- Multiple Objects can co-exist without any interference
- Software complexity can be easily managed

# Why use classes instead of structures?
Classes and structures are somewhat the same but still, they have some differences. For example, we cannot hide data in structures which means that everything is public and can be accessed easily which is a major drawback of the structure because structures cannot be used where data security is a major concern. Another drawback of structures is that we cannot add functions in it.

# Classes
Classes are user-defined data-types and are a template for creating objects. Classes consist of variables and functions which are also called class members.

# Access Specifiers

Public Access Specifier - All the variables and functions declared under public access modifier will be available for everyone. They can be accessed both inside and outside the class. Dot (.) operator is used in the program to access public data members directly.

Private Access Specifier - All the variables and functions declared under a private access modifier can only be used inside the class. They are not permissible to be used by any object or function outside the class.

# Learn about the <a href="https://www.youtube.com/playlist?list=PLNyt26ZAn9qQhjDnNx0tI87H31L0rYNlo">scope resolution operator</a>

# Recap

- Bjarne Stroustrup initially named C++ language as C with classes because C++ language was almost the same as C language but they added a new concept of classes in it.
- Classes are the extension of structures in C language.
- Structures had limitations such as members are public and no methods.
- Classes have some additional features than structures such as classes that can have methods and properties.
- Classes have a feature to make class members as public and private.
- In C++ objects can be declared along with class declaration:

```
class Vehicle{
            // Class definition
} bicycle, train, car;
```

# Objects Memory Allocation in C++

The way memory is allocated to variables and functions of the class is different even though they both are from the same class. The memory is only allocated to the variables of the class when the object is created. The memory is not allocated to the variables when the class is declared. At the same time, single variables can have different values for different objects, so every object has an individual copy of all the variables of the class. But the memory is allocated to the function only once when the class is declared. So the objects don’t have individual copies of functions only one copy is shared among each object.

# Arrays in Classes

Arrays are used to store multiple values of the same type. An array is very helpful when multiple variables are required, instead of making multiple variables one array can be used which can store multiple values. Array stores data in sequential order.

# Static Data Members
When a static data member is created, there is only a single copy of the data member which is shared between all the objects of the class. As we have discussed in our previous lecture that if the data members are not static then every object has an individual copy of the data member and it is not shared.

# Static Methods
When a static method is created, they become independent of any object and class. Static methods can only access static data members and static methods. Static methods can only be accessed using the scope resolution operator.

# Learn about the <a href="https://www.geeksforgeeks.org/static-keyword-cpp/">static keyword</a>

# An array of Objects

An array of objects is declared the same as any other data-type array.  An array of objects consists of class objects as its elements. If the array consists of class objects it is called an array of objects.

# Passing Object as Function Argument

Objects can be passed as function arguments. This is useful when we want to assign the values of a passed object to the current object. 

# Friend Function

Friend functions are those functions that have the right to access the private data members of class even though they are not defined inside the class. It is necessary to write the prototype of the friend function. One main thing to note here is that if we have written the prototype for the friend function in the class it will not make that function a member of the class.

# Friend Classes

Friend classes are those classes that have permission to access private members of the class in which they are declared. The main thing to note here is that if the class is made friend of another class then it can access all the private members of that class.

# Constructors

A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class. Constructors are automatically invoked whenever an object is created.

# Important Characteristics of Constructors

A constructor should be declared in the public section of the class
- They are automatically invoked whenever the object is created
- They cannot return values and do not have return types
- It can have default arguments
- We cannot refer to their address

# Parameterized and Default Constructors

Parameterized constructors are those constructors that take one or more parameters. Default constructors are those constructors that take no parameters. The main things to note here are that constructors are written in the public section of the class and the constructors don’t have a return type.

# Constructor Overloading

Constructor overloading is a concept in which one class can have multiple constructors with different parameters. The main thing to note here is that the constructors will run according to the arguments for example if a program consists of 3 constructors with 0, 1, and 2 arguments, so if we pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument.

# Constructors with Default Arguments

Default arguments of the constructor are those which are provided in the constructor declaration. If the values are not provided when calling the constructor the constructor uses the default arguments automatically.

# Dynamic Initialization of Objects Using Constructors

The dynamic initialization of the object means that the object is initialized at the runtime.  Dynamic initialization of the object using a constructor is beneficial when the data is of different formats.

# Copy Constructor in C++

A copy constructor is a type of constructor that creates a copy of another object. If we want one object to resemble another object we can use a copy constructor. If no copy constructor is written in the program compiler will supply its own copy constructor. 

# Destructor in C++
A destructor is a type of function which is called when the object is destroyed. Destructor never takes an argument nor does it return any value.

# Inheritance in C++ - Overview
- Reusability is a very important feature of OOPs
- In C++ we can reuse a class and add additional features to it
- Reusing classes saves time and money
- Reusing already tested and debugged classes will save a lot of effort of developing and debugging the same thing again

# What is Inheritance in C++?
- The concept of reusability in C++ is supported using inheritance
- We can reuse the properties of an existing class by inheriting it
- The existing class is called a base class
- The new class which is inherited from the base class is called a derived class
- Reusing classes saves time and money
- There are different types of inheritance in C++

# Forms of Inheritance in C++
- Single Inheritance
- Multiple Inheritance
- Hierarchical Inheritance
- Multilevel Inheritance
- Hybrid Inheritance

### Single Inheritance in C++
Single inheritance is a type of inheritance in which a derived class is inherited with only one base class. For example, we have two classes “employee” and “programmer”. If the “programmer” class is inherited from the “employee” class which means that the “programmer” class can now implement the functionalities of the “employee” class.

### Multiple Inheritances in C++
Multiple inheritances are a type of inheritance in which one derived class is inherited with more than one base class. For example, we have three classes “employee”, “assistant” and “programmer”. If the “programmer” class is inherited from the “employee” and “assistant” class which means that the “programmer” class can now implement the functionalities of the “employee” and “assistant” class.

### Hierarchical Inheritance
A hierarchical inheritance is a type of inheritance in which several derived classes are inherited from a single base class. For example, we have three classes “employee”, “manager” and “programmer”. If the “programmer” and “manager” classes are inherited from the “employee” class which means that the “programmer” and “manager” class can now implement the functionalities of the “employee” class.

### Multilevel Inheritance in C++
Multilevel inheritance is a type of inheritance in which one derived class is inherited from another derived class. For example, we have three classes “animal”, “mammal” and “cow”. If the “mammal” class is inherited from the “animal” class and “cow” class is inherited from “mammal” which means that the “mammal” class can now implement the functionalities of “animal” and “cow” class can now implement the functionalities of “mammal” class.

### Hybrid Inheritance in C++
Hybrid inheritance is a combination of multiple inheritance and multilevel inheritance. In hybrid inheritance, a class is derived from two classes as in multiple inheritances. However, one of the parent classes is not a base class. For example, we have four classes “animal”, “mammal”, “bird”, and “bat”. If “mammal”  and “bird” classes are inherited from the “animal” class and “bat” class is inherited from “mammal” and “bird” classes which means that “mammal” and “bird” classes can now implement the functionalities of “animal” class and “bat” class can now implement the functionalities of “mammal” and “bird” classes.


<pre>
<img src="https://user-images.githubusercontent.com/84087089/192861940-7f7e2d9b-8e90-426b-9239-b7db54386b73.png" width="1010"> <img src="https://user-images.githubusercontent.com/84087089/192862219-eb627005-479d-473b-8a7b-bde7503e031a.png" width="1010"> <img src="https://user-images.githubusercontent.com/84087089/192862313-1ae80e8a-53c8-4f2c-8c80-02676b70a4dd.png" width="1010"> <img src="https://user-images.githubusercontent.com/84087089/192862438-25c248da-a912-4725-9294-352b782682b1.png" width="1010"> <img src="https://user-images.githubusercontent.com/84087089/192862572-8c114528-7398-4d23-9854-906d5a7c756b.png" width="1010"> 
</pre>

