// FunWithNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <sstream>
#include <bitset>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdio>
#include <cstdlib> 
#include <string>
#include<sstream>  
#include <conio.h>
#include <stdlib.h>     
#include <iostream>

int main()

{
    string special = "";
    int redlake = 0;
   // system("Color C1");
    string boody = " ";
    string meanseal = "";
    int index = 0;
    srand(time(NULL));
    string threebits2 = "";
    string bear = "";
    string grizzly = "";
    bool repeat = false;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    int i4 = 0;
    int lm = 0;
    int index3 = 0;
    int threebits = 0;
    string sulu = "";
    string bulu = "";
    string pfull = "";
    char p;
    char p1;
    char p2;
    string bulutubu = "";
    int pint2 = 0;
    int pint3 = 0;
    char octalpull;
    int octindex = 0;
    int octalint = 0;
    int parse = 0;
    int pint = 0;
    string pfull1 = "";
    repeat = true;
    int d = 0;
    int lm2 = 0;
    
        while (repeat == true) {
            // do { lm2 = rand(); } while (lm2 > 1000);
            //for (int n = 0; n < lm2; n++) {
            int lm3 = 2;
            // do { lm3 = rand(); } while ((lm3 >= ));
            for (int f = 0; f < lm3; f++) {
                //do { lm = rand(); } while (lm >= 3);
                lm = 2;
                int indexfix = -1;
                string i11 = "";
                for (int k = 0; k <= lm; k++) {
                    int a1 = 0;
                    int a2 = 0;
                    int a3 = 0;
                    int threebits1 = 0;
                    int pow2 = 0;
                    int pow3 = 0;
                    int pow4 = 0;


                    do {
                        i1 = 0 + (rand() % (1 - 0 + 1));
                        i2 = 0 + (rand() % (1 - 0 + 1));
                        i3 = 0 + (rand() % (1 - 0 + 1));
                        i4 = 0 + (rand() % (1 - 0 + 1));
                        // redlake++;
                        // cout << redlake << endl;
                    } while (((i1 + i2) - (i4 + i3)) != 1);

                    //i1 = rand() % 9;
                    redlake++;
                    //cout << redlake << endl;
                    string str2 = to_string(i1);
                    index++;

                    i11.insert(0, str2);
                    indexfix = indexfix + 1;
                    if (indexfix == 0) {
                        a1 = i1;
                        if (a1 == 0) {
                            pow2 = 0 * pow(2, indexfix);
                        }
                        if (a1 == 1) {
                            pow2 = 1 * pow(2, 2);
                        }
                        threebits = threebits + pow2;
                    }
                    if (indexfix == 1) {
                        a2 = i1;
                        if (a2 == 0) {
                            pow3 = 0 * pow(2, indexfix);
                        }
                        if (a2 == 1) {
                            pow3 = 1 * pow(2, indexfix);

                        }
                        threebits = threebits + pow3;
                    }
                    if (indexfix == 2) {
                        a3 = i1;
                        if (a3 == 0) {
                            pow4 = 0 * pow(2, indexfix);
                        }
                        if (a3 == 1) {
                            pow4 = 1 * pow(2, 0);
                        }
                        threebits = threebits + pow4;
                        string str = to_string(threebits);
                        threebits2.insert(0, str);
                        threebits = 0;
                        indexfix = -1;

                    }

                    if ((lm - index3 == 0 && lm % 3 == 0)) {
                        string str = to_string(threebits);
                        threebits2.insert(0, str);
                    }
                    if ((lm - index3 == 0 && lm % 3 == 1)) {
                        string str4 = to_string(threebits);
                        threebits2.insert(0, str4);
                    }
                    index3++;
                }

                threebits = 0;
                sulu.append(i11);
                bulu.append(threebits2);
                string blan = " ";
                bulutubu.append(threebits2);
                bulutubu.append(blan);

                threebits2 = "";
                i11 = "";
                index3 = 0;
            }


            pint2 = 0;
            pint3 = 0;
            pfull = "";
            octindex = 0;
            octalint = 0;
            parse = 0;
            pint = 0;
            pfull1 = "";

            for (int v = 0; v <= index - 2; v++) {
                string blan = " ";
                p = sulu[v];
                pint = p - '0';
                octalpull = bulu[octindex];
                octalint = octalpull - '0';
                if (pint == 1) {
                    parse += 1;
                }
                if (pint == 0) {
                    parse += 0;
                }
                if (octalint == parse) {
                    pfull.push_back(p);
                    pfull1.push_back(p);
                    pfull.append(blan);
                    octindex++;
                }
                  else {
                if (octalint != parse) {
                    v++;
                    p1 = sulu[v];
                    pint2 = p1 - '0';
                    if (pint2 == 1) {
                        parse += 2;
                    }
                    if (pint2 == 0) {
                        parse += 0;
                    }
                    if (parse == octalint) {
                        pfull.push_back(p);
                        pfull1.push_back(p);
                        pfull.push_back(p1);
                        pfull1.push_back(p1);
                        pfull.append(blan);
                        octindex++;
                    }
                           else {
                    if (octalint != parse) {
                        v++;
                        p2 = sulu[v];
                        pint3 = p2 - '0';
                        if (pint3 == 1) {
                            parse += 4;
                        }
                        if (pint3 == 0) {
                            parse += 0;
                        }
                        if (parse == octalint) {
                            pfull.push_back(p);
                            pfull1.push_back(p);
                            pfull.push_back(p1);
                            pfull1.push_back(p1);
                            pfull.push_back(p2);
                            pfull1.push_back(p2);
                            pfull.append(blan);
                            octindex++;
                                   }
                               }
                        }
                        parse = 0;
                    }
                }
            }
            if (pfull1 == sulu) {
                if (sulu != "" && bulu != "" && pfull != "") {
                    //   cout << sulu << " " << endl;
                   //    cout << bear ;
                   //    cout << grizzly ;
                    //   cout << endl;
                    d++;
                    bear.append(bulutubu);
                    grizzly.append(pfull);

                    sulu = "";
                    bulu = "";
                    pfull = "";
                    pfull1 = "";
                    bulutubu = "";
                    index = 0;

                    if (d == 1) {
                       // cout << redlake << endl;

                        //cout << grizzly;
                        //cout << bear;
                        stringstream sstream(grizzly);


                        while (sstream.good())
                        {
                            bitset<8> bits;
                            sstream >> bits;
                            char m = char(bits.to_ulong());
                            special += m;

                        }
                        cout << grizzly<<endl<<bear<<endl<<special<<endl<<redlake;
                        return 0;


                        /* cout << endl << "Hit any button when you're ready ";
                         string sidewinder = "";
                         cin >> sidewinder;
                         if (sidewinder != "") {
                             return 0;
                         }*/
                    }
                }
            }
            else {
                sulu = "";
                bulu = "";
                pfull = "";
                pfull1 = "";
                index = 0;
                bulutubu = "";
            }


            //            boody.append(sulu);
              //          meanseal.append(pfull1);
                //    bear.append(bulu);
                  //  grizzly.app8end(pfull);
              //  }
                //if (boody == meanseal) {
                  //  cout << grizzly << bear;
                  //  return 0;

        }
    
  
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

