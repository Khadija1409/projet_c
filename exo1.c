#include <stdio.h>

int main(){
    int x ,n,somme=0,cpt=0,cpt2=0;
    float moy;
    do{
    printf("saisir n entiers:");
    scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
        do{
            printf("veuillez saisir un entier negatif:");
        scanf("%d",&x);
        }while(x>0);
        if(x%2==0){
            somme+=x;
            cpt++;
        }else{
            cpt2++;
        }
    }
    moy=somme/cpt;
    printf("la moyenne est:%.2f",moy);
    printf("le nombre de nombre impair est:%d",cpt2);

return 0;
}
