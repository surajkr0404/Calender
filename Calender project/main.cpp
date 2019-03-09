#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class calender
{
    public:
    int total_no_of_odd_days;
        calender()
        {
            cout<<endl<<endl;
    cout<<"                                                   A Project "<<endl<<endl;
    cout<<"                                                      ON "<<endl<<endl;
    cout<<"                                                   CALENDER   "<<endl<<endl<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                 MADE BY :    "<<endl;
    cout<<"                                                                                                SURAJ KUMAR(1628232) "<<endl<<endl;
    cout<<"                                    Please enter the date in correct ways ,Here the compiler ask you to enter \n"<<endl<<endl;
    cout<<"                                    date of month,month of year and year of calender."<<endl<<endl;
    cout<<"\n                                          HERE,WE FIND OUT THE DAYS OF THE WEEK"<<endl;
    cout<<"\n                                   Press 1. for See the days of a week and the remaining calender"<<endl;
    cout<<"\n                    press 2. for displaying the whole calender of a year by simply enter the year values"<<endl;
    getch();
 system("cls");

        }
    void calculation(int days,int month,int year)
    {
        int i,count=0;

        int year1=(year-1)%400;
        //cout<<year1;

        int year2=year1%100;
        //cout<<"\n"<<year2;

        int no_of_year=year1/100;
        //cout<<"\n"<<no_of_year;

        int odd_days_for_year=(no_of_year*5)%7;
        //cout<<"\n"<<odd_days_for_year;

        int odd_for_leap_year=year2/4;
        //cout<<"\n"<<odd_for_leap_year;

        int odd_days_leap=2*odd_for_leap_year;
       // cout<<"\n"<<odd_days_leap;

        int oridinary_year=year2-odd_for_leap_year;
       //cout<<"\n"<<oridinary_year;

        int odd_days=(odd_days_for_year+odd_days_leap+oridinary_year)%7;
        //cout<<"\n"<<odd_days<<endl;

        for( i=1;i<=month-1;i++)
        {
            switch(i)
            {
                case 1:
                    {
                        count+=3;
                        break;
                    }
                case 2:
                    {
                        if(year%400==0|| (year%4==0 && year%100!=0) )
                        count+=1;
                        else
                            count+=0;
                      break;
                    }
                case 3:
                    {
                        count+=3;
                        break;
                    }
                case 4:
                    {
                        count+=2;
                        break;
                    }
                case 5:
                    {
                        count+=3;
                        break;
                    }
                case 6:
                    {
                        count+=2;
                        break;
                    }
                case 7:
                    {
                        count+=3;
                        break;
                    }
                case 8:
                    {
                        count+=3;
                        break;
                    }
                case 9:
                    {
                        count+=2;
                        break;
                    }
                case 10:
                    {
                        count+=3;
                        break;
                    }
                case 11:
                    {
                        count+=2;
                        break;
                    }
                case 12:
                    {
                        count+=3;
                        break;
                    }
            }
        }

         //cout<<count<<endl<<endl;

        total_no_of_odd_days=(count+days+odd_days)%7;

    }

/*Here, we display the day of th week.
  after getting the value of number of
  odd days, we display the day. */

        void print_Day_of_week()
        {

       if(total_no_of_odd_days==0) {
        cout<<"The days of the week is Sunday"<<endl<<endl<<endl;
         }
       else if(total_no_of_odd_days==1) {
        cout<<"The days of the week is Monday"<<endl<<endl<<endl;
         }
       else if(total_no_of_odd_days==2)  {
        cout<<"The days of the week is Tuesday"<<endl<<endl<<endl;
        }
        else if(total_no_of_odd_days==3)  {
        cout<<"The days of the week is Wednesday"<<endl<<endl<<endl;
         }
        else if(total_no_of_odd_days==4) {
        cout<<"The days of the week is Thursday"<<endl<<endl<<endl;
          }
        else if(total_no_of_odd_days==5) {
        cout<<"The days of the week is friday"<<endl<<endl<<endl;
         }
        else if(total_no_of_odd_days==6) {
        cout<<"The days of the week is Saturday"<<endl<<endl<<endl;
        }
      }

    /* Here,we show the month of the calender.
    After getting the value of the month of the year,
    i simply pass it to showcalender method. */

     void getMonth(int month)
    {
string Mahina[13]={ "Invalid","January","February","March","April","May","June","July","August","September","October","November","December"};

        cout<<setw(30)<<Mahina[month]<<endl;
        cout<<"---------------------------------------------------"<<endl<<endl<<endl;
    }

    int getDays(int month,int year)
    {
        if(month==1)
         return 31;


        if(month==2)
            if(year%400==0|| (year%4==0 && year%100!=0) ) {
                 return 29; }
         else       { return 28;  }


        if(month==3)
        return 31;


        if(month==4)
        return 30;


        if(month==5)
        return 31;


        if(month==6)
        return 30;


        if(month==7)
        return 31;


        if(month==8)
        return 31;


        if(month==9)
        return 30;


        if(month==10)
        return 31;



        if(month==11)
        return 30;


        if(month==12)
        return 31;

    }
        /*Here we simply try to display all the date of the month.
         *******************************************************
         ******************************************************** */
         void diplay_month(int days_no,int month,int year)
        {
            int j;

            int counting=0;
             cout<<"Sun"<<"     "<<"Mon"<<"     "<<"Tue"<<"     "<<"Wed"<<"     "<<"Thu"<<"     "<<"Fri"<<"     "<<"Sat"<<endl;
             for(j=0;j<total_no_of_odd_days;j++)
                {
             cout<<"        ";
             counting++;
                }

             for(int i=days_no;i<=getDays(month,year);i++)
                {
                    if(i<=9)
                        cout<<" ";
             cout<<i<<"      ";
              ++counting;
              if(counting==7)
              {
                  cout<<"\n";
                  counting=0;
              }
              if(i==getDays(month,year))
                 cout<<"\n \n \n \n \n \n ";
                }
}
};

