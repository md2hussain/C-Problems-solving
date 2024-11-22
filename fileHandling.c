/*#include<stdio.h>
int main()
{
    FILE *fil;
    char _file_name[20];
    printf("Enter a file name : ");
    scanf("%s",_file_name);
    fil=fopen(_file_name,"r");
    if(fil==NULL)
    {
        printf("File is not found\n");
    }
    else{
        char ch;
        ch=fgetc(fil);
        printf("%c",ch);
    }
    fclose(fil);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *fil;
    char _file_name[20];
    printf("Enter a file name : ");
    scanf("%s",_file_name);
    fil=fopen(_file_name,"r");
    if(fil==NULL)
    {
        printf("File is not found\n");
    }
    else{
        char ch;
        int i=0;
    //    while(i<=5){
        ch=fgetc(fil);
        printf("%d",EOF);
        //printf("%d",);

        i++;
     //   }
    }
    fclose(fil);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *fil;
    char _file_name[20];
    printf("Enter a file name : ");
    scanf("%s",_file_name);
    fil=fopen(_file_name,"r");
    if(fil==NULL)
    {
        printf("File is not found\n");
    }
    else{
        char ch;
        int i=0;
        while((ch=fgetc(fil))!=EOF){ //add EOF is stop to blink until reach the -1(End of the file)
        printf("%c",ch);
        i++;
        }
    }
    fclose(fil);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("sample.txt","r");
    fp2=fopen("sample1.txt","w");
    if(fp1==NULL || fp2==NULL)
    {
        printf("A file is not found\n");
    }
    else{
        char ch;
        while((ch=fgetc(fp1))!=EOF)
    {
            fputc(ch,fp2);
    }   
    }
    fclose(fp1);
    fclose(fp2);
}*/
/*#include<stdio.h>

int main()
{
    FILE *fp1, *fp2;
    
    // Open the first file in read mode and the second file in write mode
    fp1 = fopen("sample.txt", "r");
    fp2 = fopen("sample1.txt", "w");
    
    // Check if both files opened successfully
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening files\n");
        return 1;  // Return error code if file opening fails
    }
    else
    {
        char ch;
        // Copy characters from sample.txt to sample1.txt
        while ((ch = fgetc(fp1)) != EOF)
        {
            fputc(ch, fp2);
        }
    }
    
    // Close both files
    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.\n");
    
    return 0;
}*/
/*#include<stdio.h>

int main()
{
    FILE *fp1, *fp2;

    // Open the first file in read mode and the second file in write mode
    fp1 = fopen("sample.txt", "r");
    fp2 = fopen("sample1.txt", "w");

    // Check if both files opened successfully
    if (fp1 == NULL)
    {
        printf("Error: Could not open sample.txt (file not found or empty)\n");
        return 1;  // Return error code if file opening fails
    }

    if (fp2 == NULL)
    {
        printf("Error: Could not open sample1.txt for writing\n");
        fclose(fp1);  // Close the first file since it opened successfully
        return 1;  // Return error code if file opening fails
    }

    char ch;
    int characterCount = 0;

    // Copy characters from sample.txt to sample1.txt
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
        characterCount++;  // Count how many characters are copied
    }

    // Close both files
    fclose(fp1);
    fclose(fp2);

    if (characterCount == 0)
    {
        printf("Warning: sample.txt is empty. Nothing was copied.\n");
    }
    else
    {
        printf("File copied successfully. %d characters were copied.\n", characterCount);
    }

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("file1.txt","r");
    if(fp1==NULL)
    {
        printf("A file not found !\n");
    }
    else{
        char ch;
        fp2=fopen("file2.txt","w");
        while((ch=fgetc(fp1))!=EOF)
        {
            fputc(ch,fp2);
        }
        fclose(fp1);
        fclose(fp2);
        printf("File is copied sucessfully");
        
    }
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    FILE *fp1;//*fp2;
    fp1=fopen("file3.txt","r");
    //fp2=fopen("file4.txt","w");
    printf("File is created succesfully\n");
    if(fp1=fopen("file4.txt","r"))
    {
        char str[50],*p;
        //printf("Enter a String : ");
        //scanf("%s",str);
        //char str[]="Hi guys my name is Hussain";
        while((p=fgets(str,50,fp1))!=NULL);
        printf("%s\n",str);
        //fprintf(fp1,"%s\n",str);
        fclose(fp1);
        //fclose(fp2);
    }
    else{
        printf("File is not be writing properly\n");
        
    }
    

}*/
/*#include<stdio.h>
int main()
{
    FILE *fp1;
    fp1=fopen("file4.txt","w");
    char str[100];
    printf("Enter a String :");
    fgets(str,100,stdin);
    int n=fputs(str,fp1);
    fclose(fp1);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *fp1;
    fp1=fopen("file5.txt","w");
    int id=23;
    char name[]="Hussain";
    float salary=3223.44;
    fprintf(fp1,"%d\n%s\n%f",id,name,salary);
    fprintf(stdout,"%d\n%s\n%f",id,name,salary);
    fclose(fp1);
}*/
/*#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file.bin","rb");
    int arr[10];
    fread(&arr,sizeof(arr),1,fp);
    printf("%d %d %d %d",arr[0],arr[1],arr[2],arr[3]);
    fclose(fp);
}*/
/*#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file.txt","a");
    fputs("Hello EVerybody",fp);
    printf("ftell=%ld",ftell(fp));//ftell printf the pointer location
    fclose(fp);
}*/
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file.txt","r");
    if(fp==NULL)
        printf("file is not found\n");
    else{
        printf("File is available\n");
        char ch;
    
        while((ch=fgetc(fp))!=EOF)
        {
            printf("%c",ch);
            ch++;
            printf("ftell=%ld\n",ftell(fp));
            rewind(fp);
            printf("ftell=%ld\n",ftell(fp));
            fclose(fp);

        }
    }
    return 0;
}






