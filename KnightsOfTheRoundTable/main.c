//
//  main.c
//  KnightsOfTheRoundTable
//
//  Created by Akhil Verghese on 4/18/13.
//  Copyright (c) 2013 Akhil Verghese. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n=1;
    double ans=0;
    while(n!=0)
    {
        scanf("%d\n",&n);
        if(n==1)
            printf("With 1 competitor, a Jedi Knight will be replaced approximately 0.00 times.\n");
        else if(n>1)
        {
            for (i=2;i<=n;i++)
            {
                ans+=(1.0000/i);
            }
            printf("With %d competitors, a Jedi Knight will be replaced approximately %0.2lf times.\n",n,ans);
            ans=0;
        }
    }
}

