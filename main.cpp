#include<opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(int argc, char** argv){
    if(argc != 2){
        cout<<"请在可执行文件后输入地址"<<endl;
        return 1;
    }
    VideoCapture cap;
    string file = argv[1];
    cap.open(file); //打开视频,以上两句等价于VideoCapture cap("E://2.avi");
    if(!cap.isOpened())//如果视频不能正常打开则返
         return 1;
     Mat frame;
     while(1) {
          cap>>frame;//等价于cap.read(frame);
           if(frame.empty())//如果某帧为空则退出循环
               break;
           imshow("video", frame);
           waitKey(20);//每帧延时20毫秒
      }
      cap.release();//释放资源
    return 0;
}