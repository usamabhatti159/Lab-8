//
//  main.cpp
//  Task-1
//
//  Created by Usama Bhatti on 21/05/2016.
//  Copyright © 2016 Usama Bhatti. All rights reserved.
//

#include <iostream>
#include<iostream>
#include<string>

using namespace std;

class band      // base class
{
protected:
    int count;
    
public:
    band()      //constructor
    {
        count = 10;
    }
    virtual int Count() = 0;   //pure virtual function
    virtual string type() = 0;  //pure virtual function
    
    int getCount()
    {
        return count;
    }
};

class metalBand : public band  //class derived-class : access-specifier base-class,here base class is band.
{
private:
    int mem;
    
public:
    metalBand(int m)  //constructor
    {
        this->mem = m;
    }
    string type() //editing pure virtual funtion of base class
    {
        return "Metal ";
    }
    int Count() //editing pure virtual funtion of base class
    {
        return getCount() + mem;
    }
    
};

class jazzBand : public band  //derived class  (jazzBand 'IS A' band)
{
private:
    
public:
    string type() //editing pure virtual funtion of base class
    {
        return "Jazz";
    }
    int Count() //editing pure virtual funtion of base class
    {
        return getCount() + 4;
    }
    
};

class marchingBand : public band  //derived class (MarchingBand 'IS A' band)
{
private:
    
public:
    string type() //editing pure virtual funtion of base class
    {
        return "Marching";
    }
    int Count() //editing pure virtual funtion of base class
    {
        return getCount() + 6;
    }
};

class SymphonyBand : public band  //derived class (SymphonyBand 'IS A' band)
{
private:
    
public:
    string type() //editing pure virtual funtion of base class
    {
        return "Symphony";
    }
    int Count() //editing pure virtual funtion of base class
    {
        return getCount() + 8;
    }
};

int main()
{
    band *ptr;  //pointer of band type
    
    metalBand mB(2);  //creating instance and passing 2 to constructor
    mB.Count();
    ptr = &mB;
    
    cout << "Band Type: " << ptr->type() << endl;
    cout << "Members in Band:" << ptr->Count() << endl << endl;

    jazzBand jB; //creating instance
    jB.Count();
    ptr = &jB;
    
    cout << "Band Type: " << ptr->type() << endl;
    cout << "Members in Band:" << ptr->Count() << endl << endl;
    
    marchingBand maB; //creating instance
    maB.Count();
    ptr = &maB;
    
    cout << "Band Type: " << ptr->type() << endl;
    cout << "Members in Band:" << ptr->Count() << endl << endl;
    
    SymphonyBand sB; //creating instance
    sB.Count();
    ptr = &sB;
    
    cout << "Band Type: " << ptr->type() << endl;
    cout << "Members in Band:" << ptr->Count() << endl << endl;

    return 0;
}