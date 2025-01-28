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


// #include<iostream>
// using namespace std;

// class Person{

//     private :
//     // Data member
//     string name;
//     int age;
//     int salary;

//      public : 

//      Person(){
//         name = "xyz";
//         age = 100;
//         salary = 0;
//      }
     

//      Person(string name, int age, int salary){
//         this->name = name;
//         this->age = age;
//         this->salary = salary;
//      }


//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// int main(){
// Person poojan("Poojan Shirvastav",20,900000);  // create object  => non static data member ko memory milti hai. aur jab ham object banate hai us time   constructor call hota hai
// Person poojan1("Poojan1 Shirvastav",11,900000);  // create object  => non static data member ko memory milti hai. aur jab ham object banate hai us time   constructor call hota hai
// Person poojan2("Poojan2 Shirvastav",22,900000);  // create object  => non static data member ko memory milti hai. aur jab ham object banate hai us time   constructor call hota hai
// Person poojan3("Poojan3 Shirvastav",9,900000);  // create object  => non static data member ko memory milti hai. aur jab ham object banate hai us time   constructor call hota hai
// Person poojan4("Poojan3 Shirvastav",69,900000);  // create object  => non static data member ko memory milti hai. aur jab ham object banate hai us time   constructor call hota hai
// poojan.getDetails();
// poojan1.getDetails();
// poojan2.getDetails();
// poojan3.getDetails();
// poojan4.getDetails();


// Person p;
// p.getDetails();
// cout<<"\n Size of Class : "<<sizeof(Person)<<endl;


// }


// // https://docs.google.com/document/d/1zGlyazKn16JqkH2AOGI_FM3XDU3zYIseb4P69aOxguU/edit?tab=t.0



// #include<iostream>
// using namespace std;

// class Student{
//     private:
//     string name;
//     int age;
//     int marks;

//     public :

//     void setDetails(string name, int age, int marks){
//         this->name = name;
//         this->age  = age;
//         this->marks = marks;
//     }

//     void getDetails(){
//         cout<<"Name : "<<this->name<<endl;
//         cout<<"Age : "<<this->age<<endl;
//         cout<<"Marks : "<<this->marks<<endl;
//     }
    
// };

// int main(){

//     Student *s = new Student();
//     s->setDetails("Pawan",24,100);
//     s->getDetails();



// }

// #include<iostream>
// using namespace std;

// class Student{
//     private:
//     string name;
//     int age;
//     int marks;

//     public :

//   Student(string name, int age, int marks){
//     this->name = name;
//     this->age = age;
//     this->marks = marks;
//   }

//     void getDetails(){
//         cout<<"Name : "<<this->name<<endl;
//         cout<<"Age : "<<this->age<<endl;
//         cout<<"Marks : "<<this->marks<<endl;
//     }
    
// };

// int main(){

//     Student *s = new Student("Pawan",24,100);
   
//     s->getDetails();


// }


// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     string name;
//     int age;
//     int marks;

//     public :

// //   Student(string name, int age, int marks){
// //     this->name = name;
// //     this->age = age;
// //     this->marks = marks;
// //   }

//     void getDetails(){
//         cout<<"Name : "<<this->name<<endl;
//         cout<<"Age : "<<this->age<<endl;
//         cout<<"Marks : "<<this->marks<<endl;
//     }
    
// };

// int main(){

//     Student s[2];
   
//    s[0].name = "Pawan";
//    s[0].age = 24;
//    s[0].marks = 100;
   
//    s[1].name = "Poojan";
//    s[1].age = 20;
//    s[1].marks = 100;

//    s[0].getDetails();
//    s[1].getDetails();


// }



// #include<iostream>
// using namespace std;

// class Student{
//     private:
//     string name;
//     int age;
//     int marks;

//     public :

//  void setDetails(string name, int age, int marks){
//     this->name = name;
//     this->age = age;
//     this->marks = marks;
//   }

//     void getDetails(){
//         cout<<"Name : "<<this->name<<endl;
//         cout<<"Age : "<<this->age<<endl;
//         cout<<"Marks : "<<this->marks<<endl;
//     }
    
// };

// int main(){

//     Student s[2];
   
//    s[0].setDetails("Pawan",24,100);
//    s[1].setDetails("Poojan",24,100);

//    s[0].getDetails();
//    s[1].getDetails();

// }



// #include<iostream>
// using namespace std;

// class Student{
//     private:
//     string name;
//     int age;
//     int marks;
//     static int phone;

//     public :

//  Student(string name, int age, int marks){
//     this->name = name;
//     this->age = age;
//     this->marks = marks;
//   }

//     void getDetails(){
//         cout<<"Name : "<<this->name<<endl;
//         cout<<"Age : "<<this->age<<endl;
//         cout<<"Marks : "<<this->marks<<endl;
//     }
    
// };

// int main(){

//     Student s[2] = { Student("Pawan", 24, 100), Student("Poojan", 24, 100) };;
   
//    s[0].getDetails();
//    s[1].getDetails();

//     cout<<"Size of class : "<<sizeof(Student)<<endl;
// }



// #include<iostream>
// using namespace std;

// class Student{
//     public :
//     static string name;  // class level variable
//     int age; // instance variable
//     int marks; // instance variable


//     Student(int age, int marks){
//         this->age = age;
//         this->marks = marks;
//     }

//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// string Student::name = "Pawan";

// int main(){

//     Student s1(24,100);
//     Student s2(20,90);

//     s1.display();
//     s2.display();

// }


// #include<iostream>
// using namespace std;

// class Student{
//     public :
//     static string name;  // class level variable
//     int age; // instance variable
//     int marks; // instance variable

//     Student(){
//         cout<<"Achha Ey hota hai parameter less constructor call jab ham object k sath ko argument nhi bhejte hai"<<endl;;
//     }

// //Parametrized constructor
//     Student(int age, int marks){
//         this->age = age;
//         this->marks = marks;
//     }

//    static void display(){
//         cout<<"Name : "<<name<<endl;
    
//     }
//     void display1(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// string Student::name = "Pawan";

// int main(){

//     Student s1(24,100);
//     Student s2(20,90);


//     s1.display1();
//     s2.display1();

//     Student::display();

//     cout<<"Size of class : "<<sizeof(Student)<<endl;


    
//     Student s3;  // parameterless constructor ko call krega

// }


// #include<iostream>
// using namespace std;

// class Student{

//     public : 
//     string name;
//     int age;
//     int marks;
//     string gender;

//     public :


//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//         cout<<"Gender : "<<gender<<endl;
//     }

// };

// int main(){
//     Student s1;

//     s1.name = "Pawan";
//     s1.age = 24;
//     s1.marks = 100;
//     s1.gender = "Male";


//     s1.getDetails();
// }


// #include<iostream>
// using namespace std;

// class Student{

//     private : 
//     string name;
//     int age;
//     int marks;
//     string gender;

//     public :

// // setter method -> insilization

//     void setDetails(string name, int age, int marks, string gender){

//         // this-> => current insistance 

//         this->name = name;
//         this->age = age;
//         this->marks = marks;
//         this->gender = gender;
//     }

// // getter method -> access

//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//         cout<<"Gender : "<<gender<<endl;
//     }

// };

// int main(){
//     Student s1;
//     s1.setDetails("Pawan",24,100,"Male");
//     s1.getDetails();
//     Student s2;
//     s2.setDetails("BCA",24,100,"Other");
//     s2.getDetails();
// }



// #include<iostream>
// using namespace std;

// class Student{
//     public :

//     Student(){
//         cout<<"Constructor called..."<<endl;;
//     }

//     ~Student(){
//         cout<<"Destructor Called.."<<endl;;
//     }
// };

// int main(){

//     Student s1;
//     Student s2;

// }


// #include<iostream>
// using namespace std;

// class Student{

//     public :

//     int *ptr;


//     public :

//     Student(int p){

//         ptr = new int;
//         *ptr = p;
//     }

//     ~Student(){
//         cout<<"Destructor Called.."<<endl;
//         delete ptr;
       
//     }

//     void display(){
//          cout<<"*Ptr store value :  "<<*ptr<<endl;
//         cout<<"Ptr store address : "<<ptr<<endl;
//     }
// };

// int main(){

//     Student s1(10);
//    s1.display();

// }



// #include<iostream>
// using namespace std;

// class Student{

//     public :

//     int *arr;


//     public :

//     Student(int p[]){

//         arr = new int[5];

//        for (int i = 0; i < 5; i++)
//         { 
//             arr[i] = p[i];
//         }
//     }

//     ~Student(){
//         cout<<"\nDestructor Called.."<<endl;
//         delete[] arr;
       
//     }

//     void display(){
        
//         for(int i = 0; i < 5; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//    int p [] = {10,20,30,40,50};
//     Student s1(p);
//    s1.display();

// }




