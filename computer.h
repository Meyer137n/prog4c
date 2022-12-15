#pragma once
#include "matplate.h"
#include "ram.h"
#include "processor.h"
#include "videocard.h"
#include "dop.h"

class computer
{
    friend void search_id(computer pc[]);
private:
    matplate mt;
    ram rm;
    processor prc;
    videocard vdc;
    dop dp;
    double price;
    static int count;
    int id;
public:
    computer();
    computer(matplate mt, ram rm,processor prc, videocard vdc, dop dp, double price);
    void set_computer();
    void get_computer();
    static int get_count();
    static void sys_mas(std::string *str);
    static void sys_mas(std::string &str);
    double operator +(const computer & other)
    {
        double res;
        res= this->price + other.price;
        return res;
    }
    computer & operator ++(int p)
    {
        price += 10000;
        return *this;
    }
    computer & operator ++()
    {
        price += 10000;
        return *this;
    }
};

