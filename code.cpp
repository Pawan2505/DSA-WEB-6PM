// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World!";
//     return 0;
// }



// #include<iostream>
// // using namespace std;
// int main(){
//     std::cout<<"Hello World!"<<std::endl;
//     std::cout<<"Class\tHello!";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World!"<<endl;
//     cout<<"Class\tHello!";
//     return 0;
// }


// Constant

// #include<iostream>
// using namespace std;

// int main(){
//    const int DOB;  // Declaration
//    DOB = 2000;  // Insilisation   -> error

//    cout<<"Date of Birth : "<<DOB<<endl;


// }




// #include<iostream>
// using namespace std;

// int main(){
//    const int DOB = 2000;  // Declaration
// //    DOB = 2000;  // Insilisation   -> error

//    cout<<"Date of Birth : "<<DOB<<endl;


// }


// #include<iostream>
// #define DOB 2000   // malloc
// using namespace std;

// int main(){

//    cout<<"Date of Birth : "<<DOB<<endl;

// }




// #include<iostream>
// #define DOB 2000   // malloc
// using namespace std;

// int main(){

//     // DOB = 3000;   // Not Allowed

//    cout<<"Date of Birth : "<<DOB<<endl;

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     int b;

//     cout<<"Please enter value of a : ";
//     cin>>a;
//        cout<<"Please enter value of b : ";
//     cin>>b;


//     cout<< "Output : "<<endl;

//     cout<<"Value of a : "<<a<<endl;
//     cout<<"Value of b : "<<b<<endl;

// }




// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     int b;

//     cout<<"Please enter value of a  and b: ";
//     cin>>a>>b;
    


//     cout<< "Output : "<<endl;

//     cout<<"Value of a : "<<a<<endl;
//     cout<<"Value of b : "<<b<<endl;

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     int b;

//     int a;   // we can not redeclared any variable twice

//     cout<<"Please enter value of a  and b: ";
//     cin>>a>>b;
    


//     cout<< "Output : "<<endl;

//     cout<<"Value of a : "<<a<<endl;
//     cout<<"Value of b : "<<b<<endl;

// }




// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;  //global variable

//     cout<<"Value1 = "<<a<<endl;  //10

//     {  // Block -> local block
//         int a = 20; // local variable
//         cout<<"Value2 = "<<a<<endl;  //20
//     }

//     cout<<"Value3 = "<<a<<endl; //10
   

// }



// #include<iostream>
// using namespace std;

// int  a = 70;

// int main(){

//     int a = 10; 

//     cout<<"Value1 = "<<a<<endl;  //10

//     {  // Block
//         int a = 20;
//         cout<<"Value2 = "<<a<<endl;  //20
//     }

//     cout<<"Value3 = "<<a<<endl; //10
   
//     cout<<"Value4 = "<<::a<<endl;
// }



// Namespace 


// #include<iostream>
// using namespace std;

// int  a = 70;

// namespace nb{
//     int a = 100;
// }
// namespace na{
//     int a = 99;
// }

// int main(){



//     int a = 10; 

//     cout<<"Value1 = "<<a<<endl;  //10

//     {  // Block
//         int a = 20;
//         cout<<"Value2 = "<<a<<endl;  //20
//     }

//     cout<<"Value3 = "<<a<<endl; //10
   
//     cout<<"Value4 = "<<::a<<endl;
//     cout<<"Value5 = "<<nb::a<<endl;
//     cout<<"Value6 = "<<na::a<<endl;
// }



// #include<iostream>
// using namespace std;

// int  a = 70;



// int main(){

// namespace nb{
//     int a = 100;
// }
// namespace na{
//     int a = 99;
// }

//     int a = 10; 

//     cout<<"Value1 = "<<a<<endl;  //10

//     {  // Block
//         int a = 20;
//         cout<<"Value2 = "<<a<<endl;  //20
//     }

//     cout<<"Value3 = "<<a<<endl; //10
   
//     cout<<"Value4 = "<<::a<<endl;
//     cout<<"Value5 = "<<nb:a<<endl;
//     cout<<"Value6 = "<<na:a<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a =10;
//     int b = 5;

//     int result = a&b;

//     cout<<"Result = "<<result<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 20;
//     int c = 30;

//     if((a>b ) && (a<c)){
//         cout<<"Proceed ....";
//     }
//     else{
//         cout<<"Sorry..";
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 20;
//     int c = 30;

