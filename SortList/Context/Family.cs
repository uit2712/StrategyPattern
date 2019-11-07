using SortList.Entities;
using SortList.Strategies;
using System.Collections.Generic;

namespace SortList.Context
{
    class Family
    {
        private List<Person> _people = new List<Person>();

        public Family()
        {
            InitMembers();
        }

        public void Sort(SortListStrategy<Person> sortType)
        {
            sortType?.Sort(_people);
        }

        private void InitMembers()
        {
            _people.Add(new Person("Father", 47));
            _people.Add(new Person("Mother", 45));
            _people.Add(new Person("Daughter", 20));
            _people.Add(new Person("Son", 18));
        }

        public override string ToString()
        {
            string result = string.Empty;
            foreach (Person person in _people)
                result += person.ToString() + "\n";

            return result;
        }
    }
}
