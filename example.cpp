#include<bits/stdc++.h>
using namespace std;
int main()
{                      // need to include these basic lines  & build system as "competitivep" of code in your compilation of the code.

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("inputf.in", "r", stdin);
    // for writing output to output.txt
    freopen("outputf.in", "w", stdout);
#endif
 

int a;
cin>>a;
cout<<a;
cout<<"\n hi this is shivam rai"; 

	return 0 ;




// to set up 3 window , editor ,inputf.in,outputf.in
    //1 goto view->layout->columns-3
    //2 goto  view ->groups->max coulumn-2

    //open respective files inputf.in,outputf.in

//Also need to set up our own bulid system, refer youtube
//in tools option

}


/* METHOD 2 : EASY
simple trick from luv
1.go to tool ->create new build system copy paste given below code . And save the file with  " c++14.sublime-build "
  code :
  
  {
"cmd": ["g++.exe","-std=c++14", "${file}", "-o", "${file_base_name}.exe", "&&" , "${file_base_name}.exe<inputf.in>outputf.in"],
"selector":"source.cpp",
"shell":true,
"working_dir":"$file_path"
 }

2.open 3 tabs in sublime , write c++ code in 1 tab save as .cpp  , in 2 tab create inputf.in as new file , in 3 tab create outputf.in as new file.
3.now in 1 tab  , select the build system as c++14 , then build the code :  ctrl+B 
4.done u can see the output in the 3 tab.

*/
