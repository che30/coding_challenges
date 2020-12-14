int main(){
    int t,first=0,second=1,third=first+second,even=0;
    cout<<"enter"<<endl;
    cin >> t;
  while(even<t)
  {
    if(third%2==0)
    { cout<<third<<endl;
      even+=third;
      if(even>t)
      {
        even=even-third;
        break;
      }
    }
    first=second;
    second=third;
    third=first+second;
  }
    cout<<even;
    return 0;
}