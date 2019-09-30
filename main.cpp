/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: La Rosa
 *
 * Created on 29 de septiembre de 2019, 20:41
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main() {
    static int count = 0;
    count++;
    if(count <= 10) {
             cout << count << endl;
             return main(); //call main
             }//end if
    return 0;
}

