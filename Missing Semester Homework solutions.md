# Missing Semester Homework Solutions

## 1. Course Overview and the Shell
- 在`/tmp`下新建名为`missing`文件夹:
![](/home/spike/Pictures/Screenshots/a.png)
- 用`man`查看`touch`使用手册:
![](/home/spike/Pictures/Screenshots/mantouch.png)
- 新建`semester`文件并写入文本内容, 并使用`chmod`改变权限后执行该文件:
![](/home/spike/Pictures/Screenshots/semester.png)
- 使用 `|` 和 `>` ，将 `semester`文件输出的最后更改日期信息，写入主目录下的 `last-modified.txt` 的文件中:
![](/home/spike/Pictures/Screenshots/gl.png)
- 写一段命令来从 `/sys` 中获取笔记本的电量信息，或者台式机 `CPU` 的温度:
```bash
//获取每个传感器温度类型
cat /sys/class/thermal/thermal_zone*/type
//获取具体温度数值, 单位为毫摄氏度
cat /sys/class/thermal/thermal_zone*/temp
```
![](/home/spike/Pictures/Screenshots/tmp.png)



## 2. Shell Tools and Scripting	
- 阅读`man ls`并进行相应操作:
![](/home/spike/Pictures/Screenshots/ls.png)
- 编写两个bash函数 marco 和 polo:
![](/home/spike/Pictures/Screenshots/marcofunc.png)
![](/home/spike/Pictures/Screenshots/marco.png)

- 编写`bash`脚本检测错误并将标准输出和错误记录到文件:
![](/home/spike/Pictures/Screenshots/detect.png)
![](/home/spike/Pictures/Screenshots/error_appear.png)

- 编写一个命令，它可以递归地查找文件夹中所有的`HTML`文件，并将它们压缩成`zip`文件:
```bash
find /home/spike -type f -name "*.html" -exec zip -j output.zip {} +
```
- 递归的查找文件夹中最近使用的文件:
![](/home/spike/Pictures/Screenshots/print_files.png)


## 3. Vim

- 完成`vimtutor`.

- 下载课程提供的`vimrc`并保存到`~/.vimrc`:
![](/home/spike/Pictures/Screenshots/configure_vim.png)

- 安装并使用插件`ctrlp.vim`:
![](/home/spike/Pictures/Screenshots/openafile.png)


## 4. Data Wrangling

- 完成交互式正则表达式教程:
  
- 统计`words`文件 `(/usr/share/dict/words)`中包含至少三个`a`且不以`s`结尾的单词个数:
```bash
grep -E '([^a]*a[^a]*){3,}' /usr/share/dict/words | grep -v "'s$" | wc -l
```
- 这些单词中，出现频率前三的末尾两个字母:
```bash
grep -E '([^a]*a[^a]*){3,}' /usr/share/dict/words | grep -v "'s$" | rev | cut -c 1-2 | sort | uniq -c | sort -nr | head -n 3
```
- 共存在多少种词尾两字母组合:
```bash
grep -E '([^a]*a[^a]*){3,}' /usr/share/dict/words | grep -v "'s$" | rev | cut -c 1-2 | sort -u | wc -l
```

- 查阅手册`man sed`;


- 找出最近十次开机的开机时间平均数、中位数和最长时间:
```bash
last -x reboot | grep "reboot" | head -n 10 | awk '{print $7}' > reboot_times.txt

# 计算平均数
average_time=$(awk '{ total += $1; count++ } END { print total/count }' reboot_times.txt)

# 计算中位数
median_time=$(sort -n reboot_times.txt | awk 'NR==5{if(NF%2) print $1; else print ($1+getline tmp)/2}')

# 计算最长时间
max_time=$(sort -n -r reboot_times.txt | head -n 1)

echo "平均数: $average_time"
echo "中位数: $median_time"
echo "最长时间: $max_time"
```

- 查看之前三次重启启动信息中不同的部分:
```bash
- last -x reboot | grep "reboot" | head -n 3 > reboot_info.txt

for i in {1..3}; do
    echo -e "\n========== 重启 $i ==========\n"
    diff <(sed -n "$i p" reboot_info.txt) <(sed -n "$((i+1)) p" reboot_info.txt)
done
```

- 提取`FBI-Table1`数据集，并用一条指令获取其中一列的最大最小值，并用另一条指令获得两列之间差的总和:





