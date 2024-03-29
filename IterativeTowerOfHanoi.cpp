#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> t[3];
   int n;
   cout << "Please enter the number of rings to move: ";
   cin >> n;
   cout << endl;
   // The initial value of to depends on whether n is odd or even
   int from = 0, to = ___, candidate = 1, move = 0;
   
   // Initialize the towers
   for(int i = n + 1; i >= 1; --i) {
      t[0].push_back(i);
      t[1].push_back(n+1);
      t[2].push_back(n+1);
   }
   
   while (t[1].size() < n+1) { // while t[1] does not contain all of the rings
      cout << "Move #" << ++move << ": Transfer ring " << candidate << " from tower " << char(from+'A') << " to tower " << char(to+'A') << "\n";
      
      // Move the ring from the "from tower" to the "to tower" (first copy it, then delete it from the "from tower")
      ___
      ___
      
      // from = the index of the tower with the smallest ring that has not just been moved: (to+1)%3 or (to+2)%3
      if (___)
         from = ___
      else
         from = ___
         
      // candidate = the ring on top of the t[from] tower
      candidate = ___
         
      // to = the index of the closest tower on which the candidate can be placed: (from+1)%3 or (from+2)%3
      // (compare the candidate with the ring on the closer tower; which tower is "closer" depends on whether n is odd or even)
      if (___)
         to = ___
      else
         to = ___
   }
   return 0;
}

/*
   Please enter the number of rings to move: 4

   Move #1: Transfer ring 1 from tower A to tower C
   Move #2: Transfer ring 2 from tower A to tower B
   Move #3: Transfer ring 1 from tower C to tower B
   Move #4: Transfer ring 3 from tower A to tower C
   Move #5: Transfer ring 1 from tower B to tower A
   Move #6: Transfer ring 2 from tower B to tower C
   Move #7: Transfer ring 1 from tower A to tower C
   Move #8: Transfer ring 4 from tower A to tower B
   Move #9: Transfer ring 1 from tower C to tower B
   Move #10: Transfer ring 2 from tower C to tower A
   Move #11: Transfer ring 1 from tower B to tower A
   Move #12: Transfer ring 3 from tower C to tower B
   Move #13: Transfer ring 1 from tower A to tower C
   Move #14: Transfer ring 2 from tower A to tower B
   Move #15: Transfer ring 1 from tower C to tower B

*/