int main()
{
    long days,month,year,j,n;
    string months;
calender cal;
choice:
cout<<"       \n\n  Enter your choice either 1 or 2 "<<endl;

cout<<"   "; cin>>n;
getch();


if(n==1)
{
repeat_days:
    system("cls");
cout<<" \n\n   Enter the date of a calender:"<<endl<<endl;
cout<<"      ";cin>>days;
if(days>=1&&days<=31)
{  repeat_Month:
cout<<"\n \n   Enter the month of a calender:"<<endl<<endl;
cout<<"      ";   cin>>months;

   stringstream geek(months);
   geek>>month;

   if(months=="January"   || months=="Jan" || months=="january"  || months=="jan"  || months=="JANUARY")
    month=1;
   if(months=="February"  || months=="Feb" || months=="february" || months=="feb"  || months=="FEBRUARY")
    month=2;
   if(months=="March"     || months=="Mar" || months=="march"    || months=="mar"  || months=="MARCH")
    month=3;
    if(months=="April"    || months=="Apr" || months=="april"    || months=="apr"  || months=="APRIL")
    month=4;
    if(months=="May"      || months=="may" || months=="MAY"      || months=="may"  || months=="MAY")
    month=5;
    if(months=="June"     || months=="Jun" || months=="june"     || months=="jun"  || months=="JUNE")
    month=6;
    if(months=="July"     || months=="Jul" || months=="july"     || months=="jul"  || months=="JULY")
    month=7;
    if(months=="August"   || months=="Aug" || months=="august"   || months=="aug"  || months=="AUGUST")
    month=8;
    if(months=="September"|| months=="Sep" || months=="september"|| months=="jan"  || months=="SEPTEMBER")
    month=9;
    if(months=="October"  || months=="Oct" || months=="october"  || months=="oct"  || months=="OCTOBER")
    month=10;
    if(months=="November" || months=="Nov" || months=="november" || months=="nov"  || months=="NOVEMBER")
    month=11;
    if(months=="December" || months=="Dec" || months=="december" || months=="dec"  || months=="DECEMBER")
    month=12;

if(month>=1&&month<=12)
    {
      repeat_year:
cout<<"\n \n   Enter the year of a calender:"<<endl<<endl;
cout<<"      ";  cin>>year;
 if(year>999 && year<10000) { cout<<"  "; } else {cout<<"\n \n             Year is not valid \n        please try Again"<<endl<<endl; goto repeat_year;  }
    }
    else { cout<<"     \n       Month is not valid \n        Please try Again \n \n "<<endl<<endl<<endl<<endl;
          goto repeat_Month;
           }
cout<<endl<<endl;
cout<<"you have entered ---------------->    "<<days<<" / "<<month<<" / "<<year<<endl<<endl;
cal.calculation(days,month,year);
}
else
{
    cout<<"   \n    Date is not valid Entry \n  Please Try Again"<<endl<<endl<<endl<<endl;
    goto repeat_days;
}

cal.print_Day_of_week();
cal.getMonth(month);
cal.getDays(month,year);
cal.diplay_month(days,month,year);
getch();

/*I want to display remaining all month of the year.
  Here,We see how to display all the month */

 for(j=month+1;j<=12;j++)
           {

            cal.calculation(1,j,year);
            cal.getMonth(j);
            cal.getDays(j,year);
            cal.diplay_month(1,j,year);
            getch();

           }
}
else if(n==2)
{ system("cls");
    cout<<"\n Enter Year of a calender"<<endl;
   cout<<"  "; cin>>year;
    cout<<endl;
    for(j=1;j<=12;j++)
           {

            cal.calculation(1,j,year);
            cal.getMonth(j);
            cal.getDays(j,year);
            cal.diplay_month(1,j,year);
            getch();

           }
} else {
        cout<<setw(22)<<" Invalid Entry"<<endl;
        cout<<setw(24)<<"Try Again"<<endl<<endl;
         goto choice;  }

    return 0;
}
