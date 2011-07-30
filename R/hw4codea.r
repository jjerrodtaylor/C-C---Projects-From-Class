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

be1<-c(9001,9002,9003,9004,9005,9006,9007,9009,9053,
9054,9055,9056,9115,9120,9121,9126,9152,9160,9161,9166,9173,9178,9394,9434,
9460,9462)
 average.raise<-abs(mean(SalaryLastYear)-mean(SalaryThisYear))
[1] 9053.087

weekly.ford<-read.csv("F:/Documents/WeeklyFord.csv",dec=".",sep=",",header=T)
monthly.ford<-read.csv("F:/Documents/MonthlyFord.csv",dec=".",sep=",",header=T)
attach(weekly.ford)
attach(monthly.ford)
anualhigh1w<-mean(High[1:54])
anualhigh2w<-mean(High[55:106])
anualhigh3w<-mean(High[107:158])
anualhigh4w<-mean(High[159:209])
anualhigh5w<-mean(High[210:261])
anualhigh6w<-mean(High[262:313])
anualhigh7w<-mean(High[314:365])
anualhigh8w<-mean(High[366:417])
anualhigh9w<-mean(High[418:469])
anualhigh10w<-mean(High[470:522])
anualhigh11w<-mean(High[523:573])
anualhigh12w<-mean(High[574:626])
anualhigh13w<-mean(High[627:672])

anualopen1w<-mean(Open[1:54])
anualopen2w<-mean(Open[55:106])
anualopen3w<-mean(Open[107:158])
anualopen4w<-mean(Open[159:209])
anualopen5w<-mean(Open[210:261])
anualopen6w<-mean(Open[262:313])
anualopen7w<-mean(Open[314:365])
anualopen8w<-mean(Open[366:417])
anualopen9w<-mean(Open[418:469])
anualopen10w<-mean(Open[470:522])
anualopen11w<-mean(Open[523:573])
anualopen12w<-mean(Open[574:626])
anualopen13w<-mean(Open[627:672])

anuallow1w<-mean(Low[1:54])
anuallow2w<-mean(Low[55:106])
anuallow3w<-mean(Low[107:158])
anuallow4w<-mean(Low[159:209])
anuallow5w<-mean(Low[210:261])
anuallow6w<-mean(Low[262:313])
anuallow7w<-mean(Low[314:365])
anuallow8w<-mean(Low[366:417])
anuallow9w<-mean(Low[418:469])
anuallow10w<-mean(Low[470:522])
anuallow11w<-mean(Low[523:573])
anuallow12w<-mean(Low[574:626])
anuallow13w<-mean(Low[627:672])

anualclose1w<-mean(Close[1:54])
anualclose2w<-mean(Close[55:106])
anualclose3w<-mean(Close[107:158])
anualclose4w<-mean(Close[159:209])
anualclose5w<-mean(Close[210:261])
anualclose6w<-mean(Close[262:313])
anualclose7w<-mean(Close[314:365])
anualclose8w<-mean(Close[366:417])
anualclose9w<-mean(Close[418:469])
anualclose10w<-mean(Close[470:522])
anualclose11w<-mean(Close[523:573])
anualclose12w<-mean(Close[574:626])
anualclose13w<-mean(Close[627:672])

monthlyhigh1<-mean(High[1:12])
monthlyhigh2<-mean(High[13:24])
monthlyhigh3<-mean(High[25:36])
monthlyhigh4<-mean(High[37:48])
monthlyhigh5<-mean(High[49:60])
monthlyhigh6<-mean(High[61:72])
monthlyhigh7<-mean(High[73:84])
monthlyhigh8<-mean(High[85:96])
monthlyhigh9<-mean(High[97:108])
monthlyhigh10<-mean(High[109:120])
monthlyhigh11<-mean(High[121:132])
monthlyhigh12<-mean(High[133:144])
monthlyhigh13<-mean(High[145:155])

monthlyopen1<-mean(Open[1:12])
monthlyopen2<-mean(Open[13:24])
monthlyopen3<-mean(Open[25:36])
monthlyopen4<-mean(Open[37:48])
monthlyopen5<-mean(Open[49:60])
monthlyopen6<-mean(Open[61:72])
monthlyopen7<-mean(Open[73:84])
monthlyopen8<-mean(Open[85:96])
monthlyopen9<-mean(Open[97:108])
monthlyopen10<-mean(Open[109:120])
monthlyopen11<-mean(Open[121:132])
monthlyopen12<-mean(Open[133:144])
monthlyopen13<-mean(Open[145:155])

monthlyclose1<-mean(Close[1:12])
monthlyclose2<-mean(Close[13:24])
monthlyclose3<-mean(Close[25:36])
monthlyclose4<-mean(Close[37:48])
monthlyclose5<-mean(Close[49:60])
monthlyclose6<-mean(Close[61:72])
monthlyclose7<-mean(Close[73:84])
monthlyclose8<-mean(Close[85:96])
monthlyclose9<-mean(Close[97:108])
monthlyclose10<-mean(Close[109:120])
monthlyclose11<-mean(Close[121:132])
monthlyclose12<-mean(Close[133:144])
monthlyclose13<-mean(Close[145:155])

monthlylow1<-mean(Low[1:12])
monthlylow2<-mean(Low[13:24])
monthlylow3<-mean(Low[25:36])
monthlylow4<-mean(Low[37:48])
monthlylow5<-mean(Low[49:60])
monthlylow6<-mean(Low[61:72])
monthlylow7<-mean(Low[73:84])
monthlylow8<-mean(Low[85:96])
monthlylow9<-mean(Low[97:108])
monthlylow10<-mean(Low[109:120])
monthlylow11<-mean(Low[121:132])
monthlylow12<-mean(Low[133:144])
monthlylow13<-mean(Low[145:155])