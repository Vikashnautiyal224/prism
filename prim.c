   visited[1]=1; // visited first node
    while(no_e<n)
    {
        min=1000;
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    if(visited[i]!=0)
                    {
                        min=cost[i][j];
                        a=i;
                        b=j;
                    }
                }
            }
        }
        
        if(visited[b]==0)
        {
            printf("\n%d to %d  cost=%d",a,b,min);
            min_cost=min_cost+min;
            no_e++;
        }
        visited[b]=1;
        
        cost[a][b]=cost[b][a]=1000; 
    }
    printf("\nminimum weight is %d",min_cost);
    return 0;
}