// #include<iostream>
// using namespace std;

// class Student{

//     public :

//     int *arr;


//     public :

//     Student(int p[]){

//         arr = new int[5];

//        for (int i = 0; i < 5; i++)
//         { 
//             arr[i] = p[i];
//         }
//     }

//     ~Student(){
//         cout<<"\nDestructor Called.."<<endl;
//         delete[] arr;
       
//     }

//     void display(){
        
//         for(int i = 0; i < 5; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//    int p [] = {10,20,30,40,50};
//     Student *s1 = new Student(p);
//       s1->display();

//     delete s1;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     int *ptr = &a;

//     cout<<a<<endl;
//     cout<<*ptr<<endl;


//     cout<<&a<<endl;
//     cout<<ptr<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     int *ptr = &a;

//     cout<<a<<endl;
//     cout<<*ptr<<endl;


//     cout<<&a<<endl;
//     cout<<ptr<<endl;
// }

// Copy constructor
// 1. Shallow Copy constructor
// 2. Deep Cop Constructor



// #include<iostream>
// using namespace std;

// class Student{
//     public :
//     string name;
//     int age;

// // parameterless constructor
//     Student(){
//         name = "Pawan";
//         age = 24;
//     }

// // parameterised Constructor
//     Student(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

// // Copy constructor

//     Student(Student &other){
//         this->name = other.name;
//         this->age = other.age;
//     }

//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };


// int main(){
//     Student s1;   // parameterless constructor call

//     s1.display();

//     Student s2("Poojan",20);  // parameterised Constructor

//     s2.display();

//     Student s3 = s2;  // copy constructor => shallow Copy constructor

//     s3.display();

// }



// #include<iostream>
// using namespace std;

// class Student{
//     public :
//         int marks;


//     void display(){
//         cout<<"Student Class!"<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// class Nishit:public Student{
//     public :

//     void display(){
//     cout<<"Child Class!"<<endl;
//     }
// };

// int main(){
//     Nishit n1;

//     n1.marks = 20;

    

//     n1.display();
//     n1.Student::display();
    
// }

// #include<iostream>
// using namespace std;

// class Student{
//     public :
//         int marks;


//     Student(){
//         marks = 50;
//     }


//     void display(){
//         cout<<"Student Class!"<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// class Nishit:public Student{
//     public :

//     void display(){
//     cout<<"Child Class!"<<endl;
//     }
// };

// int main(){
//     Nishit n1;

//      cout<<"Access in main : "<<n1.marks<<endl;

//     n1.display();
//     n1.Student::display();
    
// }


// #include<iostream>
// using namespace std;

// class Student{
//     public :
//         int marks;


//     Student(){
//         marks = 50;
//     }


//     void display(){
//         cout<<"Student Class!"<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// class Nishit:private Student{
//     public :

//     void display(){
//     cout<<"Child Class!"<<endl;
//      cout<<"Marks : "<<marks<<endl;
//     }
// };

// int main(){
//     Nishit n1;

//     //  cout<<"Access in main : "<<n1.marks<<endl; // Not ok

//     n1.display();
//     // n1.Student::display();   // Not Okey
    
// }




// #include<iostream>
// using namespace std;

// class Student{
//     protected :
//         int marks;


//     Student(){
//         marks = 50;
//     }


//     void display(){
//         cout<<"Student Class!"<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// class Nishit:public Student{
//     public :

//     void display(){
//     cout<<"Child Class!"<<endl;
//      cout<<"Marks : "<<marks<<endl;
//     }
// };

// int main(){
//     Nishit n1;

//     //  cout<<"Access in main : "<<n1.marks<<endl; // Not ok

//     n1.display();
//     // n1.Student::display();   // Not Okey
    
// }



// #include<iostream>
// using namespace std;

// class Student{
//     protected :
//         int marks;


//     Student(){
//         marks = 50;
//     }


//     void display(){
//         cout<<"Student Class!"<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// class Nishit:private Student{
//     public :

//     void display(){
//     cout<<"Child Class!"<<endl;
//      cout<<"Marks : "<<marks<<endl;
//     }
// };

// int main(){
//     Nishit n1;

//     //  cout<<"Access in main : "<<n1.marks<<endl; // Not ok

//     n1.display();
//     // n1.Student::display();   // Not Okey
    
// }

// #include<iostream>
// using namespace std;

// class Student{
//     protected :
//         int marks;


//     Student(){
//         marks = 50;
//     }


