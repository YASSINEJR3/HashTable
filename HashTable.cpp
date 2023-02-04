#include "HashTable.h"

template<class T>
HashTable<T>::HashTable()
{
    //ctor
}

template<class T>
HashTable<T>::~HashTable()
{
    //dtor

}

template<class T>
int HashTable<T>::Hashing(string cle)
{
    unsigned long hashCode = 0;

    for (int i = 0; cle[i]; i++)
        hashCode += cle[i];

    return hashCode % taille;
}


template<class T>
void HashTable<T>::insertElement(string cle, T valeur)
{
    unsigned long hashCode = Hashing(cle);

    pair<string,T> element(cle,valeur);
    hashTable[hashCode].push_back(element);
}

template<class T>
T HashTable<T>::getElementByCle(string cle)
{
    unsigned long hashCode = Hashing(cle);
    for(auto &[key , value ] : hashTable[hashCode])
        if(cle == key)
            return value;

    cout << "aucun valeur pour cet cle "<<cle <<endl;

    return -1;
}

