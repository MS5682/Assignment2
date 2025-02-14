﻿#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1();
void filestat2();
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main(){
    filestat1();
    filestat2();
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(){
    const char* File1 = "text1";
    if (stat(File1, &stat1) < 0) {
        printf("File name %s does not exist\n", File1);
        _exit(0);
    }
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(){
    const char* File2 = "text2";
    if (stat(File2, &stat2) < 0) {
        printf("File name %s does not exist\n", File2);
        _exit(0);
    }
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(){
    time1 = *localtime(&stat1.st_mtime);
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){
    time2 = *localtime(&stat2.st_mtime);
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(){
    
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(){
    
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(){
    
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(){
    
}