//     void display(){
//         cout<<"Student Class!"<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// class Nishit:private Student{
//     public :

//     void display(){
//     cout<<"Child Class!"<<endl;
//      cout<<"Marks : "<<marks<<endl;
//     }
// };

// int main(){
//     Nishit n1;

//     //  cout<<"Access in main : "<<n1.marks<<endl; // Not ok

//     n1.display();
//     // n1.Student::display();   // Not Okey
    
// }

// #include<iostream>
// using namespace std;

// class Student{
//     private :
//         int marks;


//     Student(){
//         marks = 50;
//     }


//     void display(){
//         cout<<"Student Class!"<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// class Nishit:public Student{
//     public :

//     void display(){
//     cout<<"Child Class!"<<endl;
//      cout<<"Marks : "<<marks<<endl;
//     }
// };

// int main(){
//     Nishit n1;

//     //  cout<<"Access in main : "<<n1.marks<<endl; // Not ok

//     n1.display();
//     // n1.Student::display();   // Not Okey
    
// }

// #include<iostream>
// using namespace std;

// class Student{
//     private :
//         int marks;


//     Student(){
//         marks = 50;
//     }


//     void display(){
//         cout<<"Student Class!"<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// class Nishit:protected Student{
//     public :

//     void display(){
//     cout<<"Child Class!"<<endl;
//      cout<<"Marks : "<<marks<<endl;
//     }
// };

// int main(){
//     Nishit n1;

//     //  cout<<"Access in main : "<<n1.marks<<endl; // Not ok

//     n1.display();
//     // n1.Student::display();   // Not Okey
    
// }



// #include<iostream>
// using namespace std;

// class Student{
//     private :
//         int marks;


//     Student(){
//         marks = 50;
//     }


//     void display(){
//         cout<<"Student Class!"<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// class Nishit:private Student{
//     public :

//     void display(){
//     cout<<"Child Class!"<<endl;
//      cout<<"Marks : "<<marks<<endl;
//     }
// };

// int main(){
//     Nishit n1;

//     //  cout<<"Access in main : "<<n1.marks<<endl; // Not ok

//     n1.display();
//     // n1.Student::display();   // Not Okey
    
// }

// Inheritance : Single/simple inheritance

// #include<iostream>
// using namespace std;

// class A{
//     public :
        
//         void display1(){
//             cout<<"Class A"<<endl;
//         }
// };

// class B : public A{
//     public :

//     void display2(){
//         cout<<"Class B"<<endl;
//     }
    
// };

// int main(){

//    B b;

//    b.display1();
//    b.display2(); 

// }


// Multilevel Inheritance

// #include<iostream>
// using namespace std;

// class A{
//     public :
        
//         void display1(){
//             cout<<"Class A"<<endl;
//         }
// };

// class B : public A{
//     public :

//     void display2(){
//         cout<<"Class B"<<endl;
//     }
    
// };
// class C : public B{
//     public :

//     void display3(){
//         cout<<"Class C"<<endl;
//     }
    
// };

// int main(){

//    C c;

//    c.display1();
//    c.display2(); 
//    c.display3(); 

// }

// Multiple Inheritance

// #include<iostream>
// using namespace std;

// class A{
//     public :
        
//         void display1(){
//             cout<<"Class A"<<endl;
//         }
// };

// class B {
//     public :

//     void display2(){
//         cout<<"Class B"<<endl;
//     }
    
// };
// class C :public A, public B{
//     public :

//     void display3(){
//         cout<<"Class C"<<endl;
//     }
    
// };

// int main(){

//    C c;

//    c.display1();
//    c.display2(); 
//    c.display3(); 

// }



// Hierarchical inheritance

// #include<iostream>
// using namespace std;

// class A{
//     public :
        
//         void display1(){
//             cout<<"Class A"<<endl;
//         }
// };

// class B: public A {
//     public :

//     void display2(){
//         cout<<"Class B"<<endl;
//     }
    
// };
// class C :public A{
//     public :

//     void display3(){
//         cout<<"Class C"<<endl;
//     }
    
// };

// int main(){

//    C c;

//    c.display1();
// //    c.display2(); 

//     B b;
//    b.display1(); 

// }



// #include<iostream>
// using namespace std;

// class A{
//     public :
        
//         void display1(){
//             cout<<"Class A"<<endl;
//         }
// };

// class B:virtual public A {
//     public :

//     void display2(){
//         cout<<"Class B"<<endl;
//     }
    
// };
// class C :virtual public A{
//     public :

