// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.

import java.text.CollationElementIterator;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.LinkedList;

public class Main {
    public static class Person implements Comparable<Person> {

        String surname;

        String name;

        int age;

        public Person(String surname, String name, int age) {

            this.surname = surname;

            this.name = name;

            this.age = age;

        }


        @Override

        public String toString() {

            return surname + " " + name + " " + age;

        }

        /////////////////////////////////////////////////////////////////////////////
        // Modyfikacja comparatora by porównywał nazwisko
        /////////////////////////////////////////////////////////////////////////////
        @Override
        public int compareTo(Person o) {
            int result = this.surname.compareTo(o.surname);
            /////////////////////////////////////////////////////////////////////////////
            // Zwraca 1 jeśli obiekt w którym jesteśmy (this) jest większy od obiektu
            // podanego do funkcji. Zwraca 0 jeśli są równe. Zwraca -1 jeśli obiekt
            // w którym jesteśmy jest mniejszy od podanego do funkcji.
            // Jeśli większe od 0 to jest pierwsze jak mniejsze to jest ostatnie.
            /////////////////////////////////////////////////////////////////////////////
            return result;
        }
    }

    /////////////////////////////////////////////////////////////////////////////
    // Modyfikacja comparatora by porównywał nazwisko>imie
    /////////////////////////////////////////////////////////////////////////////
    public static class PersonNameComparator implements Comparator<Person> {
        @Override
        public int compare(Person o1, Person o2) {
            int result = o1.surname.compareTo(o2.surname);
            if (result == 0) {
                result = o1.name.compareTo(o2.name);
                return result;
            }
            /////////////////////////////////////////////////////////////////////////////
            // Zwraca 1 jeśli o1 jest większe od obiektu o2. Zwraca 0 jeśli są równe.
            // Zwraca -1 jeśli obiekt o1 jest mniejszy o2.
            // Jeśli większe od 0 to o1 jest pierwsze jak mniejsze to jest ostatnie.
            /////////////////////////////////////////////////////////////////////////////
            return result;
        }
    }

    /////////////////////////////////////////////////////////////////////////////
    // Modyfikacja comparatora by porównywał nazwisko>imie>wiek
    /////////////////////////////////////////////////////////////////////////////
    public static class PersonAgeComparator implements Comparator<Person> {
        @Override
        public int compare(Person o1, Person o2) {
            int result = o1.surname.compareTo(o2.surname);
            if (result == 0) {
                result = o1.name.compareTo(o2.name);
                if (result == 0) {
                    /////////////////////////////////////////////////////////////////////////////
                    // Jeśli wynik będzie większy od zera to o1 będzie przed o2, jeśli mniejsze
                    // to na odwrót.
                    /////////////////////////////////////////////////////////////////////////////
                    return o1.age - o2.age;
                }
                return result;
            }
            /////////////////////////////////////////////////////////////////////////////
            // Zwraca 1 jeśli o1 jest większe od obiektu o2. Zwraca 0 jeśli są równe.
            // Zwraca -1 jeśli obiekt o1 jest mniejszy o2.
            // Jeśli większe od 0 to o1 jest pierwsze jak mniejsze to jest ostatnie.
            /////////////////////////////////////////////////////////////////////////////
            return result;
        }
    }

    public static void main(String[] args) {
        LinkedList<Person> osoby = new LinkedList<Person>();
        Scanner sc = new Scanner(System.in);
        int wybor, wiek, koniec=1;
        String nazwisko, imie;

        do {
        System.out.println("Wybierz jedną z opcji:");
        System.out.println("\n1. Dodaj osobę.");
        System.out.println("\n2. Usuń osobę po numerze.");
        System.out.println("\n3. Wypisz osoby.");
        System.out.println("\n4. Sortuj po nazwisku.");
        System.out.println("\n5. Sortuj po nazwisku i imieniu");
        System.out.println("\n6. Sortuj po nazwisku, imieniu oraz wieku.");
        System.out.println("\n7. Wyjscie z programu.\n");
        wybor = sc.nextInt();
            if (wybor == 1) {
                System.out.println("\nPodaj nazwisko: ");
                nazwisko = sc.next();
                System.out.println("\nPodaj imie: ");
                imie = sc.next();
                System.out.println("\nPodaj wiek: ");
                wiek = sc.nextInt();

                Person osoba = new Person(nazwisko, imie, wiek);
                System.out.println(osoba.toString());
                osoby.add(osoba);

            }

            if (wybor == 2) {
                System.out.println("\nPodaj numer osoby do usunięcia: ");
                wybor = sc.nextInt();
                //sprawdzamy czy podana liczba nie jest większa od łącznej liczby osób w liście
                if (wybor > osoby.size()){
                    System.out.println("\nNie ma takiej osoby na liście.");
                }else {
                    System.out.println("\nUsuwam osobę:" + osoby.get(wybor - 1).toString());
                    /////////////////////////////////////////////////////////////////////////////
                    // -1 by użytkownik podawał numerki od jeden a nie od zera
                    /////////////////////////////////////////////////////////////////////////////
                    osoby.remove(wybor - 1);
                }
            }

            if (wybor == 3) {
                for (int i=0;i<osoby.size();i++) {
                    System.out.println(osoby.get(i).toString());
                }
            }
            if (wybor == 4) {
                /////////////////////////////////////////////////////////////////////////////
                // Użycie zmodyfikowanej metody comparatora z klasy Person
                /////////////////////////////////////////////////////////////////////////////
                Collections.sort(osoby);
            }
            if (wybor == 5) {
                /////////////////////////////////////////////////////////////////////////////
                // Użycie zmodyfikowanej metody comparatora z osobnej klasy comparatora
                /////////////////////////////////////////////////////////////////////////////
                Collections.sort(osoby, new PersonNameComparator());
            }
            if (wybor == 6) {
                /////////////////////////////////////////////////////////////////////////////
                // Użycie zmodyfikowanej metody comparatora z osobnej klasy comparatora
                /////////////////////////////////////////////////////////////////////////////
                Collections.sort(osoby, new PersonAgeComparator());
            }
            if (wybor == 7) {
                koniec=0;
            }
        } while (koniec == 1);
    }
}