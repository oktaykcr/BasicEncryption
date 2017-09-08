#include<stdio.h>
#include<stdlib.h>
#include<string.h>
enum Menu {CREATE,READ,APPEND,EXIT};

int main(void)
{
    FILE* Output_file;
    FILE* Input_file;
    FILE* Append_file;
    enum Menu menu;
    int choose;
a:  printf("Please select the action you want to do:\n1---->CREATE\n2---->READ\n3---->APPEND\n4---->EXIT\n");
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:
            menu=CREATE;
            break;
        case 2:
            menu=READ;
            break;
        case 3:
            menu=APPEND;
            break;
        case 4:
            menu=EXIT;
            break;
        default:
            printf("Please enter one of the numbers mentioned !");
            goto a;

    }
    if(menu==CREATE)
    {
        if((Input_file=fopen("Input.txt","r"))!=NULL)
        {
        char ch;
        Output_file=fopen("Output.txt","w");
        ch=fgetc(Input_file);
        while(ch!=EOF)
        {
            ch=fgetc(Input_file);
            switch(ch)
            {
                case 'A':
                case 'a':
                    fprintf(Output_file," -*- ");
                    break;
                case 'B':
                case 'b':
                    fprintf(Output_file," _-* ");
                    break;
                case 'C':
                case 'c':
                    fprintf(Output_file," *-* ");
                    break;
                case 'D':
                case 'd':
                    fprintf(Output_file," __* ");
                    break;
                case 'E':
                case 'e':
                    fprintf(Output_file," --_ ");
                    break;
                case 'F':
                case 'f':
                    fprintf(Output_file," **_ ");
                    break;
                case 'G':
                case 'g':
                    fprintf(Output_file," -*_ ");
                    break;
                case 'H':
                case 'h':
                    fprintf(Output_file," -** ");
                    break;
                case 'I':
                case 'i':
                    fprintf(Output_file," ___ ");
                    break;
                case 'J':
                case 'j':
                    fprintf(Output_file," --* ");
                    break;
                case 'K':
                case 'k':
                    fprintf(Output_file," --- ");
                    break;
                case 'L':
                case 'l':
                    fprintf(Output_file," *_- ");
                    break;
                case 'M':
                case 'm':
                    fprintf(Output_file," *** ");
                    break;
                case 'N':
                case 'n':
                    fprintf(Output_file," _*- ");
                    break;
                case 'O':
                case 'o':
                    fprintf(Output_file," -__ ");
                    break;
                case 'P':
                case 'p':
                    fprintf(Output_file," <-* ");
                    break;
                case 'Q':
                case 'q':
                    fprintf(Output_file," ``_ ");
                    break;
                case 'R':
                case 'r':
                    fprintf(Output_file," <<> ");
                    break;
                case 'S':
                case 's':
                    fprintf(Output_file," -*< ");
                    break;
                case 'T':
                case 't':
                    fprintf(Output_file," <>> ");
                    break;
                case 'U':
                case 'u':
                    fprintf(Output_file," <|< ");
                    break;
                case 'V':
                case 'v':
                    fprintf(Output_file," **< ");
                    break;
                case 'W':
                case 'w':
                    fprintf(Output_file," _`` ");
                    break;
                case 'X':
                case 'x':
                    fprintf(Output_file," >`< ");
                    break;
                case 'Y':
                case 'y':
                    fprintf(Output_file," _-> ");
                    break;
                case 'Z':
                case 'z':
                    fprintf(Output_file," |<> ");
                    break;
                case ' ':
                    fprintf(Output_file,"`?`");
                    break;
            }
        }
        printf("\n");
        printf("Process completed.");
        fclose(Input_file);
        fclose(Output_file);
        }
        else
        {
            printf("File Not Found!!\n");
            puts("The file is being rebuilt.....");
            Input_file=fopen("Input.txt","w");
            fclose(Input_file);
            puts("File created!");
            goto a;
        }
    }
    if(menu==READ)
    {
        char characters[26][50]={"-*-","_-*","*-*","__*","--_","**_","-*_","-**","___","--*","---","*_-","***","_*-","-__","<-*","``_","<<>","-*<","<>>","<|<","**<","_``",">`<","_->","|<>"};
        Output_file=fopen("Output.txt","r");
        Input_file=fopen("Input.txt","w");
        char symbol[3];
        while(fscanf(Output_file,"%s",symbol)!=EOF){
            if(strcmp(symbol,characters[0])==0)
            {
                fprintf(Input_file,"a");

            }
            if(strcmp(symbol,characters[1])==0)
            {
                fprintf(Input_file,"b");

            }
            if(strcmp(symbol,characters[2])==0)
            {
                fprintf(Input_file,"c");

            }
            if(strcmp(symbol,characters[3])==0)
            {
                fprintf(Input_file,"d");

            }
            if(strcmp(symbol,characters[4])==0)
            {
                fprintf(Input_file,"e");

            }
            if(strcmp(symbol,characters[5])==0)
            {
                fprintf(Input_file,"f");

            }
            if(strcmp(symbol,characters[6])==0)
            {
                fprintf(Input_file,"g");

            }
            if(strcmp(symbol,characters[7])==0)
            {
                fprintf(Input_file,"h");

            }
            if(strcmp(symbol,characters[8])==0)
            {
                fprintf(Input_file,"i");

            }
            if(strcmp(symbol,characters[9])==0)
            {
                fprintf(Input_file,"j");

            }
            if(strcmp(symbol,characters[10])==0)
            {
                fprintf(Input_file,"k");

            }
            if(strcmp(symbol,characters[11])==0)
            {
                fprintf(Input_file,"l");

            }
            if(strcmp(symbol,characters[12])==0)
            {
                fprintf(Input_file,"m");

            }if(strcmp(symbol,characters[13])==0)
            {
                fprintf(Input_file,"n");
            }
            if(strcmp(symbol,characters[14])==0)
            {
                fprintf(Input_file,"o");
            }
            if(strcmp(symbol,characters[15])==0)
            {
                fprintf(Input_file,"p");
            }
            if(strcmp(symbol,characters[16])==0)
            {
                fprintf(Input_file,"q");
            }
            if(strcmp(symbol,characters[17])==0)
            {
                fprintf(Input_file,"r");

            }if(strcmp(symbol,characters[18])==0)
            {
                fprintf(Input_file,"s");
            }
            if(strcmp(symbol,characters[19])==0)
            {
                fprintf(Input_file,"t");
            }
            if(strcmp(symbol,characters[20])==0)
            {
                fprintf(Input_file,"u");
            }
            if(strcmp(symbol,characters[21])==0)
            {
                fprintf(Input_file,"v");
            }
            if(strcmp(symbol,characters[22])==0)
            {
                fprintf(Input_file,"w");
            }
            if(strcmp(symbol,characters[23])==0)
            {
                fprintf(Input_file,"x");
            }
            if(strcmp(symbol,characters[24])==0)
            {
                fprintf(Input_file,"y");
            }
            if(strcmp(symbol,characters[25])==0)
            {
                fprintf(Input_file,"z");
            }
            if(strcmp(symbol,"`?`")==0)
            {
                fprintf(Input_file," ");
            }
            else if(symbol==NULL)
            {
                printf("Operation failed!");
                break;
            }
        }
        printf("\n");
        printf("The operation has been performed successfully!");
        fclose(Input_file);
        fclose(Output_file);
    }
    if(menu==APPEND)
    {
        char ch;
        Append_file=fopen("Append.txt","a");
        Output_file=fopen("Output.txt","r");
        ch=fgetc(Output_file);
        while(ch!=EOF)
        {
            ch=fgetc(Output_file);
            fprintf(Append_file,"%c",ch);

        }
        printf("Process completed!");
        fprintf(Append_file,"\n");

        fclose(Output_file);
        fclose(Append_file);

    }
    if(menu==EXIT)
    {
        printf("Exiting program...");
        return 0;
    }
    return 0;
}