//     void display3(){
//         cout<<"Class C"<<endl;
//     }
    
// };
// class D :public B, public C{
//     public :

//     void display4(){
//         cout<<"Class C"<<endl;
//     }
    
// };

// int main(){

//     D d;

//     d.display1();
   
// }



// Topic : https://docs.google.com/document/d/1AKXjMAy5thNfqEioBmuocluC2UqlaPsJGbY7Riyj2to/edit?tab=t.0


// Polymorphism : compiletime polymorphism : overloading

// #include<iostream>
// using namespace std;

// class Student{

//     public : 
//     int num1,num2,n1,n2,n3;
//     float num01,num02,num03;

//     public : 

//     int display(int num1, int num2){

//         this->num1 = num1;
//         this->num2 = num2;

//         cout<<"Sum two number : "<<num1+num2<<endl;
//     }
//     int display(int n1, int n2, int n3){
//         this->n1 = n1;
//         this->n2 = n2;
//         this->n3 = n3;
//         cout<<"Sum three number : "<<n1+n2+n3<<endl;
//     }
//     float display(float num01, float num02, float num03){
//         this->num01 = num01;
//         this->num02 = num02;
//         this->num03 = num03;
//         cout<<"Sum three number : "<<num01+num02+num03<<endl;
//     }
// };

// int main(){

//     Student s1;
//     s1.display(12,34);

//     Student s2;
//     s2.display(12.4f,56.9f,78.9f);

//     Student s3;

//     s3.display(12,334,56);

// }


// Runtime polymorphism


// #include<iostream>
// using namespace std;

// class Student{

//     public :

//     int num1;
//     int num2;

//     public :

//        virtual int display(int num1, int num2){

//         this->num1 = num1;
//         this->num2 = num2;

//         cout<<"Sum two number : "<<num1+num2<<endl;
//     }

// };

// class Nishit : public Student{

//     public : 

//    int display(int num1, int num2)override{

//         this->num1 = num1;
//         this->num2 = num2;

//         cout<<"Sum two number : "<<num1+num2<<endl;
//     }
// };

// int main(){

//     Nishit ns;

//     ns.display(10,20);
//     ns.Student::display(100,20);

// }




// #include<iostream>
// using namespace std;

// class Student{
//     public : 

//     virtual void display() = 0;

//     void print(){
//         cout<<"Student Class ... "<<endl;
//     }
// };

// class Poojan : public Student{

//     public : 

//     void display(){
//         cout<<"Poojan Class .."<<endl;
//     }
// };

// int main(){
//    Poojan pj;

//    pj.print();

//    pj.display();
// }




// #include<iostream>
// using namespace std;

//   template<typename T>

//   T addition(T x, T y){

//     T result = x + y;

//     cout<<result<<endl;
//   }

// int main(){

//    addition(10, 20);
// }

// #include<iostream>
// using namespace std;

//   template<typename T>

//   T addition(T x, T y){

//     T result = x + y;

//     cout<<result<<endl;
//   }

// int main(){

//    addition(10.5, 20.6);
// }


// #include<iostream>
// using namespace std;

//   template<typename T1, typename T2>

//   T1 addition(T1 x, T2 y){

//     T1 result = x + y;

//     cout<<result<<endl;
//   }

// int main(){

//    addition(10.5, 20);
// }

// #include<iostream>
// #include<string>
// using namespace std;

// template<typename T>
// T addition(T x, T y) {
//     T result = x + " "+ y;
//     cout << result << endl;
// }

// int main() {
//     addition<string>("Pawan", "Maurya");
// }


// #include<iostream>
// using namespace std;

// template<typename T, typename T1>

// class Student{
//     public :
//     T age;
//     T1 name;

//     Student(T age, T1 name){
//         this->age = age;
//         this->name = name;
//     }

//     T display(){
//         cout<<"Age : "<<age<<endl;
//         cout<<"Name : "<<name<<endl;
//     }
// };

// int main(){

//     Student <int,string> s1(10,"Poojan");

//     s1.display();
// }




//STL :  Vector


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int>v1;

//     cout<<"Data Push in vector : "<<endl;

//     v1.push_back(10);
//     v1.push_back(20);
//     v1.push_back(30);
//     v1.push_back(40);
//     v1.push_back(50);

// cout<<"Size of vector : "<<v1.size()<<endl;

// cout<<"Last data in vector : "<<v1.back()<<endl;

// v1.pop_back();

// cout<<"After pooped data from vector ,Last data in vector : "<<v1.back()<<endl;

