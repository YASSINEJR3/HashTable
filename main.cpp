#include "src/HashTable.cpp"


int main()
{
    HashTable<int> etudiants;

    etudiants.insertElement("Etu1", 15);
    etudiants.insertElement("Etu2", 16);
    etudiants.insertElement("Etu3", 17);
    etudiants.insertElement("Etu4", 14);
    etudiants.insertElement("Etu5", 13);


    string name = "Etu2";

    int value = etudiants.getElementByCle(name);
    if( value != -1)
        cout << "La note de l'etudiant  " << name <<  " est : " << value << endl;

    return 0;
}
