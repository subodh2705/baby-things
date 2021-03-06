#include<bits/stdc++.h>

using namespace std;

  class first_opt{
    public:

      void first_opt_list(int years,int month){
                     int total_age;
                     total_age=12*years+month;
                    //  char arr_first_month[10]={'a','b'};
                     char arr_second_month[10]={'a','b'};
                     char arr_third_month[10]={'a','b'};
                     char arr_four_month[10]={'a','b'};
                     char arr_fifth_month[10]={'a','b'};
                     char arr_sixth_month[10]={'a','b'};
                     char arr_seven_month[10]={'a','b'};
                     char arr_eight_month[10]={'a','b'};
                     char arr_nine_month[10]={'a','b'};
                     char arr_ten_month[10]={'a','b'};
                     char arr_eleven_month[10]={'a','b'};
                     char arr_twelve_month[10]={'a','b'};
                     char arr_13_to_25_month[10]={'a','b'};
                     char arr_26_to_37_month[10]={'a','b'};
                     char arr_38_to49_month[10]={'a','b'};

                         if(total_age==1)
                         {
                             cout<<" Only feed Breast milk"<<endl;
                         }

                         if(total_age==2)
                         {
                            cout<<"Only give Breast milk and take 16 hours of sleep"<<endl;
                         }
                         else if(total_age==3)
                         {
                            cout<<" Give Breast milk and 1 & 2 tablespoon of cereal mixed with breast milk, if breastmilk is not enough, consult a doctor and give it with cow milk " <<endl;
                         }
                          else if( total_age==4)
                         {
                            cout<<"Give breastmilk banana puree often called perfect food."<<endl;
                         }
                          else if(total_age==5)
                         {
                            cout<<"Give breastmilk banana puree often called perfect food."<<endl;
                         }
                          else if(total_age==6)
                         {
                            cout<<"Give pumkin, potato ,sweet potato puree"<<endl;
                         }
                          else if(total_age==7)
                         {
                            cout<<"Give two to three meals a day in addition to rice, barley, or oat cereal, you can introduce grain products "<<endl;
                         }
                          else if(total_age==8)
                         {
                            cout<<"Give two to three meals a day in addition to rice, barley, or oat cereal, you can introduce grain products"<<endl;
                         }
                          else if(total_age==9)
                         {
                            cout<<"Give two to three meals a day in addition to rice, barley, or oat cereal, you can introduce grain products"<<endl;
                         }
                          else if(total_age==10)
                         {
                            cout<<" Offer small pieces of chicken, soft fruit, or vegetables; whole grain cereals, pasta, or bread; scrambled eggs, or yogurt"<<endl;
                         }
                          else if(total_age==11)
                         {
                            cout<<"diet with a variety of whole grains, fruit, vegetables, dairy products cheese  yogurt  protein" <<endl;
                         }
                          else if(total_age==12)
                         {
                            cout<<"eat cereal, cooked noodles, soft breads, and rice,don't forget to serve extra protein in the form of chicken, fish, beans, or eggs."<<endl;
                         }
                            else if(total_age>13 && total_age<25)
                         {
                            cout<<"Bananas, peaches, and other soft fruits Yogurt and milk Oatmeal Whole grain pancakes"<<endl;
                         }
                          else if(total_age>26 && total_age<37)
                         {
                            cout<<"Breakfast:"<<endl;
                            cout<<"½ cup nonfat or low- fat milk"<<endl;
                            cout<<"½ cup iron- fortified cereal or 1 egg"<<endl;
                            cout<<"Lunch:"<<endl;
                            cout<<"½ cup low- fat or nonfat milk"<<endl;
                            cout<<"½ sandwich—1 slice whole wheat bread, 1 ounce meat, slice of cheese, veggie (avocado, lettuce, or tomato)"<<endl;
                            cout<<"Dinner:"<<endl;
                            cout<<"½ cup nonfat or low-fat milk"<<endl;
                         }
                         else if(total_age>38 && total_age<49)
                         {
                             cout<<"Diet should includes fresh vegetables and fruits, nonfat or low-fat dairy products (milk, yogurt, cheeses), lean meats (chicken, turkey, fish, lean hamburger), and whole grain cereals and bread."<<endl;
                         }
                         else
                         {
                             cout<<"adult hood Diet"<<endl;
                         }



    }

};


 class second_opt{
              public:
                 void second_opt_list(int years_2, int month_2){
                     int total_age_second;
                     total_age_second=12*years_2+month_2;
                      if(total_age_second==1 || total_age_second==2)
                         {
                             cout<<"Hepatitis B (2nd dose)"<<endl;
                             cout<<"Diphtheria, tetanus, and whooping cough (pertussis) (DTaP)"<<endl;
                         }
                          else if(total_age_second==3||total_age_second==4)
                         {
                            cout<<" Diphtheria, tetanus, and whooping cough (pertussis) (DTaP) " <<endl;
                         }
                           else if(total_age_second==5||total_age_second==6)
                         {
                            cout<<"Haemophilus influenzae type b (Hib),Polio (IPV),Pneumococcal (PCV),Rotavirus (RV) " <<endl;
                         }
                         else if(total_age_second==7||total_age_second==8||total_age_second==9||total_age_second==10||total_age_second==11)
                         {
                            cout<<" There are usually no vaccinations scheduled between 7 and 11 months of age.Babies 6 months and older should receive flu vaccination every flu season. " <<endl;
                         }
                         else if(total_age_second>=12 && total_age_second<=36)
                         {
                            cout<<"Between 2 and 3 years of age, your child should visit the doctor once a year for check-ups.Additionally, children should receive flu vaccination every flu season. " <<endl;
                         }

                          else if(total_age_second>=36)
                         {
                            cout<<"During this time, your child receives the following vaccines:Diphtheria, tetanus and whooping cough (pertussis) (DTaP),Polio (IPV),Measles, mumps and rubella (MMR) " <<endl;
                         }





                 }


};

