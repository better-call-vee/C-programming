//you'll be given specific number of inputs with specific values but one of them will be
//different from the others. So, you have to find the different number's position

#include<stdio.h>
int main () {
    int arr[100]; //a certain range will be given in the question
    int n, i;
    int ec = 0, oc = 0;
    int ans;
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=1; i<=n; i++) {
        if(arr[i]%2==0) ec++;
        else oc++;
    }
    if(ec==1) {
        for(i=1; i<=n; i++){
            if(arr[i]%2==0) ans = i;
        }
    }
    else {
        for(i=1; i<=n; i++){
            if(arr[i]%2!=0) ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
