using SortList.Entities;
using SortList.Strategies;
using System;
using System.Collections.Generic;

namespace SortList.ConcreteStrategies.People
{
    class SortListPeopleByAge : SortListStrategy<Person>
    {
        public SortListPeopleByAge()
        {
            Console.WriteLine("---------Sort by Age---------");
        }

        public void Sort(List<Person> lstPeople)
        {
            lstPeople.Sort((p1, p2) => p1.Age - p2.Age);
        }
    }
}
