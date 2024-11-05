//数组的特点：
//1.任意类型的元素可以存储在数组中
//2.一旦定义完成，其长度就固定了，不能再改变（但是不会做数组边界检查）
//3.数组内存连续且有序。sizeof(数组）返回数组元素个数乘以元素类型所占字节数。v的元素数目：sizeof(v）/sizeof(v[0])
//4.元素值可以修改
//5.数组变量不记录数据，记录了v[0]的内存地址

//数组的遍历（依次取出元素）
//用while或for循环完成
//高级for循环
//for（元素类型 临时变量名：数组变量）{
//临时便令存的就是一个个元素
//}
#include "iostream"
#include "random"
using namespace std;
int get_random_num03(int min,int max) {
    //创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());
    //定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);
    //生成一个随机数并输出
    int random_number=dis(gen);
    return random_number;
}
int main() {
    int arr[]={1,2,3,4,5};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++) {
        cout<<arr[i]<<endl;
    }
    for (int e:arr) {
        cout<<e<<endl;}

    cout<<"找数组最大和最小值题目"<<endl;
    int arr2[10];
    int max_number,min_number;
    arr2[0]=get_random_num03(1,100);
    arr2[1]=get_random_num03(1,100);
    arr2[2]=get_random_num03(1,100);
    arr2[3]=get_random_num03(1,100);
    arr2[4]=get_random_num03(1,100);
    arr2[5]=get_random_num03(1,100);
    arr2[6]=get_random_num03(1,100);
    arr2[7]=get_random_num03(1,100);
    arr2[8]=get_random_num03(1,100);
    arr2[9]=get_random_num03(1,100);
    cout<<"数组元素："<<endl;
    for (int e:arr2) {
        cout<<e<<" ";
    }
    cout<<endl;
    max_number=arr2[0];
    min_number=arr2[0];
    for (int e2:arr2) {
        if(e2>max_number) {
            max_number=e2;
        }
    }
    for (int e3:arr2) {
        if(e3<min_number) {
            min_number=e3;
        }
    }
    cout<<"最大值："<<max_number<<endl;
    cout<<"最小值："<<min_number<<endl;

    return 0;
}

//
// Created by 34365 on 2024/10/18.
//