class third_opt{
           public:
           int option_3;
           void third_opt_list(){
               do{
               cout<<"choose one of the following to find remides"<<endl;
               cout<<"1)Cough"<<endl;
               cout<<"2)Stomach Aches"<<endl;
               cout<<"3)Fever"<<endl;
               cout<<"4)press 0 to exit"<<endl;

               cin>>option_3;
                 if(option_3>=4){
                     cout<<"Enter correct option"<<endl;
                 }
                 switch(option_3){
                     case 1:
                        cout<<"1. Honey"<<endl;
                        cout<<"2. Probiotics"<<endl;
                        cout<<"3. pineapple"<<endl;
                        cout<<"4. Peppermint"<<endl;
                        cout<<"5. Salt and water gargle"<<endl;
                     break;
                     case 2:
                       cout<<"1. Drinking water"<<endl;
                       cout<<"2. Ginger"<<endl;
                       cout<<"3. Mint"<<endl;
                       cout<<"4. Avoiding difficult-to-digest foods"<<endl;
                       cout<<"5. Cinnamon"<<endl;
                     break;
                      case 3:
                       cout<<"1. Drink fluids"<<endl;
                       cout<<"2. Get plenty of rest "<<endl;
                       cout<<"3. Take an over-the-counter medication "<<endl;
                       cout<<"4. Kudzu root"<<endl;
                       cout<<"5. Stay cool "<<endl;

                 }
               }while(option_3!=0);
           }
};




int main() {

  first_opt f1;
  second_opt f2;
  third_opt f3;
  int option;

  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 4 to exit." << endl;
    cout << "1.Enter 1 to know the food of the baby" << endl;
    cout << "2.Enter 2 to know the vaccines of the baby" << endl;
    cout << "3.Enter 3 to know the home remides of the baby" << endl;
    cout << "4. exit()" << endl;


    cin >> option;

    //Node n1;
    if(option>4){
        cout<<"enter correct option"<<endl;
    }
    switch (option) {
    case 0:
      break;
    case 1:
         int a1,b1;
         cout<<"enter the years and month of the baby"<<endl;
         cin>>a1>>b1;
         f1.first_opt_list(a1,b1);
       break;
    case 2:
         int a2,b2;
         cout<<"enter the years and month of the baby"<<endl;
         cin>>a2>>b2;
         f2.second_opt_list(a2,b2);
        break;
    case 3:
        //  int a3,b3;
        //  cout<<"enter the years and month of the baby"<<endl;
        //  cin>>a3>>b3;
         f3.third_opt_list();
        break;
    case 4:
     break;
    }

  } while (option != 4);

  return 0;
}










