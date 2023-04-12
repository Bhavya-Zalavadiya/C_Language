import 'dart:io';

class Customer {
    int? cust_id;
    String? cust_name;
    String? cust_contact;

    Customer () {
      stdout.write("Enter your name : ");
      cust_name = stdin.readLineSync()!;
      stdout.write("Enter your id : ");
      cust_id = int.parse(stdin.readLineSync()!);
      stdout.write("Enter your name : ");
      cust_contact = stdin.readLineSync()!;
    }
    getData () {
      print("The name of customer : ${cust_name}");
      print("The id of customer : ${cust_id}");
      print("The contact number of customer : ${cust_contact}");
    }
}

class Product {

}

main ()
{
    int? n;
    int? choice,a,b,d;
    int qty = 1;
    int bill = 0;
    stdout.write("Enter number of customers : ");
    n=int.parse(stdin.readLineSync()!);
    
    for(int i=0;i<n;i++)
    {
      do {
        Customer c = Customer();
        print("Press 1 for grocery");
        print("Press 2 for Fragrance");
        print("Press 3 for Smartphone");
        print("Press 4 for Laptop");
        print("Press 0 for Exit");
        stdout.write("Enter your choice : ");
        choice = int.parse(stdin.readLineSync()!);

        switch(choice)
        {
          case 1 :
           print("Press 1 for wheat");
          print("Press 2 for fruits");
          print("Press 3 for vegetables");
          print("Press 4 for cornfloor");
          stdout.write("Enter your choice : ");
          a = int.parse(stdin.readLineSync()!);     
          switch(a)
          {
              case 1 :
                stdout.write("How many quantity of wheat  you want to buy : ");
                qty = int.parse(stdin.readLineSync()!);
                bill = bill + qty *20;
              break;
              case 2 :
                  stdout.write("How many quantity of friuts  you want to buy : ");
                  qty = int.parse(stdin.readLineSync()!);
                  bill = bill + qty * 150;
              break;
               case   3 :
                  stdout.write("How many quantity of  vegetables you want to buy : ");
                  qty = int.parse(stdin.readLineSync()!);
                  bill = bill + qty * 30;
              break;
               case 4 :
                  stdout.write("How many quantity of cornfloor  you want to buy : ");
                  qty = int.parse(stdin.readLineSync()!);
                  bill = bill + qty *40;
              break;
          }
          break;

          case 2:
           print("Press 1 for fragrence of fruit");
          print("Press 2 for fragrence of jasmine");
          print("Press 3 for fragrence of gourmand");
          print("Press 4 for fragrence of vetiver");
          stdout.write("Enter your choice : ");
          b = int.parse(stdin.readLineSync()!);     
          switch(b)
          {
              case 1 :
                stdout.write("How many quantity of fragrence of fruit  you want to buy : ");
                qty = int.parse(stdin.readLineSync()!);
                bill = bill + qty * 150;
              break;
              case 2 :
                  stdout.write("How many quantity of fragrance of jasmine  you want to buy : ");
                  qty = int.parse(stdin.readLineSync()!);
                  bill = bill + qty * 250;
              break;
               case   3 :
                  stdout.write("How many quantity of  fragrence of gourmand  you want to buy : ");
                  qty = int.parse(stdin.readLineSync()!);
                  bill = bill + qty * 3000;
              break;
               case 4 :
                  stdout.write("How many quantity of fragrence of vetiver  you want to buy : ");
                  qty = int.parse(stdin.readLineSync()!);
                  bill = bill + qty * 400;
              break;
          }
          break;

          case 3:
           print("Press 1 for Redmi A1");
          print("Press 2 for Samsung Galaxy M04");
          print("Press 3 for Oneplus Nord CE 2 Lite 5G");
          print("Press 4 for Oppo A78");
          stdout.write("Enter your choice) : ");
          d = int.parse(stdin.readLineSync()!);
          switch(d)
          {
              case 1 :
                stdout.write("How many quantity of Redmi A1  you want to buy : ");
                qty = int.parse(stdin.readLineSync()!);
                bill = bill + qty * 15000;
              break;
              case 2 :
                  stdout.write("How many quantity of fragrance of jasmineSamsung Galaxy M04  you want to buy : ");
                  qty = int.parse(stdin.readLineSync()!);
                  bill = bill + qty * 25000;
              break;
               case   3 :
                  stdout.write("How many quantity of  Oneplus Nord CE 2 Lite G5  you want to buy : ");
                  qty = int.parse(stdin.readLineSync()!);
                  bill = bill + qty * 30000;
              break;
               case 4 :
                  stdout.write("How many quantity of Opppo A78  you want to buy : ");
                  qty = int.parse(stdin.readLineSync()!);
                  bill = bill + qty * 40000;
              break;
          }
          break;
        }
      }while(choice!=0);
     for(int i=0;i<n;i++)
     {
       if(bill>=500 && bill<=1500)
      {
        
        print("The total bill after discount : ${bill*0.1}");
      }
      else if(bill>1500 && bill<=3500)
      {
        print("The total bill after discount : ${bill*0.2}");
      }
      else if(bill>3500 && bill<=6500)
       {
        print("The total bill after discount : ${bill*0.25}");
      }
      else
      {
        print("The total bill after discount : ${bill*0.3}");
      }
     }
  }

    
}