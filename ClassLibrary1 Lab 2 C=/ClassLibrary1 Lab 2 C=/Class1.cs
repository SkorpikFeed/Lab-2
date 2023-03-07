using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
namespace Strin
{
    public class Str
    {
        private string value;
        public Str() { }
        ~Str() { }
        public string Value
        {
            get { return value; }
            set { this.value = value; }
        }
        public int Size()
        {
            int count = 0;
            foreach (char c in value)
            {
                count++;
            }
            return count;
        }
        public void Delete5()
        {
            string temp = "";
            for (int i = 0; i < Size(); i++)
            {
                if (value[i] != '5')
                {
                    temp += value[i];
                }
            }
            value = temp;
        }
        public void Change(string New)
        {
            value = New;
        }
        public void Add(char symb)
        {
            value += symb;
        }
    }
}
