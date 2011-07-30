normCI<-function(x1,c){
sdx1<-sd(x1)
n1<-length(x1)
x1bar<-mean(x1)
c<-(1-c)/2+c       #this transforms the test from a one tailed test into a two tailed test
q<-qnorm(c,0,1)
lci<-x1bar-(q*sdx1)
uci<-x1bar+(q*sdx1)
print(lci)
print(uci)
}

asalary<-read.table("F:/salary.txt",header=T,sep=",",dec=".")
nsalary<-data.frame(subset(asalary,select=c(Lname,Fname,MI,DisciPline,ProfessorialRank,WeeksinYear,SalaryLastYear,SalaryThisYear)))
attach(asalary)

scount<-0
for(i in 1:length(SalaryThisYear)){
   if(SalaryThisYear[i]>100000){
       scount<-scount+1
    }
 }   
u40count<-0
for(i in 1:length(SalaryThisYear)){
    if(SalaryThisYear[i]<40000){
       u40count<-u40count+1
    }
  }

counter<-0
salary9001<-seq(0,0,length=length(counter))

for(i in 1:1686){
   if(ProfessorialRank[i]==9001){
   counter<-counter+1
   salary9001[counter]<-SalaryThisYear[i]
   }
}

normCI(salary9001,.9)   

average.raise<-abs(mean(SalaryLastYear)-mean(SalaryThisYear))

professorfac<-factor(ProfessorialRank)
table(professorfac)
aggregate 

asalary<-read.table("F:/salary.txt",header=T,sep=",",dec=".")
nsalary<-data.frame(subset(asalary,select=c(Lname,Fname,MI,DisciPline,ProfessorialRank,WeeksinYear,SalaryLastYear,SalaryThisYear)))
attach(asalary)

6,9115,9120,9121,9126,9152,9160,9161,9166,9173,9178,9394,9434,
9460,9462)
 average.raise<-abs(mean(SalaryLastYear)-mean(SalaryThisYear))
[1] 9053.087

weekly.ford<-read.csv("G:/Documents/WeeklyFord.csv",dec=".",sep=",",header=T)
monthly.ford<-read.csv("G:/Documents/MonthlyFord.csv",dec=".",sep=",",header=T)
attach(weekly.ford)
attach(monthly.ford)
anhiw<-c(mean(weekly.ford$High[1:54]),
mean(weekly.ford$High[55:106]),
mean(weekly.ford$High[107:158]),
mean(weekly.ford$High[159:209]),
mean(weekly.ford$High[210:261]),
mean(weekly.ford$High[262:313]),
mean(weekly.ford$High[314:365]),
mean(weekly.ford$High[366:417]),
mean(weekly.ford$High[418:469]),
mean(weekly.ford$High[470:522]),
mean(weekly.ford$High[523:573]),
mean(weekly.ford$High[574:626]),
mean(weekly.ford$High[627:672]))
anualhigh<-ts(anhiw,start=1,freq=1)

anopw<-c(mean(Open[1:54]),
mean(weekly.ford$Open[55:106]),
mean(weekly.ford$Open[107:158]),
mean(weekly.ford$Open[159:209]),
mean(weekly.ford$Open[210:261]),
mean(weekly.ford$Open[262:313]),
mean(weekly.ford$Open[314:365]),
mean(weekly.ford$Open[366:417]),
mean(weekly.ford$Open[418:469]),
mean(weekly.ford$Open[470:522]),
mean(weekly.ford$Open[523:573]),
mean(weekly.ford$Open[574:626]),
mean(weekly.ford$Open[627:672]))
anualopen<-ts(anopw,start=1,freq=1)

anloww<-c(mean(Open[1:54]),
mean(weekly.ford$Low[55:106]),
mean(weekly.ford$Low[107:158]),
mean(weekly.ford$Low[159:209]),
mean(weekly.ford$Low[210:261]),
mean(weekly.ford$Low[262:313]),
mean(weekly.ford$Low[314:365]),
mean(weekly.ford$Low[366:417]),
mean(weekly.ford$Low[418:469]),
mean(weekly.ford$Low[470:522]),
mean(weekly.ford$Low[523:573]),
mean(weekly.ford$Low[574:626]),
mean(weekly.ford$Low[627:672]))
anuallow<-ts(anloww,start=1,freq=1)

anclw<-c(mean(Close[1:54]),
mean(weekly.ford$Close[55:106]),
mean(weekly.ford$Close[107:158]),
mean(weekly.ford$Close[159:209]),
mean(weekly.ford$Close[210:261]),
mean(weekly.ford$Close[262:313]),
mean(weekly.ford$Close[314:365]),
mean(weekly.ford$Close[366:417]),
mean(weekly.ford$Close[418:469]),
mean(weekly.ford$Close[470:522]),
mean(weekly.ford$Close[523:573]),
mean(weekly.ford$Close[574:626]),
mean(weekly.ford$Close[627:672]))
anualclose<-ts(anclw,start=1,freq=1)

