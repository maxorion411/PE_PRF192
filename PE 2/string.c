#include <stdio.h>
int length(char *s)
{
    int count=0;
    while (s[count] != NULL)
    {
        count++;
    }
    return count;
}
void reserve(char *s)
{
    char temp;
    int i=0;
    int j=strlen(s)-1;
    while (i<j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    printf("%s",s);
}
void check(char s[],char c)
{
    int i;
    int count=0;
    for(i=0;i<length(s);i++)
    {
        if(s[i] == c)
            count++;
    }
    printf("%d",count);
}
void replace(char s[],char k)
{
    int i;
    for(i=0;i<length(s);i++)
    {
        if(s[i] == '3')
            s[i]=k;
    }
    printf("%s",s);
}
void check(char s[],char k)
{
    int i;
    int count=0;
    int index;
    for(i=0;i<length(s);i++)
    {
        if(k==s[i])
        {
            index=i;
            count++;
            break;
        }
    }
    if (count != 0)
    {
        printf("%d",index);
    }
    else
    {
        printf("-1");
    }
}  
void compare(char s1[],char s2[])
{
    int i;
    int flag;
    for(i=0;i<length(s1);i++)
    {
        if(s1[i] != s2[i])
        {
            if(s1[i] > s2[i])
                flag=1;
            else
                flag =-1;    
        }
        else 
            flag=0;
    }
    if(flag==0)
        printf("Two string have the same name");
    else 
    {
        printf("Two string don't have the same name");
    }  
}
void countword(char s[])
{
    int i;
    int count=0;
    for(i=0;i<length(s);i++)
    {
        if(s[i] == ' ' && s[i+1] != ' '||s[i+1] == NULL)
            count++;
    }
    printf("%d",count);
}
/*xoa khoang trang thua*/
void delete(char *s,int position)
{
    int i;
    int len=length(s);
    for(i=position;i<len;i++)
    {
        s[i]=s[i+1];

    }
    len--;
}
void removespace(char *s)
{
    int i;
    int len=length(s);
    for(i=0;i<len;i++)
    {
        if(s[0] == ' ')
        {
            delete(s,0);
            len--;
        }
        if(s[len-1] == ' ')
        {
            delete(s,len-1);
            len--;
        }
        if(s[i] == ' ' && s[i+1] == ' ')
        {
            delete(s,i);
            i--;
            len--;
        } 
    }
    printf("%s",s);
}
//chuẩn hoá tên
void replaceUp(char s[])
{
    int i;
    int len=length(s);
    for(i=0;i<len;i++)
    {
        if(i==0 && s[i] != ' ' || s[i] != ' ' && s[i-1] == ' ')
        {
            if(s[i] >= 'a' && s[i] <= 'z')
                s[i]-=32;   
        }
        else if(s[i] >='A' && s[i] <='Z')
                s[i]+=32; 
    }
    printf("%s",s);
}
void removeallSpaces(char *str) 
{ 
    // To keep track of non-space character count 
    int count = 0; 
  
    // Traverse the given string. If current character 
    // is not space, then place it at index 'count++' 
    for (int i = 0; str[i]; i++) 
        if (str[i] != ' ') 
            str[count++] = str[i]; // here count is 
                                   // incremented 
    str[count] = '\0'; 
}
char *removeDuplicate(char str[], int n) 
{ 
   // Used as index in the modified string 
   int index = 0;    
     
   // Traverse through all characters 
   for (int i=0; i<n; i++) { 
         
     // Check if str[i] is present before it   
     int j;   
     for (j=0; j<i; j++)  
        if (str[i] == str[j]) 
           break; 
       
     // If not present, then add it to 
     // result. 
     if (j == i) 
        str[index++] = str[i]; 
   } 
     
   return str; 
} 
int isSubstring(char s1[],char s2[])
{
    int len1=strlen(s1);
    int len2=strlen(s2);
    int i,j;
    int count=0;
    for(i=0;i<=len1-len2;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(s2[i+j] != s1[j]) break;
        }
        if(j == len2)
            count++;
    }
    return count;
}


void to_lower(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
}
 
void to_upper(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}
 
void to_title(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        if (str[i - 1] == ' ' || i == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
    }
}
 
 
  void Correct(char str[], int length)
{
    int first = 0, last = length - 1;
    // Xóa dấu trắng đầu chuỗi
    while (first < last && str[first] == ' ')
        first++;
    // Xóa dấu trắng cuối chuỗi
    while (last > first && str[last] == ' ')
        last--;
 
    // Viết hoa chữ cái đầu tiên
    if (str[first] >= 'a' && str[first] <= 'z')
        str[first] -= 32;
    for (int i = first + 1; i <= last; i++)
    {
        // Đưa hết về chữ thường
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
        if (i + 1 <= last)
        {
            // Bỏ dấu trắng thừa ở giữa
            if (str[i] == str[i + 1] && str[i] == ' ')
            {
                continue;
            }
            // Nếu là chữ cái đầu mỗi từ thì viết hoa
            if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] -= 32;
            }
        }
        printf("%c", str[i]);
    }
}

void count(char str[])
{
    int i;
    int count1=0,count2=0,count3=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] >='A' && str[i] <= 'z')
        {
            count1++;
        }
        else if(str[i] >= '1' && str[i] <='9')
        {
            count2++;
        }
        else
            count3++;
    }
    printf("\nNumber of Alphabet is: %d ",count1);
    printf("\nNumber of Digits is: %d ",count2);
    printf("\nNumber of special characters is : %d ",count3);
}

void maxoccuring(char *str)
{
    int i;
    int max=-1;
    int freq[256] ={0};
    char index;
    for(i=0;i<strlen(str);i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<strlen(str);i++)
    {
        if(max < freq[str[i]])
        {
            max=freq[str[i]];
            index=str[i];
        }
    }
    printf("The Highest frequency of character '%c' appear number of times:%d",index,max);
}


void sortstring(char *str)
{
    char temp;
    int i,j;
    for(i=0;i<strlen(str)-1;i++)
    {
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[i] > str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    
}
void substring(char *str,int *pos,int *length)
{
    printf("Input the position to start extraction: ");
    scanf("%d",pos);
    printf("Input the length of substring: ");
    scanf("%d",length);
    char sub[50];
    int count;
    while(count<*length)
    {
        sub[count]=str[*pos+count-1];
        count++;
    }
    sub[count]='\0';
    printf("The substring retrieve from the string is: %s",sub);
}


void largestword(char *str)
{
    char b[50];
    char c[50];
    int max=0;
    int i,j=0;
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            b[j++]=str[i];
        }
        else
        {
            b[j] ='\0';
            if (strlen(b) > max)
            {
                strcpy(c,b);
                max=strlen(b);
            }
            j=0;
        }   
    }
    printf("%s",c);
}
void smallest(char *str)
{
    int i,k=0;
    int min = -1;
    char d[50];
    char e[50];
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            d[k++]=str[i];
        }
        else
        {
            d[k] ='\0';
            if (strlen(d) < min)
            {
                strcpy(e,d);
                min=strlen(d);
            }
            k=0;
        }   
    }
    printf("\n%s",e);
}
void sortname(char name[][MC+1],int n)
{
    int i,j;
    char temp[MC+1];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j]) > 0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
}