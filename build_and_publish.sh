export ANDROID_HOME=$ANDROID_SDK
export JAVA_HOME=$JDK8
export PATH=$JDK8/bin:$PATH

function checkError()
{
#如果前一条命令出错了则终止构建
if [ $? != 0 ];
then
exit 1
fi
}

rm bin/*.*

sh gradlew --daemon publish
checkError

cd $WORKSPACE/bin

touch BUILD_DONE


112

then
exit

#增加一些修改，删除了昨天的一行代码
412

#413 edit1-3
413 edit1
413 edit2
413 edit3

415 gogogo1

415 gogogo2
415 gogogo3

415 gogogo4

then 416
exit 416

function checkError()
{
#416的if语句
if [ $? != 0 ];
then
exit 1
fi
}
export ANDROID_HOME=$ANDROID_SDK
export JAVA_HOME=$JDK8
export PATH=$JDK8/bin:$PATH

#419 add note
{
#416的if语句
if [ $? != 0 ];
then
exit 1
fi
}


#419 add code , add note

#422 commit
function checkError()
{
#如果前一条命令出错了则终止构建
if [ $? != 0 ];
then
exit 1
fi
}

branch 20190602   testbranch