//     if((a>b ) || (a<c)){
//         cout<<"Proceed ....";
//     }
//     else{
//         cout<<"Sorry..";
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
 
//  bool isValue = true;

//  cout<<(!isValue)<<endl;
// }

// Terniory operator

// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Please enter your Age : ";
//     cin>>age;

//     (age>=18)?cout<<"Elegible":cout<<"Sorry, You are not eligible";
// }


//Bitwise operator

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Result : "<<(a&b)<<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Result : "<<(a|b)<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Result : "<<(a^b)<<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 100;
   

//     cout<<"Result : "<<(~a)<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10<<2;
   

//     cout<<"Result : "<<(a)<<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10>>2;
   

//     cout<<"Result : "<<(a)<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     while(a>=1){
//         cout<<a<<endl;
//         a--;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//    do{
//         cout<<a<<endl;
//         a--;
//     } while(a>=1);
// }


// #include<iostream>
// using namespace std;

// int main(){
//   //Outer Loop -> row

//   for(int row = 0; row<4; row++){
//     //Inner loop -> col
//     for(int col = 0; col<4; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
//   }

// }


// #include<iostream>
// using namespace std;

// int main(){


//   for(int row = 0; row<4; row++){
   
//     if(row == 0 || row == 3){
//         cout<<"****"<<endl;
//     }else{
//         cout<<"*  *"<<endl;
//     }
//   }

// }





// #include<iostream>
// using namespace std;

// int main(){

// //row
//   for(int row = 0; row<4; row++){
   
//   // space

//   for(int space = 0; space<row; space++){
//     cout<<" ";
//   }

//   //star

//   for(int star = 0; star<4; star++){
//     cout<<"*";
//   }

//   cout<<endl;

//   }

// }



// #include<iostream>
// using namespace std;

// int main(){
//   int arr[5];   // Array variable declaration
//   arr[0]=10;
//   arr[1]=20;
//   arr[2]=30;
//   arr[3]=40;
//   arr[4]=50;

//   cout<<arr[0]<<endl;
//   cout<<arr[1]<<endl;
//   cout<<arr[2]<<endl;
//   cout<<arr[3]<<endl;
//   cout<<arr[4]<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//   int arr[5] = {10,20,30,40,50};   // Array variable declaration


//   cout<<arr[0]<<endl;
//   cout<<arr[1]<<endl;
//   cout<<arr[2]<<endl;
//   cout<<arr[3]<<endl;
//   cout<<arr[4]<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//   int arr[5];   // Array variable declaration

//   cout<<"Please insert element inside array : "<<endl;

//   for(int i = 0; i <=4; i++){
//     cout<<"Please enter element at "<<i<<" index : ";
//     cin>>arr[i];
//   }

//   cout<<"Array : "<<endl;


//   cout<<arr[0]<<endl;
//   cout<<arr[1]<<endl;
//   cout<<arr[2]<<endl;
//   cout<<arr[3]<<endl;
//   cout<<arr[4]<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//   int arr[5];   // Array variable declaration

//   cout<<"Please insert element inside array : "<<endl;

//   for(int i = 0; i <=4; i++){
//     cout<<"Please enter element at "<<i<<" index : ";
//     cin>>arr[i];
//   }

//   cout<<"Array : "<<endl;

//   for(int i = 0; i <=4; i++){
//   cout<<arr[i]<<" ";
//   }

// }


// Update Array : 


// #include<iostream>
// using namespace std;

// int main(){
//   int arr[5];   // Array variable declaration

//   cout<<"Please insert element inside array : "<<endl;

//   for(int i = 0; i <=4; i++){
//     cout<<"Please enter element at "<<i<<" index : ";
//     cin>>arr[i];
//   }

//   cout<<"Array : "<<endl;

//   for(int i = 0; i <=4; i++){
//   cout<<arr[i]<<" ";
//   }


//   // Update Array at specific index position : 

//   arr[3] = 999;
//   arr[4] = 1000;

//   cout<<"\n Updated Array : "<<endl;

//   for(int i = 0; i <=4; i++){
//   cout<<arr[i]<<" ";
//   }

// }


// For Each loop : 


// #include<iostream>
// using namespace std;

// int main(){
//   int arr[5] = {11,25,35,68,35};

//   for(int element : arr){

//     cout<<element<<" ";
//   }

// }


// #include<iostream>
// using namespace std;

// int main(){
//   int arr[5];

// cout<<"Please enter element in array : "<<endl;

//    for(int element : arr){   //Not ok