// cout<<"Size of vector : "<<v1.size()<<endl;


// cout<<"Vector empty or not : "<<v1.empty()<<endl;

// cout<<"Front data in vector : "<<v1.front()<<endl;

// // insert data at position

// cout<<"Insert data in vector : "<<endl;

// v1.insert(v1.begin() + 3, 300);

// // Display

// for(int i = 0; i < v1.size(); i++){
//     cout<<v1[i]<<" ";
// }

// cout<<endl;

// // erase()

// v1.erase(v1.begin() + 3);

// for(int i = 0; i < v1.size(); i++){
//     cout<<v1[i]<<" ";
// }

// cout<<endl;

// cout<<"Data present at index of vector : "<<v1.at(2)<<endl;

// cout<<"End data using pointer method : "<<*(v1.end() - 1)<<endl;

// v1.clear();

// for(int i = 0; i < v1.size(); i++){
//     cout<<v1[i]<<" ";
// }

// cout<<endl;
// }

// HW : https://docs.google.com/document/d/1MiNz-8zwI8m3Tq1YeK-SPWYVEPqq4yxaNU1z9FkMHmg/edit?tab=t.0
// https://docs.google.com/document/d/1UcJAPlyAvmXJNtmg6FGzgmBSRbZTiNRg0EzUdPwB8hM/edit?tab=t.0

// https://docs.google.com/document/d/1DVeU0VBbBpL_B0WHFTYijqmvFMzU9H4ZR8UQFo_uaWM/edit?tab=t.0



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v1{10,20,30,40,50};

//     for(int i = 0; i < v1.size(); i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<endl;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v1(5,50);

//     // v1.push_back(10);
//     // v1.push_back(20);
//     // v1.push_back(30);
//     // v1.push_back(40);
//     // v1.push_back(50);

//     cout<<"Size of vector : "<<v1.size()<<endl;

//     for(int i = 0; i < v1.size(); i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v1(5);

  
//     for(int i = 0; i < v1.size(); i++){
//         cout<<"Enter Data : ";
//         cin>>v1[i];
//     }

//     cout<<"Size of vector : "<<v1.size()<<endl;

//     for(int i = 0; i < v1.size(); i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<endl;
// }


// Vector:

// Memory: Uses contiguous memory.

// Access Time: O(1) time complexity for access because of direct indexing.

// Insertion/Deletion: O(n) time complexity for insertion/deletion (except at the end).

// Cache Friendliness: Better cache performance due to contiguous memory.

// Size Management: Often requires resizing which can be costly.

// Linked List:

// Memory: Uses non-contiguous memory.

// Access Time: O(n) time complexity for access due to sequential traversal.

// Insertion/Deletion: O(1) time complexity for insertion/deletion (if you have a reference to the node).

// Cache Friendliness: Poorer cache performance due to scattered memory.

// Size Management: No need for resizing.



// Linked list : 1> insert at tail


// #include<iostream>
// using namespace std;

// class Node{
//     public :
//     int data;
//     Node *next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtTail(Node* &head, int data){

//     Node *newNode = new Node(data);

//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     Node* temp = head;

//     while(temp->next != NULL){
//         temp = temp->next;
//     } 

//     temp->next = newNode;

// }


// void display(Node* &head){

//     if(head == NULL){
//         cout<<"Linked List Empty!"<<endl;
//     }

//     Node *temp = head;

//     while(temp != NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     } 

//     cout<<"NULL"<<endl;
// }


// int main(){
//     Node *head = NULL;

//     insertAtTail(head,10);
//     insertAtTail(head,20);
//     insertAtTail(head,30);
//     insertAtTail(head,40);
//     insertAtTail(head,50);
//     insertAtTail(head,60);

//     display(head);
// }


// #include<iostream>
// using namespace std;

// class Node{
//     public :
//     int data;
//     Node *next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int data){
//     Node *newNode = new Node(data);

//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     newNode->next = head;
//     head = newNode;
// }


// void display(Node* &head){
//     if(head == NULL){
//         cout<<"Linked List is Empty!"<<endl;
//         return;
//     }

// Node* temp = head;

// while(temp != NULL){
//     cout<<temp->data<<"->";
//     temp = temp->next;
// }

// cout<<"NULL"<<endl;

// }

// int main(){
//     Node* head = NULL;

//     insertAtHead(head, 10);
//     insertAtHead(head, 20);
//     insertAtHead(head, 30);
//     insertAtHead(head, 40);
//     insertAtHead(head, 50);
//     insertAtHead(head, 60);

