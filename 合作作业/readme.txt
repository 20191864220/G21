软件功能：
1、批量录入学生姓名和学号
2、录入单个学生的单科成绩
3、批量录入单科成绩
4、计算各科平均分，计算个人平均分、总分。
5、查询单人成绩。
6、单科或总成绩排序
7、单科平均分查询
8、添加一名学生的个人信息及成绩
9、数据存档
10、数据读取


操作说明：
输入指令代号1。程序弹出提示语句“Please enter the number of student:”,此时输入学生数量。程序使人数增加输入的数量。随后，程序判断学生数量是否超过100。若超过，则弹出提示语句“Please enter an integer less than or equal to 100.”，随后输入正确的数字。否则继续执行。若继续执行，程序弹出提示语句“Please enter all students' names and student ID.”,此时输入多名学生的姓名和学号。
输入指令代号2。程序弹出提示语句“(If you want to quit the program,please enter 0.)”此时输入0结束，否则程序弹出Please enter the serial number of the subject:，随后输入科目代号。若代号不在1和10之间，则报错。输入正确代号后，弹出提示语句“Please enter the student’s ID number：”，此时输入学生学号。之后，系统找到学号对应学生，然后弹出提示语句“Is she or he xxx?(Y or N)”，确认信息是否无误。若无误，则输入Y，然后系统弹出please enter his or her subject xxscore:，输入这名同学的成绩。否则，输入N，程序会输出“Error！”错误提示。
输入指令代号3。首先对学生按照学号大小排序，然后程序弹出提示语句“(If you want to quit the program,please enter 0.)”此时输入0结束，否则系统弹出提示语句“Please enter the serial number of the subject:”，然后输入科目代号，若代号不在1到10之间，则报错，输入正确代号后，弹出提示语句“Please enter grades in order of student ID.” 然后按照学号顺序输入学生的成绩。
输入代号指令4。系统自动计算各科平均分、个人平均分、个人总分。
输入代号指令5。程序会弹出提示语句"Please enter your Student ID:”，此时输入学号。之后，程序会在所有学生中寻找出该学号对应学生姓名，并弹出提示语句"Is he or she xxx?(Y or N)”，若是该序号，输入Y，然后程序会按科目1到10顺序输出该学生十科成绩。若不是该学号，输入N，程序会输出“Error！”错误提示。
输入指令代号6。弹出提示语句“Would you like to check the total ranking or single subject ranking?”和“Please T(total) or S(single):”。若输入'T'，程序则输出总成绩排名顺序下每人的学号、姓名和成绩；若输入'S'，弹出提示语句(If you want to quit the program,please enter 0.)。此时每输入一个1到10之间的整数，便输出序号相对应科目成绩排名顺序下每个人的学号、姓名和成绩。当输入0时，跳出该函数。
输入指令代号7。程序弹出提示语句“(If you want to quit the program,please enter 0.”,此时输入0结束，否则程序弹出提示语句”Please enter the subject:”,然后根据提示输入科目代号。随后，程序判断该科目代号是否超过科目代号范围1到10。如果超过了便报错。输入正确的代号后，输出结果”Average : ”,即对应科目的平均分。
输入指令代号8。程序先自动使人数增加1，并判断增加后是否会超过人数最大容量100。如果超过了，便报错并返回主程序，否则继续执行。若继续执行，程序弹出提示语句“Please enter the student's ID:”，此时输入学生的学号。随后，程序判断该学生学号是否已录入。若已录入，则弹出提示语句“The student's information has been entered.”和“He/She's name is xxx”确定信息无误后，随着提示语句“Please enter the student's subject n score:”依次输入10科成绩。若没有录入，则弹出提示语句“Please enter the student's name:”，此时先输入该生姓名，再依次录入10科成绩。
输入指令代号9，随后程序自动将数据存储到程序源文件所在文件夹里名为date的文本文档中。
输入指令代号10，随后程序自动将程序源文件所在文件夹里名为date的文本文档中的数据读入程序。



小组分工：
吕欣然：单科或总成绩排序、添加单名学生的个人信息及成绩、数据读取、数据存储部分及程序整理、改良优化。
杨雪云：批量录入学生姓名和学号、单科平均分查询部分。
李恒泰：录入单个学生的单科成绩、批量录入单科成绩部分。
张承帅：计算各科平均分、计算个人平均分和总分、查询单人成绩部分。

