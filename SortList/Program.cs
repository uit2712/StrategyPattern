using SortList.ConcreteStrategies.People;
using SortList.Context;
using System;

namespace SortList
{
    class Program
    {
        static void Main(string[] args)
        {
            Family family = new Family();
            Console.WriteLine(family.ToString());

            family.Sort(new SortListPeopleByAge());
            Console.WriteLine(family.ToString());

            family.Sort(new SortListPeopleByName());
            Console.WriteLine(family.ToString());
        }
    }
}
