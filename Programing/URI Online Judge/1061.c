#include<stdio.h>
int main(){
    int d1,h1,m1,s1,d2,h2,m2,s2;
    scanf("%d", &d1);
    scanf("%d%d%d", &h1,&m1,&s1);
    scanf("%d", &d2);
    scanf("%d%d%d", &h2,&m2,&s2);

    if((d2>=d1) && (h2>=h1) && (m2>=m1) && (s2>=s1)){
        printf("%d dia(s)\n", d2-d1-1);
        printf("%d hora(s)\n", h2-h1);
        printf("%d minuto(s)\n", m2-m1);
        printf("%d segundo(s)\n", s2-s1);
    }
    else if((d2>=d1) && (h2>=h1) && (m2<=m1) && (s2>=s1)){
        printf("%d dia(s)\n", d2-d1);
        printf("%d hora(s)\n", h2-h1-1);
        if(m2<m1){
            printf("%d minuto(s)\n", m2-m1+60);
        }
        else{
           printf("%d minuto(s)\n", m2-m1);
        }
        printf("%d segundo(s)\n", s2-s1);
    }
    else if((d2>=d1) && (h2>=h1) && (m2<=m1) && (s2<=s1)){
        printf("%d dia(s)\n", d2-d1);
        printf("%d hora(s)\n", h2-h1-1);
        if(m2<m1){
            printf("%d minuto(s)\n", m2-m1+60-1);
        }
        else{
           printf("%d minuto(s)\n", m2-m1);
        }
        if(s2<s1){
            printf("%d segundo(s)\n", s2-s1+60);
        }
        else{
           printf("%d segundo(s)\n", s2-s1);
        }
    }
    else if((d2>=d1) && (h2>=h1) && (m2>=m1) && (s2<=s1)){
        printf("%d dia(s)\n", d2-d1);
        printf("%d hora(s)\n", h2-h1);
        printf("%d minuto(s)\n", m2-m1-1);
        if(s2<s1){
            printf("%d segundo(s)\n", s2-s1+60);
        }
        else{
           printf("%d segundo(s)\n", s2-s1);
        }
    }
    else if((d2>=d1) && (h2<=h1) &&  (m2>=m1) && (s2>=s1)){
        printf("%d dia(s)\n", d2-d1-1);
        printf("%d hora(s)\n", h2-h1+24);
        printf("%d minuto(s)\n", m2-m1);
        printf("%d segundo(s)\n", s2-s1);
    }
     else if((d2>=d1) && (h2<=h1) &&  (m2<=m1) && (s2>=s1)){
        printf("%d dia(s)\n", d2-d1-1);
        printf("%d hora(s)\n", h2-h1+24-1);
        if(m2<m1){
            printf("%d minuto(s)\n", m2-m1+60);
        }
        else{
           printf("%d minuto(s)\n", m2-m1);
        }
        printf("%d segundo(s)\n", s2-s1);
    }
    else if((d2>=d1) && (h2<=h1) &&  (m2<=m1) && (s2<=s1)){
        printf("%d dia(s)\n", d2-d1-1);
        printf("%d hora(s)\n", h2-h1+24-1);
        if(m2<m1){
            printf("%d minuto(s)\n", m2-m1+60-1);
        }
        else{
           printf("%d minuto(s)\n", m2-m1);
        }
        if(s2<s1){
            printf("%d segundo(s)\n", s2-s1+60);
        }
        else{
           printf("%d segundo(s)\n", s2-s1);
        }
    }
    else if((d2>=d1) && (h2<=h1) &&  (m2>=m1) && (s2<=s1)){
        printf("%d dia(s)\n", d2-d1-1);
        printf("%d hora(s)\n", h2-h1+24);
        printf("%d minuto(s)\n", m2-m1-1);
        if(s2<s1){
            printf("%d segundo(s)\n", s2-s1+60);
        }
        else{
           printf("%d segundo(s)\n", s2-s1);
        }
    }
    return 0;
}
