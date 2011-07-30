                                             
#examples on writting your own functions when using R
#Remember, whatever variable that you define inside a 
#function(a local variable) will only be available to you inside of that function
#and nowhere else. Local variables can't be called outside of their function

Mx<-function(x1){ #mean function
n<-length(x1)
sum(x1)/n
}

Vx<-function(x1){	# variance funcion w/loop
y=seq(0,0,length=length(x1))
n1<-length(x1)
for(i in 1:n1)
   {
    y[i]<-((x1[i]-Mx(x1))^2)
   }
sum(y)/(length(x1)-1)
}


Varx<-function(x1){	#variance function w/o loop
n1<-length(x1)
y1<-sum((x1-Mx(x1))^2)/(n1-1)
y1}

Sx<-function(x1){	#Standard deviation funcion w/loop
y=seq(0,0,length=length(x1))
n1<-length(x1)
for(i in 1:n1)
   {
    y[i]<-((x1[i]-Mx(x1))^2)
   }
sum(y)/length(x1)-1
z<-sum(y)/(length(x1)-1)
sqrt(z)
}

Sdx<-function(x1){	#standard deviation function w/o loop
n1<-length(x)
y1<-sum((x1-Mx(x1))^2)/(n1-1)
sqrt(y1)
}

Corx<-function(x1,x2){	#function for the correlation coefficiant w/loop
n1<-length(x1)
n2<-length(x2)
if(n1!=n2)
 {
   print("Error! Different Number of Observations Not Allowed")
 }
mx1<-Mx(x1)
mx2<-Mx(x2)
sdx1<-sd(x1)
sdx2<-sd(x2)
x<-seq(0,0,length=n1)
for(i in 1:n1)
 {
   x[i]<-((x1[i]-mx1)/sdx1)*((x2[i]-mx2)/sdx2)
 }

sum(x)/(n1-1)
}


Crx<-function(x1,x2){
n1<-length(x1)
n2<-length(x2)
if(n1 !=n2)
 {
   print("Must use same number of observations")
 }
mx1<-Mx(x1)
mx2<-Mx(x2)
sdx1<-sd(x1)
sdx2<-sd(x2)
z<-sum(     ((x1-mx1)/sdx1)   *   ((x2-mx2)/sdx2)     )
crl<-z/(n1-1)
print(crl)
if(crl==0){
   print("No Correlation")
  }
if(crl>0 & crl<=.3){
   print("Weak Positive Correlation")
  }
if(crl>.3 & crl<=.7){
   print("Moderate Positive Correlation")
  }
if(crl>.7 & crl<1){
   print("Strong Positive Correlation")
  }
if(crl==1){
   print("Perfect Positive Correlation")
  }
if(crl==-1){
   print("Perfect Negative Correlation")
  }
if(crl<0 & crl>= -.3){
   print("Weak Negative Correlation")
  }
if(crl< -.3 & crl>= -.7){
   print("Mederate Negtive Correlation")
  }
if(crl< -.7 & crl> -1){
   print("Strong Negative Correlation")
  }
}


--------------------------------------------------------------------------------------------
#qnorm(0.9,0,1) this command gives you the critical valu such that 90% of the curve
#is on the left hand side
#pnorm(0.9,0,1) this command gives you the area under the curve to the left of the critical value at .90.
#With both the pnorm and qnorm commands, you need to specify a mean and sd, which should be 0 and 1 since 
#you are using the standard normal distribution.



normCI<-function(x1,c){
sdx1<-Sx(x1)
n1<-length(x1)
x1bar<-Mx(x1)
c<-(1-c)/2+c       #this transforms the test from a one tailed test into a two tailed test
q<-qnorm(c,0,1)
lci<-x1bar-(q*(sdx1/sqrt(n1)))
uci<-x1bar+(q*(sdx1/sqrt(n1)))
print(lci)
print(uci)
}

studentTCI<-function(x1,c,df){
xbar<-Mx(x1)
sdx1<-Sx(x1)
n1<-length(x1)
c<-(1-c)/2+c
t<-qt(c,df)
df<-n1-1
lci<-xbar-(t*(sdx1/sqrt(n1)))
uci<-xbar+(t*(sdx1/sqrt(n1)))
print(lci)
print(uci)
}

chebCI<-function(x1,c){
k<-sqrt(1-(1/c))
xbar<-Mx(x1)
sdx1<-Sx(x1)
n1<-length(x1)
lci<-xbar-(k*(sdx1/sqrt(n1)))
uci<-xbar+(k*(sdx1/sqrt(n1)))
}
----------------------------------------------------------------------------------------------
corrC(x1,x2){
r=(1/(n-1))Crx(x1,x2)
b=r(Sx(x1)/Sx(x2))
a=Mx(x2)-b*Mx(x1)
r
b
a
}
ANOVA<-function(x1,x2){
vector1<-seq(0,0,length=x1[1]

for(i in 1:length(x1[1])){
   vector1[i]<-x1[i]
   }