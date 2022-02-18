#include<bits/stdc++.h>
int main()
{
    FILE *Productfile1_8;
    char product_name[100];
    int Quantity, ID,choice,editpart_no;
    float Unit_price, buying_price, selling_price;
    printf("Product Managing Section\n");
    printf("01.Add a New Product\n");
    printf("02.Edit a Product\n");
    printf("03.Remove a Product\n");
    printf("04.Return to main manue\n");
    printf("Please Enter your choice:");
    scanf("%d" , &choice);
    Productfile1_8 = fopen("productinfo.txt" , "w");
    if (Productfile1_8==NULL)
    {
        printf("Sorry!!No Information exist! ");
    }
    //product add part
    else if(choice==1)
    {
        printf("\nAdd Product:\n");
        printf("Enter product name:");
        fflush(stdin); //as gets not work
        gets(product_name);
        printf("Product Id: ");
        scanf("%d" , &ID);
        printf("Unit Price: ");
        scanf("%f", &Unit_price);
        printf("Buying Price per unit: ");
        scanf("%f", &buying_price);
        printf("Selling Price per unit: ");
        scanf("%f", &selling_price);
        printf("Quantity: ");
        scanf("%d",&Quantity);
        fprintf(Productfile1_8, "%d %s %.2lf %.2lf %.2lf %d",ID,product_name,Unit_price,buying_price,selling_price,Quantity);
        printf("Successfully added !");
        fclose(Productfile1_8);
    }
    //Edition Part
    else if(choice==2)
    {
    printf("Edit product\n\n");
    printf("01.Edit product by name.\n");
    printf("02.Edit product by ID.\n\n");
    printf("Enter your choice:");
    scanf("%d" , &choice);
    //edit by product name
    if(choice==1)
    {
        printf("\nEnter product name:");
        fflush(stdin); //as gets not work
        gets(product_name);
        printf("\nYou can edit these parts:\n\n");
        printf("01.Quantity\n");
        printf("02.Buying price per unit\n");
        printf("03.Selling Price per unit\n\n");
        printf("Enter the number of the part that you want to edit:");
        scanf("%d" , &editpart_no);
        if(editpart_no==1){
            printf("Edit quantity:");
            scanf("%d" ,&Quantity);
        }
       else if(editpart_no==2){
            printf("Edit Buying price per unit:");
            scanf("%d" ,&buying_price);
        }
        else if(editpart_no==3){
            printf("Edit Selling price per unit:");
            scanf("%d" ,&selling_price);
        }
        fprintf(Productfile1_8, "%s %d %.2lf %.2lf" ,product_name,Quantity,buying_price,selling_price);
        printf("successfully Edited !");
    }
    //Edit by Id
    else if(choice==2)
    {
       printf("Product ID:");
       scanf("%d" , &ID);
       printf("\nYou can edit these parts:\n\n");
       printf("01.Quantity\n");
       printf("02.Buying price per unit\n");
       printf("03.Selling Price per unit\n\n");
       printf("Enter the number of the part that you want to edit:");
       scanf("%d" , &editpart_no);
       if(editpart_no==1){
            printf("Edit quantity:");
            scanf("%d" ,&Quantity);
        }
       else if(editpart_no==2){
            printf("Edit Buying price per unit:");
            scanf("%d" ,&buying_price);
        }
        else if(editpart_no==3){
            printf("Edit Selling price per unit:");
            scanf("%d" ,&selling_price);
        }
        fprintf(Productfile1_8, "%d %d %.2lf %.2lf" ,ID,Quantity,buying_price,selling_price);
        printf("successfully Edited !");
    }
}
  //Remove Product
  else if(choice==3)
  {
    printf("Remove Product:\n");
    printf("Enter Product Name that you want to remove:");
    fflush(stdin);
    gets(product_name);
    printf("Product Id: ");
    scanf("%d" , &ID);
  }
  else
      printf("Return to main manue!");


}