//     cin>>element;

//   }

//   for(int element : arr){

//     cout<<element<<" ";
//   }

// }


// #include<iostream>
// using namespace std;

// int main(){
  
//   cout<<"Int size : "<<sizeof(int)<<endl;

//   int a = 10;

//   cout<<sizeof a<<endl;


//   int arr[] = {11,25,35,68,35,3589,58};
  
//   cout<<sizeof(arr)<<endl;
//   cout<<sizeof(arr)/sizeof(arr[0])<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[2][2];

//     arr[0][0] = 11;
//     arr[0][1] = 22;
//     arr[1][0] = 111;
//     arr[1][1] = 221;

//     cout<<arr[0][0]<<endl;
//     cout<<arr[0][1]<<endl;
//     cout<<arr[1][0]<<endl;
//     cout<<arr[1][1]<<endl;
   


// }



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[2][2] = {{11,22},
//                      {111,222}};



//     cout<<arr[0][0]<<endl;
//     cout<<arr[0][1]<<endl;
//     cout<<arr[1][0]<<endl;
//     cout<<arr[1][1]<<endl;
   


// }


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[2][2];

// cout<<"Please enter element in 2D array : "<<endl;

// for(int row = 0; row <2; row++){
//     for(int col = 0; col<2; col++){
//         cout<<"Please enter element at "<<row<< " row and "<<col<<" col : ";
//         cin>>arr[row][col];
//     }
// }


// cout<<"2D Array : "<<endl;

// for(int row = 0; row <2; row++){
//     for(int col = 0; col<2; col++){
        
//         cout<<arr[row][col]<<" ";
//     }
// }

// }




// #include<iostream>
// using namespace std;

// int addition(){
//     cout<<"Function Called...."<<endl;
// }

// int main(){
//   cout<<"Main Called...."<<endl;
//   addition();
// }


// Take nothing return nothing

// #include<iostream>
// using namespace std;

// int addition();  // function declaration

// int main(){
//   cout<<"Main Called...."<<endl;
//   addition();  // function call
// }

// int addition(){   // function definition
//     cout<<"Function Called...."<<endl;
// }


// // Take something return nothing

// #include<iostream>
// using namespace std;

// int addition(int x , int y){   // parameter
//    int result = x+y;
//    cout<<result<<endl;
// }

// int main(){
//     int a = 10;
//     int b = 20;
 
//   addition(a,b);  // argument

// }

// Take something return something

// #include<iostream>
// using namespace std;

// int addition(int x , int y){   // parameter
//    int result = x+y;
//  return result;
// }

// int main(){
//     int a = 10;
//     int b = 20;
 
  

//   cout<< addition(a,b);  // argument

// }



//  Take nothing return something


// #include<iostream>
// using namespace std;

// int addition(){  
//    int a = 10;
//     int b = 20;
//    int result = a+b;
//  return result;
// }

// int main(){
 
//  cout<<addition();  // argument

// }


// #include<iostream>
// using namespace std;

// void fun(){

//     auto display = [](){
//         cout<<"Nested Function"<<endl;
//     };

//     display();
// }

// int main(){
// fun();
// }

// https://docs.google.com/document/d/12UzMEp_w0DqWyMAjm5ozko5NvQiWxe6Vm5lNbZoeuoc/edit?tab=t.0


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     int *ptr1 = &a;

//     int **ptr2  = &ptr1;
//     cout<<&a<<endl;
//     cout<<ptr1<<endl;
//     cout<<*ptr2<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//    int *ptr = 10;  //Not OK

//    cout<<*ptr<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//    int *ptr = new int;   //allocated memory

//    *ptr = 10;

//    cout<<*ptr<<endl;
// }


// Reference variable

// #include<iostream>
// using namespace std;

// int main(){
// int a = 10;

// int &ref = a;

// cout<<"Value : "<<ref<<endl;
// cout<<"Value a : "<<a<<endl;


// cout<<&a<<endl;
// cout<<&ref<<endl;

// }


// #include<iostream>
// using namespace std;

// void fun(int &num){

//     cout<<num<<endl;
// }

// int main(){
// int a = 10;

// fun(a);
// }


//  Pointr -> array


// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {12,2,34,56,7};

//     int *ptr = arr;

//     cout<<&arr[0]<<endl;
//     cout<<&arr[1]<<endl;
//     cout<<ptr<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {12,2,34,56,7};

//     int *ptr = arr;

//     cout<<*(ptr)<<endl;
//     cout<<*(ptr+1)<<endl;
//     cout<<*(ptr+2)<<endl;
//     cout<<*(ptr+3)<<endl;
//     cout<<*(ptr+4)<<endl;
// }


// https://docs.google.com/document/d/1Kq9ZoyhWSeNQPa5PBesevGWlB-chXS1ljLd3C5KKjf8/edit?tab=t.0

// https://docs.google.com/document/d/1W0L7Fafkn-dUvm8HPruiocHzql456mWnEeXNxRoHMv0/edit?tab=t.0



// #include<iostream>
// using namespace std;

// void fun(int arr[]){
//     for(int i = 0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){

//     int arr[5] = {12,2,34,56,7};

//     fun(arr);

// }



// #include<iostream>
// using namespace std;

// void fun(int *ptr){
//     for(int i = 0; i<5; i++){
//         cout<<*(ptr+i)<<" ";
//     }
// }

// int main(){

//     int arr[5] = {12,2,34,56,7};

//     fun(arr);

// }



// #include<iostream>
// using namespace std;

// void fun(int *ptr){
//     for(int i = 0; i<5; i++){
//         cout<<*(ptr+i)<<" ";
//     }
// }

// int main(){

//     int arr[5] = {12,2,34,56,7};

//     fun(arr);

// }


// #include <iostream>
// using namespace std;

// int main() {
//     // Original array
//     int original[3] = {1, 2, 3};

//     // Shallow copy: Copy the reference (address)
//     int *shallowCopy = original;

//     // Modify shallow copy
//     shallowCopy[0] = 100;

//     // Print original and shallowCopy
//     cout << "Original Array: ";
//     for (int i = 0; i < 3; i++) {
//         cout << original[i] << " "; // The original array is affected
//     }
//     cout << endl;

//     cout << "Shallow Copy: ";
//     for (int i = 0; i < 3; i++) {
//         cout << shallowCopy[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     // Original array
//     int original[3] = {1, 2, 3};

//     // Deep copy: Allocate new memory and copy data
//     int deepCopy[3];

//     for (int i = 0; i < 3; i++) {
//         deepCopy[i] = original[i];
//     }

//     // Modify deepCopy
//     deepCopy[0] = 100;

//     // Print original and deepCopy
//     cout << "Original Array: ";
//     for (int i = 0; i < 3; i++) {
//         cout << original[i] << " "; // The original array is unaffected
//     }
//     cout << endl;

//     cout << "Deep Copy: ";
//     for (int i = 0; i < 3; i++) {
//         cout << deepCopy[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// https://docs.google.com/document/d/1W0L7Fafkn-dUvm8HPruiocHzql456mWnEeXNxRoHMv0/edit?tab=t.0


// #include<iostream>
// using namespace std;

// int main(){

//     string str = "Pawan Maurya";

//     cout<<str<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
    
//     string str = "Pawan\0 Maurya";

//     cout<<str<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
    
//     string str = "Pawan Maurya";   // string is also character array;

//     cout<<str<<endl;

//     cout<<str[0]<<endl;

// }



// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//     string str = " Pawan Maurya ";   // string is also character array;

//     cout<<str<<endl;

//     cout<<str[0]<<endl;

//     cout<<str.size()<<endl;
    
// }



// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//     string str = " Pawan Maurya ";   // string is also character array;

//     cout<<str<<endl;

//     cout<<str[0]<<endl;

//     cout<<str.size()<<endl;
//     cout<<str.length()<<endl;
    
// }




// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//     string str = "Pawan Maurya";   // string is also character array;

//     for(int i = 0; i<str.length(); i++){
//         cout<<str[i]<<endl;
//     }
    
// }
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//     string str = "Pawan Maurya";   // string is also character array;

//     for(int i = 0; i<str.length(); i++){
//         cout<<str[i];
//     }
    
// }
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//     string str = "Pawan Maurya";   // string is also character array;

//     for(int i = 0; i<str.length(); i++){
//         cout<<str[i];
//     }
    
// }
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//     string str1 = "Pawan";
//     string str2 = "Maurya";

//     string s3 = str1 + " " + str2;

//     cout<<s3<<endl;
    
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//     string str1 = "Pawan";
//     string str2 = " Maurya";

//     cout<<str1.append(str2)<<endl;
    
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//     string str1 = "Pawan";
//     string str2 = " Maurya";

//     // strcat(str1+str2);  // not working 

//     cout<<str1<<endl;
    
// }
// #include<iostream>
// #include<string>
// #include <cstring> 
// using namespace std;

// int main(){
    
//     char str1[15] = "Pawan";
//     char str2[8] = " Maurya";

//     strcat(str1,str2);  

//     cout<<str1<<endl;
    
// }


// #include<iostream>
// #include<string>
// #include <cstring> 
// using namespace std;

// int main(){
    
//  string str = "Pawan";

//  cout<<str.find("w");
    
// }

// #include<iostream>
// #include<string>
// #include <cstring> 
// using namespace std;

// int main(){
    
//  string str = "Pawan";

//  cout<<str.at(2);
    
// }
// #include<iostream>
// #include<string>
// #include <cstring> 
// using namespace std;

// int main(){
    
//  string str = "Pawan";

//  cout<<str.at(2);
    
// }


// #include<iostream>
// #include<string>
// #include <cstring> 
// using namespace std;

// int main(){
    
//  string str = "Pawan";

// cout<<str.empty()<<endl;

// if(!(str.empty())){
//     cout<<"String is not Empty!"<<endl;
// }
    
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//  string str = "Pawan";

//  str.clear();

// cout<<str.empty()<<endl;

    
// }
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//  string str = "Pawan";

// cout<<str.insert(3,"Hello")<<endl;
   
// }
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//  string str = "Pawan";

// cout<<str.erase(2,1)<<endl;
   
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//  string str = "Pawan";

// cout<<str.erase(2,2)<<endl;
   
// }
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
//  string str = "Pawan" + to_string(123);

// cout<<str<<endl;
   
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    
// string s1 = "123";

// int sum = 100 + stoi(s1);
// cout<<sum<<endl;

   
// }


// #include<iostream>
// using namespace std;

// // Create class

// class Person{

// }

// int main(){
// Person p1;  // create object 
// }



// #include<iostream>
// using namespace std;

// class Person{

//     public :
//     // Data member
//     string name;
//     int age;
//     int salary;


//     public : 
//     // Member function

//     void displayDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// int main(){
// Person poojan;  // create object 

// poojan.name = "Poojan";
// poojan.age = 20;
// poojan.salary = 900000;

// poojan.displayDetails();

// }


// #include<iostream>
// using namespace std;

// class Person{

//     private :
//     // Data member
//     string name;
//     int age;
//     int salary;


//     public : 
//     // Member function

//     void setDetails(string name, int age, int salary){

//         this->name = name;
//         this->age = age;
//         this->salary = salary;

//     }

//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// int main(){
// Person poojan;  // create object  => non static data member unko memory.
// poojan.setDetails("Poojan Shirvastav",20,900000);

// poojan.getDetails();

// cout<<"\n Size of Class : "<<sizeof(Person)<<endl;


// }


#include<iostream>
using namespace std;

class Person{

    private :
    // Data member
    string name;
    int age;
    int salary;

     public : 

     Person(){
        name = "xyz";
        age = 100;
        salary = 0;
     }
     

     Person(string name, int age, int salary){
        this->name = name;
        this->age = age;
        this->salary = salary;
     }


    void getDetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Salary : "<<salary<<endl;
    }

};

int main(){
Person poojan("Poojan Shirvastav",20,900000);  // create object  => non static data member ko memory milti hai. aur jab ham object banate hai us time   constructor call hota hai
Person poojan1("Poojan1 Shirvastav",11,900000);  // create object  => non static data member ko memory milti hai. aur jab ham object banate hai us time   constructor call hota hai
Person poojan2("Poojan2 Shirvastav",22,900000);  // create object  => non static data member ko memory milti hai. aur jab ham object banate hai us time   constructor call hota hai
Person poojan3("Poojan3 Shirvastav",9,900000);  // create object  => non static data member ko memory milti hai. aur jab ham object banate hai us time   constructor call hota hai
Person poojan4("Poojan3 Shirvastav",69,900000);  // create object  => non static data member ko memory milti hai. aur jab ham object banate hai us time   constructor call hota hai
poojan.getDetails();
poojan1.getDetails();
poojan2.getDetails();
poojan3.getDetails();
poojan4.getDetails();


Person p;
p.getDetails();
cout<<"\n Size of Class : "<<sizeof(Person)<<endl;


}


// https://docs.google.com/document/d/1zGlyazKn16JqkH2AOGI_FM3XDU3zYIseb4P69aOxguU/edit?tab=t.0