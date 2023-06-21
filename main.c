#include <stdio.h>

int main() {
//    int age = 0;
//    printf("please input your age:");
//    scanf("%d",&age);
//
//    if(age > 18) {
//        printf("you are a adulate\n");
//        printf("you are freedom\nyou can do ever you want to do");
//
//    }
//    else {
//
//        if (age > 16)
//            printf("you are a younger\n");
//        else
//            printf("you are a kid\n");
//    }
//    int num = 4;
//    if(5 == num){
//        printf("haha\n");
//    }
//    //输出1-100之间的奇数
//    int a = 0 ,b=0;
//    for(a = 1;a<=100;a++) {//让a自增，
//        if (0 != a % 2) {//用a余2，不为0则是奇数
//            b++;
//            printf("%d\t", a);
//            if(0 == b%4)//每输出4个数字就换行
//                printf("\n");
//        }
//    }
//    return 0;
//    int day = 0;
//    printf("please input week number :");
//    scanf("%d",&day);
//    switch (day) {
//        case 1:
//            printf("monday");break;
//        case 2:
//            printf("Tuesday");break;
//        case 3:
//            printf("Wednesday");break;
//        case 4:
//            printf("Thursday");break;
//        case 5:
//            printf("Friday");break;
//        case 6:
//            printf("Saturday");break;
//        case 7:
//            printf("Sunday");
//            break;
//        default:
//            printf("error");
//    }
//int n = 1,m = 2;
//    switch (n) {
//        case 1:m++;
//        case 2:n++;
//        case 3:
//            switch (n) {
//                case 1:n++;
//                case 2:m++;n++;
//                    break;
//
//            }
//        case 4:m++;
//            break;
//        default:
//            break;
//    }
//    printf("m = %d , n= %d\n",m,n);
//    int i = 0;
//    while (i<=10){
//        i++;
//        if(i==4) continue;//continue后面的不在继续，从新开始循环
//        //break;
//        printf("%d\t",i);
//
//    }
//    char ch;
//    ch = getchar();
//    putchar(ch);
//    printf("%c\n",ch);
    int ch = 0;
    while ((ch = getchar())!=EOF){
        putchar(ch);
    }
}
