 #include<iostream>
 #include<cstdlib>
using namespace std; 
template <class G>
class vach{
 G me,u;
 public:
  vach(G s,G p)
  {
    me=s;
    u=p;
  }
  G mast()
  {
    return (me<u?me:u);
  }
}; 
// Function to get the missing number 

// Driver Code 
int main()
{
  vach <int> tu(30,67);
  cout<<tu.mast();
  return 0;
} 