// #include<bits/stdc++.h>

// using namespace std;

//   class first_opt{
//     public:

//       void first_opt_list(int years,int month){
//                      int total_age;
//                      char arr_first_month[10]={'a','b'};
//                      char arr_second_month[10]={'a','b'};
//                      char arr_third_month[10]={'a','b'};
//                      char arr_four_month[10]={'a','b'};
//                      char arr_fifth_month[10]={'a','b'};
//                      char arr_sixth_month[10]={'a','b'};
//                      char arr_seven_month[10]={'a','b'};
//                      char arr_eight_month[10]={'a','b'};
//                      char arr_nine_month[10]={'a','b'};
//                      char arr_ten_month[10]={'a','b'};
//                      char arr_eleven_month[10]={'a','b'};
//                      char arr_twelve_month[10]={'a','b'};
//                      char arr_13_to_25_month[10]={'a','b'};
//                      char arr_26_to_37_month[10]={'a','b'};
//                      char arr_38_to49_month[10]={'a','b'};
//                      total_age=12*years+month;
//                          if(total_age==1)
//                          {
//                              cout<<arr_first_month<<endl;
//                          }

//                          if(total_age==2)
//                          {
//                             cout<<arr_second_month<<endl;
//                          }
//                          else if(total_age==3)
//                          {
//                             cout<<arr_third_month<<endl;
//                          }
//                           else if( total_age==4)
//                          {
//                             cout<<arr_four_month<<endl;
//                          }
//                           else if(total_age==5)
//                          {
//                             cout<<arr_fifth_month<<endl;
//                          }
//                           else if(total_age==6)
//                          {
//                             cout<<arr_sixth_month<<endl;
//                          }
//                           else if(total_age==7)
//                          {
//                             cout<<arr_seven_month<<endl;
//                          }
//                           else if(total_age==8)
//                          {
//                             cout<<arr_eight_month<<endl;
//                          }
//                           else if(total_age==9)
//                          {
//                             cout<<arr_nine_month<<endl;
//                          }
//                           else if(total_age==10)
//                          {
//                             cout<<arr_ten_month<<endl;
//                          }
//                           else if(total_age==11)
//                          {
//                             cout<<arr_eleven_month<<endl;
//                          }
//                           else if(total_age==12)
//                          {
//                             cout<<arr_twelve_month<<endl;
//                          }
//                             else if(total_age>13 && total_age<25)
//                          {
//                             cout<<arr_13_to_25_month<<endl;
//                          }
//                           else if(total_age>26 && total_age<37)
//                          {
//                             cout<<arr_26_to_37_month<<endl;
//                          }
//                          else if(total_age>38 && total_age<49)
//                          {
//                              cout<<arr_38_to49_month<<endl;
//                          }



//     }

// };


//  class second_opt{
//         public:
//              void second_opt_list(int years_2, int month_2){
//                  int total_age_second;
//                  total_age_second=12*years_2+month_2;
//                  cout<<total_age_second<<endl;
//              }
// };

// class third_opt{
//      public:
//              void third_opt_list(int years_3, int month_3){
//                  int total_age_third;
//                  total_age_third=12*years_3+month_3;
//                  cout<<total_age_third<<endl;
// };








// int main() {

//   first_opt f1;
//   second_opt f2;
//   third_opt f3;
//   int option;

//   do {
//     cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
//     cout << "1. ()" << endl;
//     cout << "2. ()" << endl;
//     cout << "3.()" << endl;
//     cout << "4. exit()" << endl;


//     cin >> option;

//     //Node n1;

//     switch (option) {
//     case 0:
//       break;
//     case 1:
//          int a1,b1;
//          cout<<"enter the years and month of the baby"<<endl;
//          cin>>a1>>b1;
//          f1.first_opt_list(a1,b1);
//       break;
//     case 2:
//          int a2,b2;
//          cout<<"enter the years and month of the baby"<<endl;
//          cin>>a2>>b2;
//          f2.second_opt_list(a2,b2);
//         break;
//     case 3:
//          int a3,b3;
//          cout<<"enter the years and month of the baby"<<endl;
//          cin>>a3>>b3;
//          f2.second_opt_list(a3,b3);
//         break;
//     case 4:
//      break;
//     }

//   } while (option != 0);

//   return 0;
// }

