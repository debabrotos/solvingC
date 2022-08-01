#include <stdio.h>
int main(){
    int T, i, r1, r2, B, ball_played;
    double current_rr, askin_rr;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d ", &r1, &r2, &B);
        ball_played = 300 - B;
        current_rr = (r2 * 1.0 / ball_played) * 6;
        askin_rr =  ((r1 * 1.0 - r2 + 1) / B  * 1.0) * 6;
        printf("%0.2lf %0.2lf  \n", current_rr, askin_rr);
    }
    return 0;
}