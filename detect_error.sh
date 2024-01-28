#!/usr/bin/env bash

# 定义输出文件
output_file="script_output.txt"

# 循环直到脚本出错
while :
do
	# 运行脚本并将标准输出和标准错误流重定向到文件
    {
        ./error.sh 2>&1
    } | tee -a "$output_file" 2>&1

        # 检查脚本的退出状态
    if [ $? -ne 0 ]; then
        echo "Script encountered an error. See $output_file for details."
        break
    fi
done

# 输出所有内容
cat "$output_file"