//     display(head);
// }



// #include<iostream>
// using namespace std;

// class Node{
//     public :
//     int data;
//     Node *next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int data){
//     Node *newNode = new Node(data);

//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     newNode->next = head;
//     head = newNode;
// }

// // insert Node at specific Position

// void insertAtPosition(Node* &head, int position, int data){
//     Node *newNode = new Node(data);

//     if(position == 1){
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     Node* temp = head;

//     for(int i = 1; i < position-1 && temp != NULL; i++){
//         temp = temp->next;
//     }

//     if(temp == NULL){
//         cout<<"Positon out bound!"<<endl;
//         return;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
// }


// void display(Node* &head){
//     if(head == NULL){
//         cout<<"Linked List is Empty!"<<endl;
//         return;
//     }

// Node* temp = head;

// while(temp != NULL){
//     cout<<temp->data<<"->";
//     temp = temp->next;
// }

// cout<<"NULL"<<endl;

// }

// int main(){
//     Node* head = NULL;

//     insertAtHead(head, 10);
//     insertAtHead(head, 20);
//     insertAtHead(head, 30);
//     insertAtHead(head, 40);
//     insertAtHead(head, 50);
//     insertAtHead(head, 60);

//     display(head);

    
//     insertAtPosition(head,3, 100);

//      display(head);
// }




// #include<iostream>
// using namespace std;

// class Node{
//     public :
//     int data;
//     Node *next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int data){
//     Node *newNode = new Node(data);

//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     newNode->next = head;
//     head = newNode;
// }

// // insert Node at specific Position

// void insertAtPosition(Node* &head, int position, int data){
//     Node *newNode = new Node(data);

//     if(position == 1){
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     Node* temp = head;

//     for(int i = 1; i < position-1 && temp != NULL; i++){
//         temp = temp->next;
//     }

//     if(temp == NULL){
//         cout<<"Positon out bound!"<<endl;
//         return;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
// }


// // Update Node

// void updateNode(Node* &head, int oldData, int newData){
//     if(head == NULL){
//         cout<<"Linked List Empty!"<<endl;
//         return;
//     }

//     Node* temp = head;

//     while(temp != NULL){
//         if(temp->data == oldData){
//             temp->data = newData;
//             return;
//         }

//         temp = temp->next;
//     }

//     cout<<"Node does Not Exist!"<<endl;
// }


// void display(Node* &head){
//     if(head == NULL){
//         cout<<"Linked List is Empty!"<<endl;
//         return;
//     }

// Node* temp = head;

// while(temp != NULL){
//     cout<<temp->data<<"->";
//     temp = temp->next;
// }

// cout<<"NULL"<<endl;

// }

// int main(){
//     Node* head = NULL;

//     insertAtHead(head, 10);
//     insertAtHead(head, 20);
//     insertAtHead(head, 30);
//     insertAtHead(head, 40);
//     insertAtHead(head, 50);
//     insertAtHead(head, 50);

//     display(head);

    
//     insertAtPosition(head,3, 100);

//      display(head);

//      updateNode(head, 50, 500);

//      display(head);
//      updateNode(head, 150, 1500);

//     //  display(head);
// }




// #include<iostream>
// using namespace std;

// class Node{
//     public :
//     int data;
//     Node *next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int data){
//     Node *newNode = new Node(data);

//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     newNode->next = head;
//     head = newNode;
// }

// // insert Node at specific Position

// void insertAtPosition(Node* &head, int position, int data){
//     Node *newNode = new Node(data);

//     if(position == 1){
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     Node* temp = head;

//     for(int i = 1; i < position-1 && temp != NULL; i++){
//         temp = temp->next;
//     }

//     if(temp == NULL){
//         cout<<"Positon out bound!"<<endl;
//         return;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
// }


// // Update Node

// void updateNode(Node* &head, int oldData, int newData){
//     if(head == NULL){
//         cout<<"Linked List Empty!"<<endl;
//         return;
//     }

//     Node* temp = head;

//     while(temp != NULL){
//         if(temp->data == oldData){
//             temp->data = newData;
//             return;
//         }

//         temp = temp->next;
//     }

//     cout<<"Node does Not Exist!"<<endl;
// }

// void deleteNode(Node* &head, int deleteData){
//     if(head == NULL){
//         cout << "Linked List Underflow!" << endl;
//         return;
//     }

//     Node* temp = head;
//     Node* prev = NULL;

