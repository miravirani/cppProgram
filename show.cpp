#include<iostream>
using namespace std;
int st1;
void showtime()
{
  cout<<endl<<"__TIME__"<<endl;
  cout<<"1.Morning"<<endl
      <<"2.Afternoon"<<endl
      <<"3.Evening"<<endl
      <<"4.Night"<<endl
      <<"5.Exit"<<endl;
  cout<<"Select Your Time:->";
  cin>>st1;
  switch (st1)
  {
    case 1:
       cout<<"___MORNING___"<<endl;
       break;
    case 2:
       cout<<"___AFTERNOON___"<<endl;
       break;
    case 3:
       cout<<"___EVENING___"<<endl;
       break;
    case 4:
       cout<<"___NIGHT___"<<endl;
       break;
    case 5:
       cout<<"___EXIT___"<<endl;
       break;
    default:
       break;
  }
}
int r,st2;
void classis()
{
  cout<<"__Seat Row__";
  cout<<endl<<"1.A"<<endl<<"2.B"<<endl<<"3.C";
  cout<<endl<<"Select Row:->";
  cin>>r;
  switch(r)
  {
  case 1:
   cout<<"___A:->[ClASSIC]__"<<endl;
   cout<<"1.[A1]\t2.[A2]\t3.[A3]\t4.[A4]\n5.[A5]\t6.[A6]\t7.[A7]\t8.[A8]"<<endl;
   cout<<endl<<"Select Your Row And Seat Number:->";
   cin>>st2;
   cout<<endl<<"...Yapp!...You Booked Your Seat.......";
   break;
  case 2:
   cout<<"___B:->[ClASSIC]__"<<endl;
   cout<<"1.[B1]\t2.[B2]\t3.[B3]\t4.[B4]\n5.[B5]\t6.[B6]\t7.[B7]\t8.[B8]"<<endl;
   cout<<endl<<"Select Your Row And Seat Number:->";
   cin>>st2;
   cout<<endl<<"...Yapp!...You Booked Your Seat.......";
   break;
  case 3:
   cout<<"___C:->[ClASSIC]__"<<endl;
   cout<<"1.[C1]\t2.[C2]\t3.[C3]\t4.[C4]\n5.[C5]\t6.[C6]\t7.[C7]\t8.[C8]"<<endl;
   cout<<endl<<"Select Your Row And Seat Number:->";
   cin>>st2;
   cout<<endl<<"...Yapp!...You Booked Your Seat.......";
   break;
   break;
  case 4:
    break;
  default:
    break;
  }
}
int st3,r1;
void royal()
{
  cout<<"__Seat Row__";
  cout<<endl<<"4.D"<<endl<<"5.E"<<endl<<"6.F";
  cout<<endl<<"Select Row:->";
  cin>>r1;
  switch(r1)
  {
  case 4:
   cout<<"___D:->[ROYAL]__"<<endl;
   cout<<"1.[D1]\t2.[D2]\t3.[D3]\t4.[D4]\n5.[D5]\t6.[D6]\t7.[D7]\t8.[D8]"<<endl;
   cout<<endl<<"Enter Your Seat Number:->";
   cin>>st3;
   cout<<endl<<"...Yapp!...You Booked Your Seat.......";
   break;
  case 5:
   cout<<"___E:->[ROYAL]__"<<endl;
   cout<<"1.[E1]\t2.[E2]\t3.[E3]\t4.[E4]\n5.[E5]\t6.[E6]\t7.[E7]\t8.[E8]"<<endl;
   cout<<endl<<"Enter Your Seat Number:->";
   cin>>st3;
   cout<<endl<<"...Yapp!...You Booked Your Seat.......";
   break;
  case 6:
   cout<<"___F:->[ROYAL]__"<<endl;
   cout<<"1.[F1]\t2.[F2]\t3.[F3]\t4.[F4]\n5.[F5]\t6.[F6]\t7.[F7]\t8.[F8]"<<endl;
   cout<<endl<<"Enter Your Seat Number:->";
   cin>>st3;
   cout<<endl<<"...Yapp!...You Booked Your Seat.......";
   break;
  case 7:
    break;
  default:
    break;
  
  }
}
int tp;
long int pt,pw;
void payment()
{
  cout<<"__PayMent__"<<endl;
  cout<<"1.UPI"<<endl
      <<"2.Debit Card"<<endl
      <<"3.Moblie Wallets"<<endl
      <<"4.Net Bankin"<<endl
      <<"5.Exit"<<endl;
  cout<<"Please.! Select One Option....!"<<endl;
  cin>>tp;
  switch(tp)
  {
  case 1:
     cout<<"___UPI___"<<endl;
     cout<<"Enter Your UPI Code:->";
     cin>>pt;
     cout<<"Enter Your Password:->";
     cin>>pw;
     break;
  case 2:
     cout<<"___DEBIT CARD___"<<endl;
     cout<<"Enter Your Card Number:->";
     cin>>pt;
     cout<<endl<<"Enter Your Password:->";
     cin>>pw;
     break;
  case 3:
     cout<<"___MOBLIE WALLETS___"<<endl;
     cout<<"Enter Your Password:->";
     cin>>pw;
     cout<<endl<<"Enter OTP:->";
     cin>>pt;
     break;
  case 4:
     cout<<"___NET BANKING___"<<endl;
     cout<<"Enter PIN:->";
     cin>>pt;
     cout<<endl<<"Enter Your Password:->";
     cin>>pw;
     break;
  case 5:
    break;
  default:
    break;  
  }
}
int main()
{
    int n,l,gp,th,st,num,hp;
    cout<<endl<<"\tBook My Show";
    cout<<endl<<"---*******WELCOME*******---";
    cout<<endl<<"---->>>>In Which Language You Want To Watch Movie<<<<----";
    cout<<endl<<"1.Gujarati";
    cout<<endl<<"2.Hindi";
    cout<<endl<<"3.English";
    cout<<endl<<"4.Tamil";
    cout<<endl<<"5.Telugu";
    cout<<endl<<"6.Exit"<<endl;
    cin>>l;
    cout<<"Yepp!...You Select Option No "<<l<<" language";
    switch(l)
    {
        case 1:
            cout<<endl<<"__Gujarati Movies__";
            cout<<endl<<"1.Hu Ane Tu";
            cout<<endl<<"2.Chal Jivi Laiae";
            cout<<endl<<"3.Nadi Dosh";
            cout<<endl<<"4.No One";
            cout<<endl<<"Please Select One Movie:->";
            cin>>gp;
            cout<<endl<<"You Select Option No "<<gp<<" Movie";
            break;
        case 2:
            cout<<endl<<"__Hindi Movies__";
            cout<<endl<<"5.Yarrian 2";
            cout<<endl<<"6.LEO";
            cout<<endl<<"7.Ganpat";
            cout<<endl<<"8.No One";
            cout<<endl<<"Please Select One Movie:->";
            cin>>gp;
            break;
        case 3:
            cout<<endl<<"__English Movies__";
            cout<<endl<<"9.Dedpool";
            cout<<endl<<"10.Iron Man";
            cout<<endl<<"11.Nun 2";
            cout<<endl<<"12.No One";
            cout<<endl<<"Please Select One Movie:->";
            cin>>gp;
            break;
        case 4:
            cout<<endl<<"__Tamil Movies__";
            cout<<endl<<"13.Jailer";
            cout<<endl<<"14.Mark Anotony";
            cout<<endl<<"15.Beast";
            cout<<endl<<"16.No One";
            cout<<endl<<"Please Select One Movie:->";
            cin>>gp;
            break;
       case 5:
            cout<<endl<<"__Telugu Movies__";
            cout<<endl<<"17.Major";
            cout<<endl<<"18.Sita Ramam";
            cout<<endl<<"19.khushi";
            cout<<endl<<"20.No One";
            cout<<endl<<"Please Select One Movie:->";
            cin>>gp;
            break;
    }
    switch(gp)
    {
      case 1:
         cout<<endl<<"__Hu Ane Tu__";
         cout<<endl<<"Select Theater";
         cout<<endl<<"1.INOX:VR Mall"<<endl
                   <<"2.PVR:Rahul Raj"<<endl
                   <<"3.City Plus Multiplex"<<endl
                   <<"4.Exit";
         cout<<endl<<"Please Enter One Option:->";
         cin>>th;
         break;
      case 2:
         cout<<endl<<"__Chal Jivi Laiae__";
         cout<<endl<<"Select Theater";
         cout<<endl<<"1.INOX:VR Mall"
             <<endl<<"2.PVR:Rahul Raj"
             <<endl<<"3.City Plus Multiplex"
             <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 3:
        cout<<endl<<"__Nadi Dosh__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 5:
        cout<<endl<<"__Yaeeian 2__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"<<endl
                  <<"2.PVR:Rahul Raj"<<endl
                  <<"3.City Plus Multiplex"<<endl
                  <<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 6:
        cout<<endl<<"__LEO__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 7:
        cout<<endl<<"__Ganpat__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 9:
        cout<<endl<<"__Dedpool__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 10:
        cout<<endl<<"__Iron Man__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 11:
        cout<<endl<<"__Nun 2__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 13:
        cout<<endl<<"__Jailer__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
       cin>>th;
       break;
      case 14:
        cout<<endl<<"__Mark Anotony__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 15:
        cout<<endl<<"__Beast__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 17:
        cout<<endl<<"__Major__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 18:
        cout<<endl<<"__Sita Ramam__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 19:
        cout<<endl<<"__Khushi__";
        cout<<endl<<"Select Theater";
        cout<<endl<<"1.INOX:VR Mall"
            <<endl<<"2.PVR:Rahul Raj"
            <<endl<<"3.City Plus Multiplex"
            <<endl<<"4.Exit";
        cout<<endl<<"Please Enter One Option:->";
        cin>>th;
        break;
      case 20:
       break;
    default:
       cout<<endl<<"Please SELECT valid Option";
       break;
                
    }
    switch(th)
    {
      case 1:
        cout<<endl<<"__INOX:VR Mall__";
        showtime();
        cout<<endl<<"Select Seat Type:->";
        cout<<endl<<"1.classic=Rs.350"<<endl<<"2.Royal=Rs.270"<<endl<<"3.Exit"<<endl;
        cout<<endl<<"Please Enter One Option:->";
        cin>>st;
        switch(st)
        {
          case 1:
             cout<<endl<<"__Classis__";
             cout<<endl<<"Rs.350(Per Ticket)";
             cout<<endl<<"How Many Tickets You Want To Book:->";
             cin>>num;
             classis();
             cout<<endl<<"Your Total Amount:->"<<350*num<<endl;
             payment();
             cout<<"--(:Your Ticket Book Successfuly:)--";
             break;
          case 2:
             cout<<endl<<"__Royal__";
             cout<<endl<<"Rs.270(Per Ticket)";
             cout<<endl<<"How Many Tickets You Want To Book:->";
             cin>>num;
             royal();
             cout<<endl<<"Your Total Amount:->"<<270*num<<endl;
             payment();
             cout<<"--(:Your Ticket Book Successfuly:)--";
             break;
          case 3:
            break;
          default:
            cout<<"Envalid Option";
            break;
        }
          break;
      case 2:
        cout<<endl<<"__PVR:Rahul Raj__";
        showtime();
        cout<<endl<<"Select Seat Type:->";
        cout<<endl<<"1.classic=Rs.300"<<endl<<"2.Royal=Rs.250"<<endl<<"3.Exit"<<endl;
        cout<<endl<<"Please Enter One Option:->";
        cin>>st;
        switch(st)
        {
          case 1:
            cout<<endl<<"__Classis__";
            cout<<endl<<"Rs.300(Per Ticket)";
            cout<<endl<<"How Many Tickets You Want To Book:->";
            cin>>num;
            classis();
            cout<<endl<<"Your Total Amount:->"<<300*num<<endl;
            payment();
            cout<<"--(:Your Ticket Book Successfuly:)--";
            break;
          case 2:
            cout<<endl<<"__Royal__";
            cout<<endl<<"Rs.250(Per Ticket)";
            cout<<endl<<"How Many Tickets You Want To Book:->";
            cin>>num;
            royal();
            cout<<endl<<"Your Total Amount:->"<<250*num<<endl;
            payment();
            cout<<"--(:Your Ticket Book Successfuly:)--";
            break;
          case 3:
             break;
          default:
            cout<<"Envalid Option";
            break;
         }
            break;
      case 3:
        cout<<endl<<"__City Plus Multiplex__";
        showtime();
        cout<<endl<<"Select Seat Type:->";
        cout<<endl<<"1.classic=Rs.400"<<endl<<"2.Royal=Rs.350"<<endl<<"3.Exit"<<endl;
        cout<<endl<<"Please Enter One Option:->";
        cin>>st;
        cout<<"You select "<<st<<" Seat Type";
        switch(st)
        {
          case 1:
            cout<<endl<<"__Classis__";
            cout<<endl<<"Rs.400(Per Ticket)";
            cout<<endl<<"How Many Tickets You Want To Book:->";
            cin>>num;
            classis();
            cout<<endl<<"Your Total Amount:->"<<400*num<<endl;
            payment();
            cout<<endl<<"--(:Your Ticket Book Successfuly:)--";
            break;
          case 2:
            cout<<endl<<"__Royal__";
            cout<<endl<<"Rs.350(Per Ticket)";
            cout<<endl<<"How Many Tickets You Want To Book:->";
            cin>>num;
            royal();
            cout<<endl<<"Your Total Amount:->"<<350*num<<endl;
            payment();
            cout<<endl<<"--(:Your Ticket Book Successfuly:)--";
            break;
          case 3:
            break;
          default:
            cout<<"Envalid Option";
            break;
        }
      case 4:
        break;
      default:
        cout<<endl<<"Please SELECT valid Option";
        break;
    }
}
             
        