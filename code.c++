#include <iostream>
#include<string.h>
#include <string>
#include<conio.h>
using namespace std;

class Welcome
{
    public:
    void wel()
    {
        int n, i , j;
        n= 5;
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout<<"\n";
            for(j = 1; j <= i+3; j++)
            {
                cout << "\t*";
            }
            cout<<"\n";
        }
        
        cout<<"\n*\t*\t=========================\t*\t*\t*\n";
        cout<<"\n\t\tWELCOME TO OUR STORE RUP                                 *\n";
        cout<<"\n*\t*\t=========================\t*\t*\t*\n\n";
        for(i = n; i >= 1; i--)
        {
            for(j = 1; j <= i; j++)
            {
                cout << "*" ;
            }
            cout<<"\n";
            for(j = 1; j <= i+3; j++)
            {
                cout << "\t*" ;
            }
            cout<<"\n";
        }
        cout<<"\n---------------------------------------------------------\n";
        cout<<"We have a vast Variety of clothes available for renting\n";
        cout<<"\n---------------------------------------------------------\n";
    } 
};

class Customer
{
    public:
    double mobno;
    double adhar_no;
    float p_no;
    string name;
    string address;
    
    void customer_details()
    {
        system("COLOR 02");
        cout<<"\nEnter your NAME: ";
        cin.ignore();
        getline(cin,name);
        
        cout<<"\nEnter your FULL ADDRESS: ";
        cin.ignore();
        getline(cin,address);

        cout<<"\nEnter your six-digit PINCODE: ";
        cin>>p_no;
        cout<<"\nEnter your CONTACT NUMBER: " ;
        cin>>mobno;

        cout<<"\nFor Security purpose,"<<"\nEnter your AADHAR CARD NUMBER: ";
        cin>>adhar_no;

        cout<<"\n---------------------------------------------------------\n";
    }
    void display()
    {
        cout<<"\nYour Final Bill is:\n";
        cout<<"\n\t\t\t********************************\n";
        cout<<"\n\t\t\tRUP CREATIVE APPAREL ENTERPRISES\n";
        cout<<"\n\t\t\t********************************\n";
        cout<<"\n\t\t\tNAME: "<<name<<"\n";
        cout<<"\n\t\t\tADDRESS: "<<address<<"\n";
        cout<<"\n\t\t\tPINCODE: "<<p_no<<"\n";
    }
};
class Shop : public Customer

{
    public:
    int g,k,x,cat1,cat2,w1,w2,w3,w4;
    int t0,t1,t2,t3,t4,t5,t6;
    int day,d1,d2,d3,d4,d5;
    int night,n1,n2,n3,n4,n5;
    int sa1,sa2,sa3;
    int le1,le2;
    int k1,k2;
    int suit;
    int suit_1;
    int suit_2;
    int kurta;
    int sher_type,sherwani_2,sherwani_1;
    int bm,bm1,bm2,bm3;
    int p1,c1,d0;
    
