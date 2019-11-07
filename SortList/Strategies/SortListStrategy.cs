using System.Collections.Generic;

namespace SortList.Strategies
{
    interface SortListStrategy<T> where T: class
    {
        void Sort(List<T> lstObjects);
    }
}
