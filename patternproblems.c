1.#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

2.
#include <stdio.h>

int main(){
    int n,count=1;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",'A'+(count++)-1);
        }
        printf("\n");
    }
    return 0;
}

3.#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==5){
            for(int j=1;j<=5;j++){
                printf("* ");
            }
        } else {
            for(int j=1;j<=5;j++){
                if(j==1 || j==5){
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

4.
#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==1){
            for(int j=1;j<=5;j++){
                printf("* ");
            }
        }else{
            for(int j=1;j<=5;j++){
                if(j==3){
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");   
    }
    return 0;
}

5.
#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==3 || i==5){
            for(int j=1;j<=5;j++){
                printf("* ");
            }
        }else{
            for(int j=1;j<=5;j++){
                if(j==1 || j==5){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

6.
#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==3 || i==5){
            for(int j=1;j<=5;j++){
                printf("* ");
            }
        }else{
            for(int j=1;j<=5;j++){
                if((i<=3 && j==1) || (i>3 && j==5)){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

7.

#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==3 || i==5){
            for(int j=1;j<=5;j++){
                printf("* ");
            }
        }else{
            for(int j=1;j<=5;j++){
                if((i<=3 && j==5) || (i>3 && j==1)){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

8.
#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==3 ){
            for(int j=1;j<=5;j++){
                printf("* ");
            }
        }else{
            for(int j=1;j<=5;j++){
                if(j==1 || j==5){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

9.
#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==5){
            for(int j=1;j<=5;j++){
                printf("* ");
            }
        }else{
            for(int j=1;j<=5;j++){
                if(j==1 || j==5){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

10.
#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==3 || i==5){
            for(int j=1;j<=5;j++){
                printf("* ");
            }
        }else{
            for(int j=1;j<=5;j++){
                if(j==1 || (i>3 && j==5)){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

11.

#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==3 || i==5){
            for(int j=1;j<=5;j++){
                printf("* ");
            }
        }else{
            for(int j=1;j<=5;j++){
                if(j==1){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

12.
#include <stdio.h>

int main(){
    int m,n;
    scanf("%d%d", &m, &n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

13.

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

14.

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

15.

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

16.
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=n;i>0;i--){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
17.
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
18.
#include <stdio.h>

int main(){
    int n,count=1;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",count++);
        }
        printf("\n");
    }
    return 0;
}

19.
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}
