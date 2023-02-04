#ifndef HASHTABLE_H
#define HASHTABLE_H
#define N 1000

#include <iostream>
#include <vector>
using namespace std;

template<class T>
class HashTable
{
    public:
        HashTable();
        virtual ~HashTable();
        void insertElement(string cle , T valeur);
        T getElementByCle(string cle);


    protected:

    private: int Hashing(string cle);
    private:
        long const taille = N;
        vector<pair<string,T>> hashTable[N];

};

#endif // HASHTABLE_H
