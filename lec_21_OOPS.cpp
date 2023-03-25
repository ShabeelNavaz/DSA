/*
#include<iostream>
using namespace std;
class Hero{
    int health;

};
int main(){
    Hero h1;
    cout<<"Size : "<<sizeof(h1)<<endl;
    return 0;
}
*/
//--------------------------Private
/*
#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
};
int main(){
Hero ramesh;
cout<<"Health is: "<<ramesh.health<<endl;
cout<<"Level is: "<<ramesh.level<<endl;
return 0;
}
*/

//--------------------------Private
/*
#include<iostream>
using namespace std;
class Hero{
    private:
    char level;
    void print(){
        cout<<level<<endl;
    }
};
int main(){
    return 0;
}
*/


// Encapsulation
/*
#include<iostream>
using namespace std;
class Human{
    // Properties
    private:
    int age; 
    int weight;
    string name;

    public:
    int getAeg(){
        return this->age;
    }
};
int main(){
    Human a;
    a.age;
    a.weight;
    a.name;

    return 0;
}
*/

// Inheritance
/*

#include<iostream>
using namespace std;
class Human{
    // Properties
    public:
    int age; 
    int weight;
    string name;

    public:
    int getAeg(){
        return this->age;
    }
};

    class female: public Human{

    };
int main(){
    Human a;
    female firstFemale;
    cout<<firstFemale.age<<endl;

    return 0;
}
 */


// Type of Inheritance

// 1. Single Inheritance
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    public:
    void speak(){
        cout<<"Animal is Speaking" <<endl;
    }
};

class Dog : public Animal{

};
int main(){
    Dog PehlaKutta;
    PehlaKutta.age;
    PehlaKutta.speak();

return 0;
}
*/

// 2. Multilevel Inheritance
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    public:
    void speak(){
        cout<<"Animal is Speaking" <<endl;
    }
};

class Dog : public Animal{

};

class lebra : public Dog{

};
int main(){
    Dog PehlaKutta;
    PehlaKutta.age;
    PehlaKutta.speak();

    lebra goldy;
    goldy.age;
    goldy.speak();

return 0;
}
*/

//  3. Multipal Inheritance
/*

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Maruti{
    public:
    string name;
};

class Suzuki{
    public:
    int value;
};
class Swift: public Maruti , public Suzuki{

};
int main(){
  Swift* miniCar = new Swift();
  miniCar ->name = "VXI";  
  cout<<miniCar->name<<endl;
  cout<<miniCar->value <<endl;
return 0;
}
*/

// Method Overloading
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Math{
    public:
    int add(int a,int b){
        return a+b;
    }
    // Overloading no of parameters
    int add(int a,int b, int c){
        return a+b+c;
    }
    // Overloading no of parameters
    int add(int a,float b){
        return a+b;
    }
};
int main(){
    cout<<"Sab sahi chal rahe h"<<endl; 
return 0;
}
*/

// Runtime polymorphism
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    public:
    void speak(){
        cout<<"Animal is Speaking"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Dog is Barking "<<endl;
    }
};
int main(){
    Dog dog;
    dog.speak();
     
return 0;
}
*/

// Static Keyword

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
return 0;
}