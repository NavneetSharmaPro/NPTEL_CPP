B(const A& r)// Fill the blanks with proper
  {
    i=r.get();// conversion operator or Constructor
  }
operator A()
  {
    return A(i);
  }
  // Write the appropriate constructor or conversion operator function here


  operator char*()
  {
    return str;
  }

  }; // End of class A
  int main() {
      char input[20];
      cin >> input;

      A a(input);

      // A ==> char *
      char *s = static_cast<char*>(a);

      strcat(s, "-success");
      cout << s;

      return 0;
  }
