using SortList.Entities;
using SortList.Strategies;
using System;
using System.Collections.Generic;

namespace SortList.ConcreteStrategies.People
{
    class SortListPeopleByName : SortListStrategy<Person>
    {
        public SortListPeopleByName()
        {
            Console.WriteLine("---------Sort by Name---------");
        }

        public void Sort(List<Person> lstPeople)
        {
            lstPeople.Sort((p1, p2) => string.Compare(p1.Name, p2.Name));
        }
    }
}
