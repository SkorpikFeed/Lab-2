using System;
using Strin;
class Program
{
    public static void Main()
    {
        Str First = new Str();
    start:
        Console.Write("Enter values: ");
        string B = Console.ReadLine();
        foreach (char c in B)
        {
            if (c >= '0' && c <= '9') { }
            else
            {
                Console.Clear();
                Console.WriteLine("Your input cannot contain letters.");
                goto start;
            }
        }
        First.Value = B;
        Console.Clear();
        Console.Write("Your string: ");
        for (int i = 0; i < First.Size(); i++)
        {
            Console.Write(First.Value[i]);
            Console.Write(" ");
        }
        Console.WriteLine();
        Console.WriteLine("(If you want to delete '5' type 'DELETE')");
        Console.WriteLine("(If you want to know the size of the string type 'SIZE')");
        Console.WriteLine("(If you want to replace a string with another type 'CHANGE')");
        Console.WriteLine("(If you want to add symbol in the string type 'ADD')");
        Console.WriteLine("(If you want to stop type 'STOP')");
        for (int i = 0; i != -1; i++)
        {
            string A = Console.ReadLine();
            if (A == "DELETE")
            {
                First.Delete5();
                Console.Write("Your string:");
                for (int j = 0; j < First.Size(); j++)
                {
                    Console.Write(First.Value[j]);
                    Console.Write(" ");
                }
                Console.WriteLine();
            }
            else if (A == "SIZE")
            {
                Console.Write("Your size: ");
                Console.WriteLine(First.Size());
            }
            else if (A == "STOP") break;
            else if (A == "ADD")
            {
                Console.Write("Enter symbol:");
                char C = (char)Console.Read();
                Console.ReadLine();
                First.Add(C);
                Console.Write("Your string: ");
                for (int j = 0; j < First.Size(); j++)
                {
                    Console.Write(First.Value[j]);
                    Console.Write(" ");
                }
                Console.WriteLine();
            }
            else if (A == "CHANGE")
            {
                Console.WriteLine("Enter new string:");
                again:
                string C = Console.ReadLine();
                foreach (char c in C)
                {
                    if (c >= '0' && c <= '9') { }
                    else
                    {
                        Console.WriteLine("Your input cannot contain letters. Try again");
                        goto again;
                    }
                }
                First.Change(C);
                Console.Write("Your new string: ");
                for (int j = 0; j < First.Size(); j++)
                {
                    Console.Write(First.Value[j]);
                    Console.Write(" ");
                }
                Console.WriteLine();
            }
            else Console.WriteLine("Try again");
        }
    }
}