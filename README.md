# CINTA-1  
[迭代乘法代码](https://user-images.githubusercontent.com/62804262/133951610-fae293e7-f96d-443d-bf46-d9b43262a70f.png)![](https://user-images.githubusercontent.com/62804262/133951610-fae293e7-f96d-443d-bf46-d9b43262a70f.png)  
若a,b,c属于正整数，且b可被a整除，c可被b整除，由除法的传递性可知，c可被a整除。  
若a可被c整除，b可被c整除  
即 a / c = k （ k 为 整 数 ） ， b / c = p （ p 为 整 数 ） a/c=k（k为整数），b/c=p（p为整数）a/c=k（k为整数），b/c=p（p为整数）  
则对于任意整数m，n，有：  
m a / c = m k （ k 为 整 数 ） , n b / c = n p （ p 为 整 数 ） ma/c=mk（k为整数）, nb/c=np（p为整数）
ma/c=mk（k为整数）,nb/c=np（p为整数）
则：
( m a + n b ) / c = m k + n p ( m k + n p 为 整 数 ) (ma+nb)/c=mk+np(mk+np为整数)
(ma+nb)/c=mk+np(mk+np为整数)
故可得：ma+nb可被c整除。
若a,b,c属于正整数，且b可被a整除，c可被b整除，由除法的传递性可知，c可被a整除。
若a可被c整除，b可被c整除，即 a / c = k （ k 为 整 数 ） ， b / c = p （ p 为 整 数 ） a/c=k（k为整数），b/c=p（p为整数）a/c=k（k为整数），b/c=p（p为整数），则对于任意整数m，n，有：
m a / c = m k （ k 为 整 数 ） , n b / c = n p （ p 为 整 数 ） ma/c=mk（k为整数）, nb/c=np（p为整数）
ma/c=mk（k为整数）,nb/c=np（p为整数）

则：
( m a + n b ) / c = m k + n p ( m k + n p 为 整 数 ) (ma+nb)/c=mk+np(mk+np为整数)
(ma+nb)/c=mk+np(mk+np为整数)

故可得：ma+nb可被c整除。

3、完成定理1.1的证明(除法算法)
假设
a = b q 1 + r 1 = b q 2 + r 2 ， 且 q 1 ≠ q 2 a=bq_1+r_1=bq_2+r_2，且q_1 \neq q_2
a=bq 
1+r 1=bq 2+r2
​，且q1​
​
 =q 
2
​
 

0 ≤ r 1 < r 2 < b ， 即 0 < r 2 − r 1 < b 0 \leq r_1 <r_2 < b，即0 < r_2-r_1<b
0≤r 
1
​
 <r 
2
​
 <b，即0<r 
2
​
 −r 
1
​
 <b

对上述等式移项：
b ( q 1 − q 2 ) = r 2 − r 1 b(q_1-q_2)=r_2-r_1
b(q 
1
​
 −q 
2
​
 )=r 
2
​
 −r 
1
​
 

因为
q 1 、 q 2 是 整 数 q_1、q_2是整数
q 
1
​
 、q 
2
​
 是整数

所以
q 1 − q 2 是 整 数 q_1-q_2是整数
q 
1
 −q 
2
 是整数

故可推出
r 2 − r 1 可 被 b 整 除 r_2-r_1可被b整除
r 
2
 −r 1
 可被b整除

与
0 < r 2 − r 1 < b 矛 盾 0<r_2-r_1<b矛盾
0<r 
2
​
 −r 
1
​
 <b矛盾
原命题得证。