    int category()
    {
        system("COLOR 03 ");
        cout<<"\nHow many items Do you want to rent: ";
        cin>>x;
        
    for ( k = 0; k<x; k++)
    {   
        cout<<"\n\nFor Entry "<<k+1<<" Choose:";
        cout<<"\n\nFOR WHOM DO YOU WANT TO RENT :";
        cout<<"\nPRESS '1' FOR FEMALE AND PRESS '2' FOR MALE: ";
        cin>>g;
        
        if(g==1)
        {
           cout<<"\nYou've chosen FEMALE\n";
           system("COLOR 09 ");
           cout<<"\n---------------------------------------------------------\n";
           cout<<"\nFor female attire options choose from the following list\n";
           cout<<"\n1. Western\n2. Traditional";
           cout<<"\nPress the number of your choice: ";
           cin>>cat2;
           cout<<"\n---------------------------------------------------------\n";
        
           if (cat2==1)
           {
               cout<<"\nFor western outfits, there are following options\n";
               cout<<"\n1. Day Outfits\n2. Evening Outfits";
               cout<<"\nPress the number of your choice: ";
               cin>>w3;
               cout<<"\n---------------------------------------------------------\n";

               if (w3==1)
               {
                   cout<<"\nThere are following options available for Day outfits";
                   cout<<"\n1. Brunch\n2. Floral\n3. Solid Colours\n4. Jumpsuits\n5. Boho";
                   cout<<"\nPress the number of your choice: ";
                   cin>>day;
                   cout<<"\n---------------------------------------------------------\n";

                   if (day==1)
                   {
                       cout<<"\nFor brunch, following options are available";
                       cout<<"\n1. Lavender Square neck dress\n   Item No. 1\n   Original MRP: Rs 3499\n2. White Puffed Sleeve Dress\n   Item No. 2\n   Original MRP: Rs 2899";
                       cout<<"\nPress the number of your choice: ";
                       cin>>d1;
                       cout<<"\n---------------------------------------------------------\n";
        
                       if(d1==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Lavender Square neck dress\nItem No: 1\nOriginal MRP: Rs 3499";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (d1==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: White Puffed Sleeve Dress\nItem No. 2\nOriginal MRP: Rs 2899";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else 
                        {
                            system("COLOR 0E ");
                             cout<<"\n\n********Invalid Request********";
                             cout<<"\n---------------------------------------------------------\n";
                        }
                   }
                   else if (day==2)
                   {
                       cout<<"\nFor Floral, following options are available";
                       cout<<"\n1. Daisy Print Dress\n   Item No. 3\n   Original MRP: Rs 3199\n2. Red Floral Print Dress\n   Item No. 4\n   Original MRP: Rs 2499";
                       cout<<"\nPress the number of your choice: ";
                       cin>>d2;
                       cout<<"\n---------------------------------------------------------\n";
            
                       if (d2==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Daisy Print Dress\nItem No: 3\nOriginal MRP: Rs 3199";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (d2==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Red Floral Print Dress\nItem No: 4\nOriginal MRP: Rs 2499";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                            cout<<"\n\n********Invalid Request********"; 
                            cout<<"\n---------------------------------------------------------\n";
                       }
                   }
                   else if (day==3)
                   {
                       cout<<"\nFor Solid Colours, following options are available";
                       cout<<"\n1. Yellow Dress\n   Item No. 5\n   Original MRP: Rs 3999\n2. Royal Blue Dress\n   Item No. 6\n   Original MRP: Rs 2799";
                       cout<<"\nPress the number of your choice: ";
                       cin>>d3;
                       cout<<"\n---------------------------------------------------------\n";
                    
                       if (d3==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Yellow Dress\nItem No. 5\nOriginal MRP: Rs 3999";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (d3==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Royal Blue Dress\nItem No. 6\nOriginal MRP: Rs 2799";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                            cout<<"\n\n********Invalid Request********";
                            cout<<"\n---------------------------------------------------------\n";
                       }   
                   }
                   else if (day==4)
                   {
                       cout<<"\nFor Jumpsuits, following options are available";
                       cout<<"\n1. V-Neck Beige Jumpsuit\n   Item No. 7\n   Original MRP: Rs 2699\n2. Sleeve Detailed Blue Jumpsuit\n   Item No. 8\n   Original MRP: Rs 2099";
                       cout<<"\nPress the number of your choice: ";
                       cin>>d4;
                       cout<<"\n---------------------------------------------------------\n";
                
                       if (d4==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: V-Neck Beige Jumpsuit\nItem No. 7\nOriginal MRP: Rs 2699";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (d4==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Sleeve Detailed Blue Jumpsuit\nItem No. 8\nOriginal MRP: Rs 2099";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                          cout<<"\n\n********Invalid Request********"; 
                          cout<<"\n---------------------------------------------------------\n";
                       }
                   }
                   else if (day==5)
                   {
                       cout<<"\nFor Boho, following options are available";
                       cout<<"\n1. Boho Floral Wrap Dress\n   Item No. 9\n   Original MRP: Rs 1899\n2. Boho Tropical Maxi Dress\n   Item No. 10\n   Original MRP: Rs 2199";
                       cout<<"\nPress the number of your choice: ";
                       cin>>d5;
                       cout<<"\n---------------------------------------------------------\n";
                
                       if (d5==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Boho Floral Wrap Dress\nItem No. 9\nOriginal MRP: Rs 1899";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (d5==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Boho Tropical Maxi Dress\nItem No. 10\nOriginal MRP: Rs 2199";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                          cout<<"\n\n********Invalid Request********";
                          cout<<"\n---------------------------------------------------------\n";
                       }
                   }
                   else
                   {
                       system("COLOR 0E ");
                      cout<<"\n\n********Invalid Request********";
                      cout<<"\n---------------------------------------------------------\n"; 
                   } 
               }
               else if (w3==2)
               {
                   cout<<"\nThere are following options available for Evening outfits";
                   cout<<"\n1. Evening Gowns\n2. Ball Gowns\n3. Cocktail Dress\n4. Wedding Gowns\n5. Bridesmaid Dress";
                   cout<<"\nPress the number of your choice: ";
                   cin>>night;
                   cout<<"\n---------------------------------------------------------\n";
                   
                   if (night==1)
                   {
                       cout<<"\nFor Evening Gowns, following options are available";
                       cout<<"\n1. Pleated Party Cream Gown\n   Item No. 11\n   Original MRP: Rs 3199\n2. Embroidered Black Gown\n   Item No. 12\n   Original MRP: Rs 3999";
                       cout<<"\nPress the number of your choice: ";
                       cin>>n1;
                       cout<<"\n---------------------------------------------------------\n";
                       if (n1==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Pleated Party Cream Gown\nItem No. 11\nOriginal MRP: Rs 3199";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (n1==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Embroidered Black Gown\nItem No. 12\nOriginal MRP: Rs 3999";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                          cout<<"\n\n********Invalid Request********"; 
                          cout<<"\n---------------------------------------------------------\n";
                       }
                   }
                   else if (night==2)
                   {
                       cout<<"\nFor Ball Gowns, following options are available";
                       cout<<"\n1. Red Vintage Gown\n   Item No. 13\n   Original MRP: Rs 3699\n2. Yellow Satin Gown\n   Item No. 14\n   Original MRP: Rs 3399";
                       cout<<"\nPress the number of your choice: ";
                       cin>>n2;
                       cout<<"\n---------------------------------------------------------\n";

                       if (n2==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Red Vintage Gown\nItem No. 13\nOriginal MRP: Rs 3699";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (n2==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Yellow Satin Gown\nItem No. 14\nOriginal MRP: Rs 3399";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                            cout<<"\n\n********Invalid Request********";
                            cout<<"\n---------------------------------------------------------\n";
                       }   
                   }
                   else if (night==3)
                   {
                       cout<<"\nFor Cocktail Dress, following options are available";
                       cout<<"\n1. Persian Red Cocktail Dress\n   Item No. 15\n   Original MRP: Rs 1999\n2. Pleated Midi A-line Green Dress\n   Item No. 16\n   Original MRP: Rs 3099";
                       cout<<"\nPress the number of your choice: ";
                       cin>>n3;
                       cout<<"\n---------------------------------------------------------\n";

                       if (n3==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Persian Red Cocktail Dress\nItem No. 15\nOriginal MRP: Rs 1999";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (n3==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Pleated Midi A-line Green Dress\nItem No. 16\nOriginal MRP: Rs 3099";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                           cout<<"\n\n********Invalid Request********";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                   }
                   else if (night==4)
                   {
                       cout<<"\nFor Wedding Gowns, following options are available";
                       cout<<"\n1. White Lace Detail Wedding Dress\n   Item No. 17\n   Original MRP: Rs 8999\n2. White Georgette Wedding Dress\n   Item No. 18\n   Original MRP: Rs 9999";
                       cout<<"\nPress the number of your choice: ";
                       cin>>n4;
                       cout<<"\n---------------------------------------------------------\n";

                       if (n4==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: White Lace Detail Wedding Dress\nItem No. 17\nOriginal MRP: Rs 8999";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (n4==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: White Georgette Wedding Dress\nItem No. 18\nOriginal MRP: Rs 9999";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                           cout<<"\n\n********Invalid Request********";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                   }
                   else if (night==5)
                   {
                       cout<<"\nFor Bridesmaid Dress, following options are available";
                       cout<<"\n1. Pink Puff-detail Dress\n   Item No. 19\n   Original MRP: Rs 3599\n2. Maroon Asymmetric Dress\n   Item No. 20\n   Original MRP: Rs 2999";
                       cout<<"\nPress the number of your choice: ";
                       cin>>n5;
                       cout<<"\n---------------------------------------------------------\n";

                       if (n5==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Pink Puff-detail Dress\nItem No. 19\nOriginal MRP: Rs 3599";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (n5==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Maroon Asymmetric Dress\nItem No. 20\nOriginal MRP: Rs 2999";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                           cout<<"\n\n********Invalid Request********";
                           cout<<"\n---------------------------------------------------------\n";  
                       }
                   }
                   else
                   {
                       system("COLOR 0E ");
                      cout<<"\n\n********Invalid Request********";
                      cout<<"\n---------------------------------------------------------\n";
                   }
               }
               else 
               {
                   system("COLOR 0E ");
                   cout<<"\n\n********Invalid Request********";
                   cout<<"\n---------------------------------------------------------\n";
               }
           }
           else if (cat2==2)
           {
               cout<<"\nFor traditional outfits, there are following options\n";
               cout<<"\n1. Sharara/Gharara\n2. Saree\n3. Lehenga\n4. Kurta Sets\n5. Kurta\n6. Bottomwear";
               cout<<"\nPress the number of your choice: ";
               cin>>t0;
               cout<<"\n---------------------------------------------------------\n";
               
               if (t0==1)
               {
                  cout<<"\nFor Sharara/Gharara, following options are available";
                  cout<<"\n1. Red Embroidered Kurta with Sharara\n   Item No. 21\n   Original MRP: Rs 3499\n2. Teal Yoke Design Kurti with Sharara\n   Item No. 22\n   Original MRP: Rs 3999\n3. Floral Poly Georgette Gharara Set\n   Item No. 23\n   Original MRP: Rs 2999";
                  cout<<"\nPress the number of your choice: ";
                  cin>>t1;
                  cout<<"\n---------------------------------------------------------\n";
                  
                  if (t1==1)
                  {
                      system("COLOR 0E ");
                      cout<<"\nYou've chosen\nItem Name: Red Embroidered Kurta with Sharara\nItem No. 21\nOriginal MRP: Rs 3499";
                      cout<<"\n---------------------------------------------------------\n";
                  }
                  else if (t1==2)
                  {
                      system("COLOR 0E ");
                      cout<<"\nYou've chosen\nItem Name: Teal Yoke Design Kurti with Sharara\nItem No. 22\n Original MRP: Rs 3999";
                      cout<<"\n---------------------------------------------------------\n";
                  }
                  else if (t1==3)
                  {
                      system("COLOR 0E ");
                      cout<<"\nYou've chosen\nItem Name: Floral Poly Georgette Gharara Set\nItem No. 23\nOriginal MRP: Rs 2999";
                      cout<<"\n---------------------------------------------------------\n";
                  }
                  else
                  {
                      cout<<"\n\n********Invalid Request********";
                      cout<<"\n---------------------------------------------------------\n";
                  } 
               }
               else if (t0==2)
               {
                  cout<<"\nFor Saree, following options are available";
                  cout<<"\n1. Kanjeevaram Saree\n2. Banarasi Saree\n3. Other";
                  cout<<"\nPress the number of your choice: ";
                  cin>>t2;
                  cout<<"\n---------------------------------------------------------\n";
        
                  if (t2==1)
                  {
                      cout<<"\nFor Kanjeevram Saree, following options are available";
                      cout<<"\n1. Woven Design Kanjeevaram Violet Saree\n   Item No. 24\n   Original MRP: Rs 4099\n2. Yellow Silk Blend Kanjeevram Saree\n   Item No. 25\n   Original MRP: Rs 3799";
                      cout<<"\nPress the number of your choice: ";
                      cin>>sa1;
                      cout<<"\n---------------------------------------------------------\n";
                
                      if (sa1==1)
                      {
                          system("COLOR 0E ");
                          cout<<"\nYou've chosen\nItem Name: Woven Design Kanjeevaram Violet Saree\nItem No. 24\nOriginal MRP: Rs 4099";
                          cout<<"\n---------------------------------------------------------\n";
                      }
                      else if (sa1==2)
                      {
                          system("COLOR 0E ");
                          cout<<"\nYou've chosen\nItem Name: Yellow Silk Blend Kanjeevram Saree\nItem No. 25\nOriginal MRP: Rs 3799";
                          cout<<"\n---------------------------------------------------------\n";
                      }
                      else
                      {
                          cout<<"\n\n********Invalid Request********";
                          cout<<"\n---------------------------------------------------------\n";
                      }
                  }
                  else if (t2==2)
                  {
                      cout<<"\nFor Banarasi Saree, following options are available";
                      cout<<"\n1. Green and Golden Ethnic Motif Banarasi Saree\n   Item No. 26\n   Original MRP: Rs 2899\n2. Floral Dyed Banarasi Peach and Gold Toned Saree\n   Item No. 27\n   Original MRP: Rs 4199";
                      cout<<"\nPress the number of your choice: ";
                      cin>>sa2;
                      cout<<"\n---------------------------------------------------------\n";
                    
                      if (sa2==1)
                      {
                          system("COLOR 0E ");
                          cout<<"\nYou've chosen\nItem Name: Green and Golden Ethnic Motif Banarasi Saree\nItem No. 26\nOriginal MRP: Rs 2899";
                          cout<<"\n---------------------------------------------------------\n";
                      }
                      else if (sa2==2)
                      {
                          system("COLOR 0E ");
                          cout<<"\nYou've chosen\nItem Name: Floral Dyed Banarasi Peach and Gold Toned Saree\nItem No. 27\nOriginal MRP: Rs 4199";
                          cout<<"\n---------------------------------------------------------\n";
                      }
                      else
                      {
                          system("COLOR 0E ");
                          cout<<"\n\n********Invalid Request********";
                          cout<<"\n---------------------------------------------------------\n";
                      }
                  }
                  else if (t2==3)
                  {
                      cout<<"\nFor Other Types of Sarees, following options are available";
                      cout<<"\n1. Grey and Green Floral Embroidered Chiffon Saree\n   Item No. 28\n   Original MRP: Rs 3099\n2. Teal and Black Mysore Silk Saree\n   Item No. 29\n   Original MRP: Rs 2599\n3. Pink and Yellow Gotta Patti Bandhani Saree\n   Item No. 30\n   Original MRP: Rs 3299";
                      cout<<"\nPress the number of your choice: ";
                      cin>>sa3;
                      cout<<"\n---------------------------------------------------------\n";
                        
                      if (sa3==1)
                      {
                          system("COLOR 0E ");
                          cout<<"\nYou've chosen\nItem Name: Grey and Green Floral Embroidered Chiffon Saree\nItem No. 28\nOriginal MRP: Rs 3099";
                          cout<<"\n---------------------------------------------------------\n";
                      }
                      else if (sa3==2)
                      {
                          system("COLOR 0E ");
                          cout<<"\nYou've chosen\nItem Name: Teal and Black Mysore Silk Saree\nItem No. 29\nOriginal MRP: Rs 2599";
                          cout<<"\n---------------------------------------------------------\n";
                      }
                      else if (sa3==3)
                      {
                          system("COLOR 0E ");
                          cout<<"\nYou've chosen\nItem Name: Pink and Yellow Gotta Patti Bandhani Saree\nItem No. 30\nOriginal MRP: Rs 3299";
                          cout<<"\n---------------------------------------------------------\n";
                      }
                      else
                      {
                          system("COLOR 0E ");
                          cout<<"\n\n********Invalid Request********";
                          cout<<"\n---------------------------------------------------------\n";
                      }
                  }
                  else
                  {
                      system("COLOR 0E ");
                     cout<<"\n\n********Invalid Request********";
                     cout<<"\n---------------------------------------------------------\n"; 
                  }
               }
               else if (t0==3)
               {
                   cout<<"\nFor Lehenga, following options are available";
                   cout<<"\n1. Bridal Lehenga\n2. Other";
                   cout<<"\nPress the number of your choice: ";
                   cin>>t3;
                   cout<<"\n---------------------------------------------------------\n";
    
                   if (t3==1)
                   {
                       cout<<"\nFor Bridal Lehenga, following options are available";
                       cout<<"\n1. Deep Red Sequin Detail Bridal Lehenga\n   Item No. 31\n   Original MRP: Rs 13499\n2. Rani Pink Mirror Work Embellished Bridal Lehenga\n   Item No. 32\n   Original MRP: Rs 14999";
                       cout<<"\nPress the number of your choice: ";
                       cin>>le1;
                       cout<<"\n---------------------------------------------------------\n";

                       if (le1==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Deep Red Sequin Detail Bridal Lehenga\nItem No. 31\nOriginal MRP: Rs 13499";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (le1==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Rani Pink Mirror Work Embellished Bridal Lehenga\nItem No. 32\nOriginal MRP: Rs 14999";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                           cout<<"\n\n********Invalid Request********";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                   }
                   else if (t3==2)
                   {
                       cout<<"\nFor Other Types of Lehenga, following options are available";
                       cout<<"\n1. Navy Blue and Pink Banarasi Work Lehenga\n   Item No. 33\n   Original MRP: Rs 4199\n2. Turquoise Blue and Peach Embroidered Lehenga\n   Item No. 34\n   Original MRP: Rs 3599\n3. Lime Green Floral Lehenga\n   Item No. 35\n   Original MRP: Rs 2799";
                       cout<<"\nPress the number of your choice: ";
                       cin>>le2;
                       cout<<"\n---------------------------------------------------------\n";
             
                       if (le2==1)
                       {
                           system("COLOR 0E ");
                           cout<<system("COLOR 05")<<"\nYou've chosen\nItem Name: Navy Blue and Pink Banarasi Work Lehenga\nItem No. 33\nOriginal MRP: Rs 4199";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (le2==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Turquoise Blue and Peach Embroidered Lehenga\nItem No. 34\nOriginal MRP: Rs 3599";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (le2==3)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Lime Green Floral Lehenga\nItem No. 35\nOriginal MRP: Rs 2799";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                           cout<<"\n\n********Invalid Request********";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                   }
                   else
                   {
                       system("COLOR 0E ");
                       cout<<"\n\n********Invalid Request********";
                       cout<<"\n---------------------------------------------------------\n";
                   }
               }
               else if (t0==4)
               {
                   cout<<"\nFor Kurta Sets, following options are available";
                   cout<<"\n1. Carbon Blue Kurta With Trousers and Dupatta\n   Item No. 36\n   Original MRP: Rs 2199\n2. Maroon Floral Screen Print Cotton Kurta Set\n   Item No. 37\n   Original MRP: Rs 3299\n3. Black Leafy Foil Print Kurta Set\n   Item No. 38\n   Original MRP: Rs 3699";
                   cout<<"\nPress the number of your choice: ";
                   cin>>t4;
                   cout<<"\n---------------------------------------------------------\n";

                   if (t4==1)
                   {
                       system("COLOR 0E ");
                       cout<<"\nYou've chosen\nItem Name: Carbon Blue Kurta With Trousers and Dupatta\nItem No. 36\nOriginal MRP: Rs 2199";
                       cout<<"\n---------------------------------------------------------\n";
                   }
                   else if (t4==2)
                   {
                       system("COLOR 0E ");
                       cout<<"\nYou've chosen\nItem Name: Maroon Floral Screen Print Cotton Kurta Set\nItem No. 37\nOriginal MRP: Rs 3299";
                       cout<<"\n---------------------------------------------------------\n";
                   }
                   else if (t4==3)
                   {
                       system("COLOR 0E ");
                       cout<<"\nYou've chosen\nItem Name: Black Leafy Foil Print Kurta Set\nItem No. 38\n Original MRP: Rs 3699";
                       cout<<"\n---------------------------------------------------------\n";
                   }
                   else
                   {
                       system("COLOR 0E ");
                       cout<<"\n\n********Invalid Request********";
                       cout<<"\n---------------------------------------------------------\n";
                   }
               }
               else if (t0==5)
               {
                   cout<<"\nFor Kurtas, following options are available";
                   cout<<"\n1. Anarkali\n2. Straight Fit";
                   cout<<"\nPress the number of your choice: ";
                   cin>>t5;
                   cout<<"\n---------------------------------------------------------\n";
                    
                   if (t5==1)
                   {
                       cout<<"\nFor Anarkali Kurtas, following options are available";
                       cout<<"\n1. Beige Ethnic Motifs Printed Anarkali Kurta\n   Item No. 39\n   Original MRP: Rs 1899\n2. Red and Orange Bandhani Print Anarkali Kurta\n   Item No. 40\n   Original MRP: Rs 1799";
                       cout<<"\nPress the number of your choice: ";
                       cin>>k1;
                       cout<<"\n---------------------------------------------------------\n";
                      
                       if (k1==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Beige Ethnic Motifs Printed Anarkali Kurta\nItem No. 39\nOriginal MRP: Rs 1899";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (k1==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: Red and Orange Bandhani Print Anarkali Kurta\nItem No. 40\nOriginal MRP: Rs 1799";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                           cout<<"\n\n********Invalid Request********";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                   }
                   else if (t5==2)
                   {
                       cout<<"\nFor Straight Fit Kurtas, following options are available";
                       cout<<"\n1. Beige and Brown Floral Embroidered Straight Kurta\n   Item No. 41\n   Original MRP: Rs 1399\n2. White and Golden Chikankari Hand Embroidered Straight Kurta\n   Item No. 42\n   Original MRP: Rs 1699";
                       cout<<"\nPress the number of your choice: ";
                       cin>>k2;
                       cout<<"\n---------------------------------------------------------\n";
                        
                       if (k2==1)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name:  Beige and Brown Floral Embroidered Straight Kurta\nItem No. 41\nOriginal MRP: Rs 1399";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else if (k2==2)
                       {
                           system("COLOR 0E ");
                           cout<<"\nYou've chosen\nItem Name: White and Golden Chikankari Hand Embroidered Straight Kurta\nItem No. 42\nOriginal MRP: Rs 1699";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                       else
                       {
                           system("COLOR 0E ");
                           cout<<"\n\n********Invalid Request********";
                           cout<<"\n---------------------------------------------------------\n";
                       }
                   }
                   else
                   {
                        system("COLOR 0E ");
                        cout<<"\n\n********Invalid Request********";
                        cout<<"\n---------------------------------------------------------\n";
                   }
               }
               else if (t0==6)
               {
                   cout<<"\nFor Bottomwear, following options are available";
                   cout<<"\n1. Churidar\n2. Palazzo\n3. Skirt";
                   cout<<"\nPress the number of your choice: ";
                   cin>>t6;
                   cout<<"\n---------------------------------------------------------\n";

                   if (t6==1)
                   {
                        cout<<"\nFor Churidar, following options are available";
                        cout<<"\n1. Black Churidar\n   Item No. 43\n   Original MRP: Rs 1199\n2. White Churidar\n   Item No. 44\n   Original MRP: Rs 999";
                        cout<<"\nPress the number of your choice: ";
                        cin>>bm1;
                        cout<<"\n---------------------------------------------------------\n";
                    
                        if (bm1==1)
                        {
                            system("COLOR 0E ");
                            cout<<"\nYou've chosen\nItem Name:  Black Churidar\nItem No. 43\nOriginal MRP: Rs 1199";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else if (bm1==2)
                        {
                            system("COLOR 0E ");
                            cout<<"\nYou've chosen\nItem Name: White Churidar\nItem No. 44\nOriginal MRP: Rs 999";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else
                        {
                            system("COLOR 0E ");
                            cout<<"\n\n********Invalid Request********";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                   }
                   else if (t6==2)
                   {
                        cout<<"\nFor Palazzo, following options are available";
                        cout<<"\n1. Maroon Lace Detail Palazzo\n   Item No. 45\n   Original MRP: Rs 1299\n2. Black Flared Palazzo\n   Item No. 46\n   Original MRP: Rs 1599";
                        cout<<"\nPress the number of your choice: ";
                        cin>>bm2;
                        cout<<"\n---------------------------------------------------------\n";

                        if (bm2==1)
                        {
                            system("COLOR 0E ");
                            cout<<"\nYou've chosen\nItem Name: Maroon Lace Detail Palazz0\nItem No. 45\nOriginal MRP: Rs 1299";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else if (bm2==2)
                        {
                            system("COLOR 0E ");
                            cout<<"\nYou've chosen\nItem Name: Black Flared Palazzo\nItem No. 46\n Original MRP: Rs 1599";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else
                        {
                            system("COLOR 0E ");
                            cout<<"\n\n********Invalid Request********";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                   }
                   else if (t6==3)
                   {
                        cout<<"\nFor Skirt, following options are available";
                        cout<<"\n1. Blue Denim Skirt\n   Item No. 47\n   Original MRP: Rs 1499\n2. Violet Solid Coloured Full Length Skirt\n   Item No. 48\n   Original MRP: Rs 2199\n3. Layered Multicolour Skirt\n   Item No. 49\n   Original MRP: Rs 1899";
                        cout<<"\nPress the number of your choice: ";
                        cin>>bm3;
                        cout<<"\n---------------------------------------------------------\n";
                    
                        if (bm3==1)
                        {
                            system("COLOR 0E ");
                            cout<<"\nYou've chosen\nItem Name: Blue Denim Skirt\n Item No. 47\nOriginal MRP: Rs 1499";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else if (bm3==2)
                        {
                            system("COLOR 0E ");
                            cout<<"\nYou've chosen\nItem Name: Violet Solid Coloured Full Length Skirt\nItem No. 48\nOriginal MRP: Rs 2199";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else if (bm3==3)
                        {
                            system("COLOR 0E ");
                            cout<<"\nYou've chosen\nItem Name: Layered Multicolour Skirt\nItem No. 49\nOriginal MRP: Rs 1899";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else
                        {
                            system("COLOR 0E ");
                            cout<<"\n\n********Invalid Request********";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                   }
                   else
                   {
                       system("COLOR 0E ");
                       cout<<"\n\n********Invalid Request********";
                       cout<<"\n---------------------------------------------------------\n";
                   }
               }
               else
               {
                   system("COLOR 0E ");
                   cout<<"\n\n********Invalid Request********";
                   cout<<"\n---------------------------------------------------------\n";
               }
           }
           else
            {
                system("COLOR 0E ");
                cout<<"\n\n********Invalid Request********";
                cout<<"\n---------------------------------------------------------\n";
            }  
        }
        else if(g==2)
        {
            cout<<"\nYou've chosen MALE\n";
            cout<<"\n---------------------------------------------------------\n";
            system("COLOR 01 ");
            cout<<"\nFor male attire options choose from the following list:";
            cout<<"\n1. Western\n2. Traditional";
            cout<<"\nPress the number of your choice: ";
            cin>>cat1;
            cout<<"\n---------------------------------------------------------\n";

            if (cat1==1)
            {
                cout<<"\nFor western outfits, there are two options";
                cout<<"\n1. Tuxedo\n2. Suit";
                cout<<"\nPress the number of your choice: ";
                cin>>w1;
                cout<<"\n---------------------------------------------------------\n";

                if (w1==1)
                {   
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: Tuxedo\nItem No. 50\nOriginal MRP: Rs 6999";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else if (w1==2)
                {
                    cout<<"\nThere are two available options for Suits";
                    cout<<"\n1. Two-Piece Suit\n2. Three-Piece Suit";
                    cout<<"\nPress the number of your choice: ";
                    cin>>suit;
                    cout<<"\n---------------------------------------------------------\n";

                    if (suit==1)
                    {
                        cout<<"\nYov've chosen for Two-Piece Suit";
                        cout<<"\nThere are two available options for Two-Piece Suit";
                        cout<<"\n1. Black Suit\n   Item No. 53\n   Original MRP: Rs 4199\n2. Brown Suit\n   Item No. 54\n   Original MRP: Rs 5199";
                        cout<<"\nPress the number of your choice: ";
                        cin>>suit_1;
                        cout<<"\n---------------------------------------------------------\n";
                        
                        if (suit_1==1)
                        {
                            system("COLOR 0E ");
                            cout<<"You've chosen\nItem Name: Black Two-Piece Suit\nItem No. 53\nOriginal MRP: Rs 4199";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else if (suit_1==2)
                        {
                            system("COLOR 0E ");
                            cout<<"You've chosen\nItem Name: Brown Two-Piece Suit\nItem No. 54\nOriginal MRP: Rs 5199";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else
                        {   
                            system("COLOR 0E ");
                            cout<<"\n\n********Invalid Request********";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                    }
                    else if (suit==2)
                    {
                        cout<<"\nYov've chosen for Three-Piece Suit";
                        cout<<"\nThere are two available options for Three-Piece Suit";
                        cout<<"\n1. Black Suit\n   Item No. 55\n   Original MRP: Rs 6199\n2. Blue Suit\n   Item No. 56\n   Original MRP: Rs 5999";
                        cout<<"\nPress the number of your choice: ";
                        cin>>suit_2;
                        cout<<"\n---------------------------------------------------------\n";

                        if (suit_2==1)
                        {
                            system("COLOR 0E ");
                            cout<<"You've chosen\nItem Name: Black Three-Piece Suit\nItem No. 55\nOriginal MRP: Rs 6199";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else if (suit_2==2)
                        {
                            system("COLOR 0E ");
                            cout<<"You've chosen\nItem Name: Blue Three-Piece Suit\nItem No. 56\nOriginal MRP: Rs 5999";
                            cout<<"\n---------------------------------------------------------\n";
                        }
                        else
                        {
                            system("COLOR 0E ");
                            cout<<"\n\n********Invalid Request********";
                            cout<<"\n---------------------------------------------------------\n";
                        }    
                    }
                    else
                    {
                        system("COLOR 0E ");
                        cout<<"\n\n********Invalid Request********";
                        cout<<"\n---------------------------------------------------------\n";
                    }   
                }
                else
                {
                    system("COLOR 0E ");
                  cout<<"\n\n********Invalid Request********";
                  cout<<"\n---------------------------------------------------------\n";  
                }
            }
            

            else if(cat1==2)
            {
            
            cout<<"\nFor traditional outfits, there are three options";
            cout<<"\n1. Kurta\n2. Sherwani\n3. Bottomwear";
            cout<<"\nPress the number of your choice: ";
            cin>>w2;
            cout<<"\n---------------------------------------------------------\n";

            if (w2==1)
            {
                cout<<"\nThere are three available options for kurtas:";
                cout<<"\n1. Red Chikankari Kurta\n   Item No. 57\n   Original MRP: Rs 3299\n2. Blue Embroidery Kurta\n   Item No. 58\n   Original MRP: Rs 2999\n3. White Kurta with sequin work\n   Item No. 59\n   Original MRP: Rs 2699";
                cout<<"\nPress the number of your choice: ";
                cin>>kurta;
                cout<<"\n---------------------------------------------------------\n";

                if (kurta==1)
                {
                    system("COLOR 0E ");
                     cout<<"\nYou've chosen\nItem Name: Red Chikankari Kurta\nItem No. 57\nOriginal MRP: Rs 3299";
                     cout<<"\n---------------------------------------------------------\n";
                }
                else if (kurta==2)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: Blue Embroidery Kurta\nItem No. 58\nOriginal MRP: Rs 2999";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else if (kurta==3)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: White Kurta with sequin work\nItem No. 59\nOriginal MRP: Rs 2699";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else
                {
                    system("COLOR 0E ");
                    cout<<"\n\n********Invalid Request********";
                    cout<<"\n---------------------------------------------------------\n";
                }
        }
        else if (w2==2)
        {
            cout<<"\nChoose if you want Sherwani with or without turban\n";
            cout<<"\nPress 1 for with turban and 2 for without turban: ";
            cin>>sher_type;
            cout<<"\n---------------------------------------------------------\n";

            if (sher_type==1)
            {
                cout<<"\nFor sherwani with Turban, there are 3 options\n";
                cout<<"\n1. Red and Offwhite Sherwani with Maroon turban\n   Item No. 60\n   Original MRP: Rs 8999\n2. Blue Sherwani with Embroidery with silver turban\n   Item No. 61\n   Original MRP: Rs 14999\n3. Black and White Glitter Sherwani with Golden Turban\n   Item No. 62\n   Original MRP: Rs 16999";
                cout<<"\nPress the number of your choice: ";
                cin>>sherwani_1;
                cout<<"\n---------------------------------------------------------\n";

                if (sherwani_1==1)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: Red and Offwhite Sherwani with Maroon turban\nItem No. 60\nOriginal MRP: Rs 8999";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else if (sherwani_1==2)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: Blue Sherwani with Embroidery with silver turban\nItem No. 61\nOriginal MRP: Rs 14999";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else if (sherwani_1==3)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: Black and White Glitter Sherwani with Golden Turban\nItem No. 62\nOriginal MRP: Rs 16999";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else
                {
                    system("COLOR 0E ");
                    cout<<"\n\n********Invalid Request********";
                    cout<<"\n---------------------------------------------------------\n";
                }
            }
            else if (sher_type==2)
            {
                cout<<"\nFor sherwani without turban, there are 3 available options\n";
                cout<<"\n1. Beige Sherwani\n   Item No. 63\n   Original MRP: Rs 4199\n2. White Chikenkari Sherwani\n   Item No. 64\n   Original MRP: Rs 3999\n3. Black Sequin work Sherwani\n   Item No. 65\n   Original MRP: Rs 4299\n";
                cout<<"\nPress the number of your choice: ";
                cin>>sherwani_2;
                cout<<"\n---------------------------------------------------------\n";

                if (sherwani_2==1)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: Beige Sherwani\nItem No. 63\nOriginal MRP: Rs 4199";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else if (sherwani_2==2)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: White Chikenkari Sherwani\nItem No. 64\nOriginal MRP: Rs 3999";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else if (sherwani_2==3)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: Black Sequin work Sherwani\nItem No. 65\nOriginal MRP: Rs 4299";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else
                {
                    system("COLOR 0E ");
                    cout<<"\n\n********Invalid Request********";
                    cout<<"\n---------------------------------------------------------\n";
                }
            }
        }
        else if (w2==3)
        {
            cout<<"\nThere are three available options for bottomwear";
            cout<<"\n1. Pyjamas\n2. Churidar\n3. Dhoti";
            cout<<"\nEnter the number of your choice: ";
            cin>>bm;
            cout<<"\n---------------------------------------------------------\n";

            if (bm==1)
            {
                cout<<"\nYou've chosen for Pyjamas";
                cout<<"\nThere are two available options for Pyjamas";
                cout<<"\n1.White Pyjamas\n   Item No. 66\n   Original MRP: Rs 1199\n2.Maroon Pyjamas\n   Item No. 67\n   Original MRP: Rs 1299";
                cout<<"\nEnter the number of your choice: ";
                cin>>p1;
                cout<<"\n---------------------------------------------------------\n";

                if (p1==1)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: White Pyjamas\nItem No. 66\nOriginal MRP: Rs 1199";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else if (p1==2)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: Maroon Pyjamas\nItem No. 67\nOriginal MRP: Rs 1299";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else
                {
                    system("COLOR 0E ");
                    cout<<"\n\n********Invalid Request********";
                    cout<<"\n---------------------------------------------------------\n";
                }
            }
            else if (bm==2)
            {
                cout<<"\nYou've chosen for Churidar";
                cout<<"\nThere are two available options for Churidar";
                cout<<"\n1.White Churidar\n   Item No. 68\n   Original MRP: Rs 999\n2.Black Churidar\n   Item No. 69\n   Original MRP: Rs 1099";
                cout<<"\nEnter the number of your choice: ";
                cin>>c1;
                cout<<"\n---------------------------------------------------------\n";

                if (c1==1)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: White Churidar\nItem No. 68\nOriginal MRP: Rs 999";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else if (c1==2)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: Black Churidar\nItem No. 69\nOriginal MRP: Rs 1099";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else
                {
                    system("COLOR 0E ");
                    cout<<"\n\n********Invalid Request********";
                    cout<<"\n---------------------------------------------------------\n";
                }    
            } 
            else if (bm==3)
            {
                cout<<"\nYou've chosen for Dhoti";
                cout<<"\nThere are two available options for Dhoti";
                cout<<"\n1. White Dhoti\n   Item No. 70\n   Original MRP: Rs 1399\n2. Off-white Dhoti\n   Item No. 71\n   Original MRP: Rs 1299";
                cout<<"\nEnter the number of your choice: ";
                cin>>d0;
                cout<<"\n---------------------------------------------------------\n";

                if (d0==1)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name: White Dhoti\nItem No. 70\nOriginal MRP: Rs 1399";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else if (d0==2)
                {
                    system("COLOR 0E ");
                    cout<<"\nYou've chosen\nItem Name:  Off-white Dhoti\nItem No. 71\nOriginal MRP: Rs 1299";
                    cout<<"\n---------------------------------------------------------\n";
                }
                else
                {
                    system("COLOR 0E ");
                    cout<<"\n\n********Invalid Request********";
                    cout<<"\n---------------------------------------------------------\n";
                }  
            }
        
            else
            {
                cout<<"\n\n********Invalid Request********";
                cout<<"\n---------------------------------------------------------\n";
            }
    }
    
        else
        {
            system("COLOR 0E ");
            cout<<"\n\n********Invalid Request********";
            cout<<"\n---------------------------------------------------------\n";
        }
    }
    else
    {
        system("COLOR 0E ");
        cout<<"\n\n********Invalid Request********";
    }
    }
    }
    }
};  

     int main()
     {
       { 
            Welcome w;
            w.wel();
            Shop s;
            s.category();
            cout<<"You've chosen "<<s.x<<" outfits\n";
            int num;
            num= s.x;
            int renting_ammount_information, amount=0;
            cout << "-----------------\n";
            cout << "For how many days you want attire\n";
            cout << "-----------------\n\n";

            cout << "1) 1 day Renting Price: Rs 500\n";
            cout << "2) 2 day's Renting Price: Rs 700\n";
            cout << "3) 3 day's Renting Price: Rs 900\n";
            cout << "4) 4 day's Renting Price: Rs 1000\n";
            cout << "5) 5 day's Renting Price: Rs 1200\n\n";

        while (true)
        {
            cout << "Choice (1-5): ";
            if (cin >> renting_ammount_information)
            {
                break;
            }
            else
            {
                cout << "\n-------\n";
                cout << "Invalid Input\n";
                cout << "-------\n";
                cin.clear();
                cin.ignore(5000000, '\n');
            }
        }

        while (true)
        {
            if (renting_ammount_information == 1)
            {
                amount = num*500;
                break;
            }

            else if (renting_ammount_information == 2)
            {
                amount = num*700;
                break;
            }

            else if (renting_ammount_information == 3)
            {
                amount = num*900;
                break;
            }

            else if (renting_ammount_information == 4)
            {
                amount = num*1000;
                break;
            }

            else if (renting_ammount_information == 5)
            {
                amount = num*1200;
                break;
            }
            
            else
            {
                while (true)
                {
                    cout << "\n-------\n";
                    cout << "Invalid Input\n";
                    cout << "We do not provide our rental services for MORE THAN 5 DAYS AND LESS THAN 1 DAY\n";
                    cout << "-------\n";
                    cin.clear();
                    cin.ignore(5000000, '\n');
                    cout << "Choice (1-5): ";
                    cin >> renting_ammount_information;
                    break;
                }
            }
        }

        cout<<"\n\n\n----------\n";
        cout<<"Total Price is: Rs "<<amount;
        cout<<"\n----------\n";
            
            Customer c;
            c.customer_details();
            c.display();
            cout<<"\n\t\t\tTOTAL AMOUNT TO BE PAID: "<<amount<<"\n";
            cout<<"\n\t\t\t********************************\n";
            cout<<"\n\t\t\tTHANK YOU FOR VISITING OUR STORE\n";
            cout<<"\n\t\t\t********************************\n";
       }

        return 0;
     }