//     while(temp != NULL){
//         if(temp->data == deleteData){

//             if(prev == NULL){
//                 head = temp->next;
//             }

//             else{
//                   prev->next = temp->next;
//                     delete temp;
//                      return; 
//             }
              
//         }
//         prev = temp;
//         temp = temp->next;
//     }

//     cout << "Node with data " << deleteData << " not found!" << endl;
// }



// void display(Node* &head){
//     if(head == NULL){
//         cout<<"Linked List is Empty!"<<endl;
//         return;
//     }

// Node* temp = head;

// while(temp != NULL){
//     cout<<temp->data<<"->";
//     temp = temp->next;
// }

// cout<<"NULL"<<endl;

// }

// int main(){
//     Node* head = NULL;

//     insertAtHead(head, 10);
//     insertAtHead(head, 20);
//     insertAtHead(head, 30);
//     insertAtHead(head, 40);
//     insertAtHead(head, 50);
//     insertAtHead(head, 50);

//     display(head);

    
//     insertAtPosition(head,3, 100);

//      display(head);

//      updateNode(head, 50, 500);

//      display(head);
//     //  updateNode(head, 150, 1500);

//     //  display(head);

//     deleteNode(head, 5500);

//     display(head);
// }



// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s;

//     // Push elements onto the stack
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     s.push(70);

//     // Display the top element
//     cout << "Top element is: " << s.top() << endl;

//     // Pop an element from the stack
//     s.pop();

//     // Display the top element again
//     cout << "After pop, top element is: " << s.top() << endl;

//     // Check if the stack is empty
//     if (s.empty()) {
//         cout << "Stack is empty." << endl;
//     } else {
//         cout << "Stack is not empty." << endl;
//     }

//     // Display the size of the stack
//     cout << "Stack size is: " << s.size() << endl;

// cout<<"Element Present in stack : ";
//     while(s.size()>0){
//         cout<<s.top()<<" ";
//         s.pop();
//     }

//     return 0;
// }


//  stack : array



// #include<iostream>
// using namespace std;

// class Stack{
//     public:
//     int *arr;
//     int capacity;
//     int top;

//     Stack(int size){
//         arr = new int[size];
//         capacity = size;
//         top = -1;
//     }

// void push(int data){
//     if(top == capacity-1){
//         cout<<"Stack Overflow!"<<endl;
//         return;
//     }

//     arr[++top] = data;
// }

// int pop(){
//     if(top == -1){
//         cout<<"Stack Underflow!"<<endl;
//         return -1;
//     }

//     return arr[--top];
// }

// void display(){
//     if(top == -1){
//         cout<<"Stack Empty!"<<endl;
//         return;
//     }

//     for(int i = top; i >= 0; i--){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void peek(){
//    if(top == -1){
//         cout<<"Stack Empty!"<<endl;
//         return;
//     }

//     cout<<"Top element in stack : "<<arr[top]<<endl;
    
// }

// };

// int main(){

//     Stack s(10);

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);

//     s.display();

//     s.pop();

//   s.display();

//   s.peek();

// }



// #include<iostream>
// using namespace std;

// class Node{
//     public :
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void push(Node* &top, int data){
//     Node *newNode = new Node(data);

//     newNode->next = top;

//     top = newNode;
// }

// void pop(Node* &top){
//     if(top == NULL){
//         cout<<"Stack Underflow!"<<endl;
//         return;
//     }

//     Node* temp = top;
   
//    top = top->next;

//    cout<<temp->data<<" deleted from stack!"<<endl;

//    delete temp;
// }


// void display(Node* &top){
//     if(top == NULL){
//         cout<<"Stack Empty!"<<endl;
//         return;
//     }

//     Node *temp = top;

//     while(temp != NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     Node *top = NULL;

//     push(top,10);
//     push(top,20);
//     push(top,30);
//     push(top,40);


//     display(top);

//     pop(top);

//     display(top);


// }

// Queue : using stl


// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     queue<int>q;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);

//     cout<<"Start element in queue : "<<q.front()<<endl;

//     cout<<"End element in queue : "<<q.back()<<endl;


//     q.pop();

//     cout<<"Start element in queue : "<<q.front()<<endl;
//     cout<<"Size of queue : "<<q.size()<<endl;
//     cout<<"queue is empty or not : "<<q.empty()<<endl;

//     while(q.size() > 0){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// cout<<endl;
//  cout<<"Size of queue : "<<q.size()<<endl;

// }

