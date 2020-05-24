// 一堆#include
#include<unistd.h>
// 基于 tbus 的通信系统是没有客户端和服务器之分的
// 不同主机是地位对等的。

// 搭建自用 tbus，难道是指自定义一个tbus吗？不管是不是，
// 我们先使用 tsf4g 中的tbus

// 跨物理机通信的配置
// 1. 假设两台物理机的地址：1) 1.1.1.1; 2)2.2.2.2。

// tbus 服务器的几个步骤
// 1. 绑定地址和端口
// 2. 监听端口
// 3. 发送连接请求
// 4. 处理连接请求
// 5. 数据收发



// tdr 数据协议
// 1. 定义应用层数据协议
// 2. 数据解析和响应


// tapp 框架
// ...

// argc 记录允许当前程序时，输出的字符串的个数
// argv 分别存储每个字符串
// argc >= 1，因此最少就是该程序名
// 给该程序取名 echo 即可
int main(int argc, char **argv)
{
    if (1 == argc){
	printf("\n");
	return 0;
    }
    // 初始化tbus环境
    if (0 > tbus_init_ex(NULL, TBUS_INIT_FLAG_USE_SAVED_TIME)){
	return -1;
    }
    // 创建一个tbus句柄
    int tbus_handler = 0;
    if (tbus_new(&tbus_handler) < 0){
	return -1;
    }
    // 数据收发
	
    // 标准输入从argv中读取即可,echo 会输出一行 
    // 将argv 中的字符串发送给对端机器
	
    // 接收另一个机器的数据
	
    // 打印接收值
}
