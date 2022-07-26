## Playlist can be found <a href="https://www.youtube.com/playlist?list=PLNyt26ZAn9qQhjDnNx0tI87H31L0rYNlo">here</a>

# Index

- <a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/1.cpp">1 - Classes, Public and Private access modifiers</a>
- <a href="https://github.com/Arya-Gupta/Object-Oriented-Programming/blob/main/2.cpp">2 - OOPs Recap & Nesting of Member Functions</a>
- <a href="">3 - Objects Memory Allocation & using Arrays in Classes</a>
- <a href="">4 - Static Data Members & Methods</a>
- <a href="">5 - Array of Objects & Passing Objects as Function Arguments</a>

# Introduction

<pre>
<img src="https://user-images.githubusercontent.com/84087089/180877576-260d8f82-6855-4ce9-b65e-a785017b1cdf.png" width="1010"> <img src="https://user-images.githubusercontent.com/84087089/180877699-f8793cd6-dcfd-4913-889a-f7178e405b15.png" width="1010"> <img src="https://user-images.githubusercontent.com/84087089/180877855-96451c9c-9c19-4992-8b75-a1298eb42cea.png" width="1010"> <img src="https://user-images.githubusercontent.com/84087089/180877959-a708d3da-c9fd-4bbc-b74a-e933ff482706.png" width="1010"> <img src="https://user-images.githubusercontent.com/84087089/180878052-1bfdb65c-b74c-40b1-8b68-7e0c33f99204.png" width="1010">
</pre>

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

