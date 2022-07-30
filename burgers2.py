#BURGERS2
t=int(input())
for i in range(t):
    x,y,n,r=map(int,input().split())
    if x==y:
      
    else:
        a=(r-(n*y))/x-y
        if(a<0):
            a=(r-(n*x))/y-n
        b=n-a
        if(a<b):
            print(a,"\t",b)
        else:
            print(b,"\t",a)