anhim<-c(mean(High[1:12]),
mean(monthly.ford$High[13:24]),
mean(monthly.ford$High[25:36]),
mean(monthly.ford$High[37:48]),
mean(monthly.ford$High[49:60]),
mean(monthly.ford$High[61:72]),
mean(monthly.ford$High[73:84]),
mean(monthly.ford$High[85:96]),
mean(monthly.ford$High[97:108]),
mean(monthly.ford$High[109:120]),
mean(monthly.ford$High[121:132]),
mean(monthly.ford$High[133:144]),
mean(monthly.ford$High[145:155]))
anualhighm<-ts(anhim,start=1,freq=1)

anopm<-c(mean(Open[1:12]),
mean(monthly.ford$Open[13:24]),
mean(monthly.ford$Open[25:36]),
mean(monthly.ford$Open[37:48]),
mean(monthly.ford$Open[49:60]),
mean(monthly.ford$Open[61:72]),
mean(monthly.ford$Open[73:84]),
mean(monthly.ford$Open[85:96]),
mean(monthly.ford$Open[97:108]),
mean(monthly.ford$Open[109:120]),
mean(monthly.ford$Open[121:132]),
mean(monthly.ford$Open[133:144]),
mean(monthly.ford$Open[145:155]))
anualopenm<-ts(anopm,start=1,freq=1)

anclm<-c(mean(Close[1:12]),
mean(monthly.ford$Close[13:24]),
mean(monthly.ford$Close[25:36]),
mean(monthly.ford$Close[37:48]),
mean(monthly.ford$Close[49:60]),
mean(monthly.ford$Close[61:72]),
mean(monthly.ford$Close[73:84]),
mean(monthly.ford$Close[85:96]),
mean(monthly.ford$Close[97:108]),
mean(monthly.ford$Close[109:120]),
mean(monthly.ford$Close[121:132]),
mean(monthly.ford$Close[133:144]),
mean(monthly.ford$Close[145:155]))
anualclosem<-ts(anclm,start=1,freq=1)

anlowm<-c(mean(Low[1:12]),
mean(monthly.ford$Low[13:24]),
mean(monthly.ford$Low[25:36]),
mean(monthly.ford$Low[37:48]),
mean(monthly.ford$Low[49:60]),
mean(monthly.ford$Low[61:72]),
mean(monthly.ford$Low[73:84]),
mean(monthly.ford$Low[85:96]),
mean(monthly.ford$Low[97:108]),
mean(monthly.ford$Low[109:120]),
mean(monthly.ford$Low[121:132]),
mean(monthly.ford$Low[133:144]),
mean(monthly.ford$Low[145:155]))
anuallowm<-ts(anlowm,start=1,freq=1)


plot(anualhigh,main="Comparison of Anual Averages",xlab="Time Series",ylab="Volume",ylim=c(1,30),col=1)
par(new=T)
plot(anualhighm,main="",xlab="",ylab="",ylim=c(1,30),col=2)
par(new=T)
legend(4,25,c("Weekly Average","Monthly Average"),fill=1:2,cex=.8)

plot(anualopen,main="Comparison of Anual Averages",xlab="Time Series",ylab="Volume",ylim=c(1,30),col=3)
par(new=T)
plot(anualopenm,main="",xlab="",ylab="",ylim=c(1,30),col=4)
par(new=T)
legend(4,25,c("Weekly Average","Monthly Average"),fill=3:4,cex=.8)

plot(anuallow,main="Comparison of Anual Averages",xlab="Time Series",ylab="Volume",ylim=c(1,30),col=5)
par(new=T)
plot(anuallowm,main="",xlab="",ylab="",ylim=c(1,30),col=6)
par(new=T)
legend(4,25,c("Weekly Average","Monthly Average"),fill=5:6,cex=.8)

plot(anualclose,main="Comparison of Anual Averages",xlab="Time Series",ylab="Volume",ylim=c(1,30),col=7)
par(new=T)
plot(anualclosem,main="",xlab="",ylab="",ylim=c(1,30),col=8)
par(new=T)
legend(4,25,c("Weekly Average","Monthly Average"),fill=7:8,cex=.8)




asalary<-read.table("G:/salary.txt",header=T,sep=",",dec=".")
nsalary<-data.frame(subset(asalary,select=c(Lname,Fname,MI,DisciPline,ProfessorialRank,WeeksinYear,SalaryLastYear,SalaryThisYear)))
attach(asalary)
attach(nsalary)
prof<-data.frame(subset(nsalary,select=c(ProfessorialRank,SalaryThisYear)))
profesorsal<-aggregate(prof,list(SalaryThisYear),mean)


Weekly<-read.csv("G:/Documents/WeeklyFord.csv",dec=".",sep=",",header=T)
attach(Weekly)

data01<-data.frame(subset(Weekly,select=c(Open,Year)))

data02<-data.frame(subset(Weekly,select=c(Close,Year)))

data03<-data.frame(subset(Weekly,select=c(High,Year)))

data04<-data.frame(subset(Weekly,select=c(Low,Year)))

Data1<-aggregate(data01,list(Year),mean)

Data2<-aggregate(data02,list(Year),mean)

Data3<-aggregate(data03,list(Year),mean)

Data4<-aggregate(data04,list(Year),mean)

 

 

 

