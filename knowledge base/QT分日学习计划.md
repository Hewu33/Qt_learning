# QT 分日学习计划（80 天 / 约 4 个月）

> 每日投入：1~2 小时
> 节奏：每天一个明确目标，读 + 写代码各占一半
> 标注 ⭐ 的日子是阶段性里程碑

---

## 第 1 周：启航——环境与第一个程序

### 第 1 天

- [x] 今日完成
- 下载安装 Qt Creator 和 Qt 库（选择 Qt6 + MinGW 或 MSVC 套件）
- 新建一个 `QWidget` 项目，什么都不改，直接编译运行
- **产出：** 一个能跑的空白窗口

- [x] 覆盖路线图项：1.1 安装Qt Creator + Qt库、1.2 新建QWidget项目并运行

### 第 2 天

- [x] 今日完成
- 读懂 `main.cpp` 每一行的含义（`QApplication`、`exec()`、事件循环）
- 读懂 `.pro` 文件或 `CMakeLists.txt` 的结构
- 尝试修改窗口标题（`setWindowTitle`）、窗口大小（`resize`）
- **产出：** 能说出项目每个文件的作用

- [x] 覆盖路线图项：1.2 理解main.cpp/头文件/CMakeLists.txt结构、1.2 QApplication与事件循环、1.3 CMake基本语法、1.3 添加源文件/头文件、1.3 QT += 模块依赖

### 第 3 天 ⭐

- [x] 今日完成
- 了解 Qt 对象树模型：`parent` 参数的作用，为什么 `new QPushButton` 不需要 `delete`
- 在窗口上放一个按钮 `QPushButton`，用 `setGeometry` 手动定位
- **产出：** 一个窗口上有一个按钮，理解对象生命周期

- [x] 覆盖路线图项：1.2 Qt对象树模型、1.2 parent参数与内存管理

---

## 第 2 周：核心机制——信号与槽

### 第 4 天

- [x] 今日完成
- 学习信号与槽的概念（为什么需要这种设计）
- 用 `connect()` 连接按钮的 `clicked()` 到 `QApplication::quit()`
- 尝试新式语法 `connect(sender, &Sender::signal, receiver, &Receiver::slot)`
- **产出：** 点击按钮 → 窗口关闭

- [x] 覆盖路线图项：2.1 信号与槽概念、2.1 connect() 新式语法 vs 旧式、2.2 按钮(QPushButton)点击关闭窗口

### 第 5 天

- [x] 今日完成
- 创建自定义信号和自定义槽
- 练习：两个按钮，一个 `+1` 一个 `-1`，QLabel 显示当前数字
- 理解 `signals:` 和 `slots:` 关键字
- **产出：** 计数器小应用

- [x] 覆盖路线图项：2.2 自定义信号(signals:)、2.2 自定义槽(public/private slots:)、2.2 信号与槽参数匹配规则

### 第 6 天

- [x] 今日完成
- 学习 Lambda 作为槽的写法
- 理解信号参数与槽参数的匹配规则
- 练习：滑块 `QSlider` 拖动 → Label 显示数值（用 Lambda 实现）
- **产出：** 信号槽 + Lambda 的组合用法

- [x] 覆盖路线图项：2.3 Lambda表达式作为槽、2.3 信号参数→Lambda捕获

### 第 7 天 ⭐

- [x] 今日完成
- 回顾本周内容，做一个综合练习
- 练习：两个独立窗口，窗口 A 有一个输入框和发送按钮，窗口 B 收到信号后显示内容
- 涉及：自定义信号、不同对象间的通信
- **产出：** 跨窗口通信 demo

- [x] 覆盖路线图项：2.3 sender()用法与局限性、2.3 QObject::disconnect()、2.3 AutoConnection/DirectConnection/QueuedConnection、验证标准: 跨窗口通信demo

---

## 第 3 周：控件森林（上）——输入与按钮

### 第 8 天

- [x] 今日完成
- 深入学习 `QPushButton`（setCheckable、setEnabled、setIcon）
- `QRadioButton` + `QButtonGroup`（互斥选择）
- `QCheckBox`（多选）
- 练习：做一个"性别选择+兴趣爱好多选"的界面
- **产出：** 按钮家族练习

- [x] 覆盖路线图项：3.1 QPushButton(setCheckable/setEnabled/setIcon)、3.1 QRadioButton + QButtonGroup、3.1 QCheckBox、3.1 QToolButton

### 第 9 天

- [x] 今日完成
- `QLineEdit`：文本输入、placeholder、maxLength、echoMode（密码模式）、validators（数字限制）、mask（格式掩码）
- `QTextEdit`（富文本）/ `QPlainTextEdit`（纯文本）：多行文本
- 练习：做一个"登录"界面——用户名用 QLineEdit+placeholder、密码用 echoMode 密文模式、手机号用 inputMask 格式限制、备注用 QTextEdit 富文本
- **产出：** 登录界面

- [x] 覆盖路线图项：3.2 QLineEdit(placeholder/maxLength/echoMode/validators/mask)、3.2 QTextEdit(富文本)、3.2 QPlainTextEdit(纯文本)

### 第 10 天

- [x] 今日完成
- `QSpinBox` / `QDoubleSpinBox`：数字输入
- `QSlider`：滑块
- `QComboBox`：下拉选择框
- 练习：做一个"年龄（SpinBox）+ 身高（DoubleSpinBox）+ 学历（ComboBox）"表单
- **产出：** 表单输入界面

- [x] 覆盖路线图项：3.2 QSpinBox/QDoubleSpinBox、3.2 QSlider(QScrollBar触类旁通)、3.2 QComboBox

### 第 11 天

- [x] 今日完成
- `QLabel`：显示文本、图片（QPixmap）、富文本
- `QProgressBar`：进度条
- `QListWidget`：列表（增删改项）
- 练习：做一个简易 Todo 列表（QListWidget + 添加/删除按钮）
- **产出：** Todo 列表小程序

- [x] 覆盖路线图项：3.3 QLabel(文本/富文本/pixmap/缩放)、3.3 QProgressBar、3.3 QListWidget(增删改项)

---

## 第 4 周：控件森林（下）——容器与表格

### 第 12 天

- [x] 今日完成
- `QGroupBox`：分组框（带标题的边框容器）
- `QTabWidget`：选项卡（多页切换）
- `QStackedWidget`：页面栈（程序控制翻页，无标签栏）
- `QScrollArea`：滚动区域（内容超出时自动出现滚动条）
- 练习：做一个"设置面板"——QTabWidget 分三页（通用/显示/高级），每页内各放一个 QScrollArea，内容用 QGroupBox 分组
- **产出：** 多页设置面板

- [x] 覆盖路线图项：3.4 QGroupBox、3.4 QTabWidget、3.4 QStackedWidget、3.4 QScrollArea

### 第 13 天

- [ ] 今日完成
- `QTableWidget`：表格（item-based）
- 设置行列头、插入数据、获取选中行、删除行
- 练习：做一个"学生成绩表"（姓名、语文、数学、英语），支持添加/删除行
- **产出：** 成绩表格应用

- [ ] 覆盖路线图项：3.3 QTableWidget(item-based)、3.3 设置行列头/插入数据/选中行/删除行

### 第 14 天

- [ ] 今日完成
- `QTreeWidget`：树形控件
- 多级节点、展开/折叠、遍历树
- 练习：做一个"公司组织架构"树（CEO → 部门 → 员工）
- **产出：** 组织架构树

- [ ] 覆盖路线图项：3.3 QTreeWidget(item-based)、3.3 多级节点/展开折叠/遍历树

### 第 15 天 ⭐

- [ ] 今日完成
- 综合练习：做一个"个人信息面板"
  - 左侧：QTreeWidget 作为导航（基本信息/联系方式/教育经历/工作经历）
  - 右侧：QStackedWidget，每一页是不同的表单
  - 点击左侧节点，右侧切换对应页面
- **产出：** 导航式信息面板

- [ ] 覆盖路线图项：3.4 QStackedWidget(综合)、3.3 QTreeWidget(综合)、验证标准: 个人信息面板(QTreeWidget+QStackedWidget)

---

## 第 5 周：布局管理

### 第 16 天

- [ ] 今日完成
- `QVBoxLayout` 和 `QHBoxLayout` 的使用
- `addStretch()` 弹性空间
- `setSpacing()`、`setContentsMargins()` 间距设置
- 练习：做一个"顶部标题栏 + 中间内容区 + 底部按钮区"的标准窗口框架
- **产出：** 标准三区域布局

- [ ] 覆盖路线图项：4.1 QVBoxLayout、4.1 QHBoxLayout、4.2 addStretch()、4.2 setSpacing()/setContentsMargins()

### 第 17 天

- [ ] 今日完成
- `QGridLayout`：网格布局
- `addWidget(widget, row, col, rowSpan, colSpan)`
- 练习：做一个"计算器"按钮面板（4行4列的网格）
- **产出：** 计算器按钮布局

- [ ] 覆盖路线图项：4.1 QGridLayout、4.1 addWidget(row,col,rowSpan,colSpan)

### 第 18 天

- [ ] 今日完成
- 布局嵌套：GridLayout 放入 VBoxLayout
- `sizePolicy`：Preferred / Expanding / Fixed / Minimum 的差异
- `setMinimumSize` / `setMaximumSize` / `setFixedSize`
- 练习：给计算器加上顶部的显示框，整体用 VBoxLayout 串联
- **产出：** 计算器完整布局

- [ ] 覆盖路线图项：4.3 布局嵌套(Grid→VBox)、4.2 sizePolicy(Preferred/Expanding/Fixed/Minimum)、4.2 setMinimumSize/setMaximumSize/setFixedSize、验证标准: 计算器界面(GridLayout+VBoxLayout)

### 第 19 天

- [ ] 今日完成
- `QFormLayout`：标签-输入框配对
- `QSplitter`：可拖拽分割条
- 练习：做一个"文件详情"窗口，左侧文件列表（QSplitter），右侧详情面板（QFormLayout）
- **产出：** 分栏 + 表单界面

- [ ] 覆盖路线图项：4.4 QFormLayout、4.4 QSplitter

### 第 20 天 ⭐

- [ ] 今日完成
- 综合练习：不靠 Qt Designer，纯代码写一个"注册表单"
  - 使用 QFormLayout 排列表单项
  - 底部按钮用 QHBoxLayout
  - 整体用 QVBoxLayout
  - 窗口缩放时输入框自适应宽度
- **产出：** 纯代码布局的注册表单

- [ ] 覆盖路线图项：4.4 QFormLayout(综合)、4.1 VBoxLayout(综合)、4.1 QHBoxLayout(综合)、验证标准: 纯代码自适应布局

---

## 第 6 周：对话框与窗口管理

### 第 21 天

- [ ] 今日完成
- `QMessageBox`：information / warning / critical / question
- 理解模态与非模态（`exec()` vs `show()`）
- 练习：关闭窗口时弹出"确定要退出吗？"确认框
- **产出：** 消息框实验

- [ ] 覆盖路线图项：5.1 QMessageBox(info/warning/critical/question)、5.2 模态(exec()) vs 非模态(show())

### 第 22 天

- [ ] 今日完成
- `QFileDialog`：打开文件、保存文件、选择目录
- `QColorDialog`：颜色选择
- `QFontDialog`：字体选择
- 练习：点按钮弹文件对话框，选择文件后在 Label 显示路径
- **产出：** 文件选择对话框

- [ ] 覆盖路线图项：5.1 QFileDialog、5.1 QColorDialog、5.1 QFontDialog

### 第 23 天

- [ ] 今日完成
- `QInputDialog`：输入对话框（文本、数字、列表选择）
- `QProgressDialog`：进度对话框
- 练习：模拟一个"导出数据"流程，显示进度对话框
- **产出：** 对话框综合应用

- [ ] 覆盖路线图项：5.1 QInputDialog、5.1 QProgressDialog

### 第 24 天

- [ ] 今日完成
- 继承 `QDialog` 创建自定义对话框
- `QDialogButtonBox`：标准按钮盒（OK/Cancel 统一管理）
- `setAttribute(Qt::WA_DeleteOnClose)`：窗口关闭时自动 delete，防止内存泄漏
- 子窗口→父窗口信号回传数据
- 练习：做一个"添加联系人"的自定义对话框——QFormLayout 排列表单、QDialogButtonBox 确认/取消、设置 WA_DeleteOnClose、确认后信号回传数据给主窗口
- **产出：** 自定义对话框

- [ ] 覆盖路线图项：5.3 继承QDialog自定义对话框、5.3 QDialogButtonBox、5.2 setAttribute(Qt::WA_DeleteOnClose)、5.4 子窗口-父窗口: 信号回传数据

### 第 25 天 ⭐

- [ ] 今日完成
- 综合练习：把之前的 Todo 列表升级
  - 双击或点击"编辑"按钮弹出模态自定义对话框修改任务
  - 用 `setWindowModality()` 限制对话框层级（阻止与父窗口交互）
  - 主窗口通过直接调用子窗口方法（`child->setData()`）传递初始值
  - 子窗口通过信号回传修改后的数据
  - 添加"关于"菜单项，弹出 QMessageBox
  - 关闭时如果有未保存修改，弹出确认对话框
- **产出：** 升级版 Todo

- [ ] 覆盖路线图项：5.4 父窗口-子窗口: 直接调用方法、5.4 parent机制与对象树、5.2 setWindowModality()

---

## 第 7 周：菜单栏、工具栏、状态栏

### 第 26 天

- [ ] 今日完成
- `QMenuBar` + `QMenu` + `QAction` 的关系
- 创建菜单栏："文件（新建/打开/保存/退出，嵌套子菜单：最近打开的文件列表）"、"编辑（撤销/重做）"
- 用 `setShortcut()` 设置快捷键
- **产出：** 完整菜单栏

- [ ] 覆盖路线图项：6.1 QMenuBar、6.1 QMenu(嵌套子菜单)、6.1 QAction、6.1 setShortcut()快捷键

### 第 27 天

- [ ] 今日完成
- `QToolBar` 工具栏
- 理解 QAction 是菜单项和工具栏项的共享抽象
- 同一个 QAction 同时出现在菜单和工具栏
- 工具栏可停靠属性：`setMovable()`、`setFloatable()`、`addToolBar()` 指定停靠区域
- **产出：** 菜单栏 + 工具栏

- [ ] 覆盖路线图项：6.2 QToolBar、6.2 QAction共享抽象、6.2 工具栏可停靠属性

### 第 28 天

- [ ] 今日完成
- `QStatusBar` 状态栏
- `showMessage()` 临时消息、`addPermanentWidget()` 永久控件
- 练习：状态栏显示当前时间、鼠标位置
- **产出：** 带状态栏的主窗口

- [ ] 覆盖路线图项：6.3 QStatusBar、6.3 showMessage()、6.3 addPermanentWidget()

### 第 29 天

- [ ] 今日完成
- 右键菜单：重写 `contextMenuEvent()` 或使用 `setContextMenuPolicy()`
- 练习：在 QTableWidget 上右键弹出"添加行 / 删除行 / 清空"菜单
- **产出：** 右键菜单

- [ ] 覆盖路线图项：6.4 contextMenuEvent()、6.4 QMenu::exec()右键菜单

### 第 30 天 ⭐

- [ ] 今日完成
- 里程碑：做一个"记事本"雏形
  - 菜单栏：文件（新建/打开/保存/另存为/退出）、编辑（撤销/剪切/复制/粘贴）、帮助（关于）
  - 工具栏：新建、打开、保存
  - 状态栏：显示行数和列数
  - 中间：QPlainTextEdit
- **产出：** 记事本 1.0

- [ ] 覆盖路线图项：6.1-6.4 综合: 记事本雏形、验证标准: 完整菜单栏/工具栏/状态栏

---

## 第 8 周：Model / View 架构（上）

### 第 31 天

- [ ] 今日完成
- 理解 MVC 思想在 Qt 中的体现
- 对比 QListWidget（item-based）与 QListView（model-based）的区别
- 用 `QStringListModel` 绑定 `QListView`
- **产出：** 从 Item 模式切换到 Model 模式的第一个 demo

- [ ] 覆盖路线图项：7.1 MVC思想(Model/View/Delegate分离)、7.1 QListWidget vs QListView对比、7.2 QStringListModel、7.3 QListView

### 第 32 天

- [ ] 今日完成
- `QStandardItemModel`：通用的树/表模型
- 用 `QStandardItemModel` 绑定 `QTableView`
- 给 Model 添加数据、修改数据、删除行
- **产出：** Model/View 绑定的表格

- [ ] 覆盖路线图项：7.2 QStandardItemModel、7.3 QTableView、7.3 View与Model绑定: setModel()

### 第 33 天

- [ ] 今日完成
- `QTreeView` + `QStandardItemModel` 实现树形视图
- 对比 QTreeWidget 的写法，感受 Model/View 的优势
- **产出：** 用 Model/View 重写组织架构树

- [ ] 覆盖路线图项：7.3 QTreeView、7.2 QStandardItemModel(树形)

### 第 34 天

- [ ] 今日完成
- `QFileSystemModel`：浏览本地文件系统
- 用 `QTreeView` 显示文件夹树
- 理解 `setRootPath()` 和 `setRootIndex()`
- **产出：** 文件系统浏览器

- [ ] 覆盖路线图项：7.2 QFileSystemModel、7.3 QTreeView(文件系统浏览器)、7.3 setRootPath()/setRootIndex()

### 第 35 天 ⭐

- [ ] 今日完成
- `QItemSelectionModel`：管理选中状态
- 设置选择模式：单选（SingleSelection）vs 多选（MultiSelection/ExtendedSelection）
- 左侧 QTreeView（目录树） + 右侧 QListView（文件列表），联动显示
- 点击左侧文件夹，右侧显示该文件夹内的文件
- **产出：** 双栏文件浏览器

- [ ] 覆盖路线图项：7.4 QItemSelectionModel、7.4 获取当前选中项、7.4 单选 vs 多选模式

---

## 第 9 周：Model / View 架构（下）与 Delegate

### 第 36 天

- [ ] 今日完成
- 理解 Delegate 的作用（控制单元格的显示和编辑）
- 默认 Delegate 的行为（文本左对齐、数字右对齐等）
- 了解 `QStyledItemDelegate` vs `QItemDelegate`
- **产出：** 理解 Delegate 的定位

- [ ] 覆盖路线图项：7.5 Delegate概念(显示与编辑控制)、7.5 默认Delegate行为、7.5 QStyledItemDelegate vs QItemDelegate

### 第 37 天

- [ ] 今日完成
- 继承 `QStyledItemDelegate`，重写 `paint()`
- 在表格中自定义绘制：进度条列、颜色标记列
- **产出：** 自定义单元格绘制

- [ ] 覆盖路线图项：7.5 继承QStyledItemDelegate、7.5 重写paint()、7.5 自定义绘制单元格(进度条/颜色标记)

### 第 38 天

- [ ] 今日完成
- 继承 `QStyledItemDelegate`，重写 `createEditor()`
- 自定义编辑控件：某列用 QComboBox 编辑、某列用 QSpinBox 编辑
- **产出：** 自定义编辑控件

- [ ] 覆盖路线图项：7.5 重写createEditor()、7.5 QComboBox/QSpinBox编辑

### 第 39 天

- [ ] 今日完成
- 数据过滤与排序：`QSortFilterProxyModel`
- 练习：给文件浏览器加上"只显示 .txt 文件"的过滤功能
- **产出：** 带过滤的文件列表

- [ ] 覆盖路线图项：7.5 QSortFilterProxyModel、7.5 数据过滤与排序

### 第 40 天 ⭐

- [ ] 今日完成
- 综合：做一个"任务管理表"，包含：
  - 任务名（文本）、优先级（高/中/低，下拉选择）、进度（0-100%，进度条绘制）、状态（未开始/进行中/已完成，颜色标记）
  - 全部用 Model/View + 自定义 Delegate 实现
- **产出：** 任务管理表

- [ ] 覆盖路线图项：7.5 Model/View/Delegate综合、验证标准: 文件浏览器(QTreeView+QListView)

---

## 第 10 周：绘图与自定义控件

### 第 41 天

- [ ] 今日完成
- `QPainter` 基础：在 `paintEvent()` 中绘图
- 画线、矩形、圆、椭圆、扇形、文字
- `QPen`（笔）和 `QBrush`（刷）的使用
- **产出：** 绘制各种基本图形的 demo

- [ ] 覆盖路线图项：8.1 QPainter基础、8.1 paintEvent()、8.1 线条/矩形/椭圆/扇形/文字、8.1 QPen(笔)和QBrush(刷)

### 第 42 天

- [ ] 今日完成
- 坐标变换：`translate`、`rotate`、`scale`
- `save()` / `restore()` 保存和恢复绘图状态
- 练习：画一个时钟表盘（12 个刻度 + 时针/分针）
- **产出：** 静态时钟表盘

- [ ] 覆盖路线图项：8.2 translate()/rotate()/scale()、8.2 save()/restore()

### 第 43 天

- [ ] 今日完成
- 用 QTimer 驱动重绘，让时钟走起来
- 抗锯齿设置（`setRenderHint(QPainter::Antialiasing)`）
- **产出：** 实时走动的时钟

- [ ] 覆盖路线图项：8.2/8.1 综合: 实时时钟、9.5 QTimer驱动重绘、8.1 setRenderHint(抗锯齿)

### 第 44 天

- [ ] 今日完成
- QSS（Qt Style Sheets）入门
- 选择器：类选择器（QPushButton）、ID 选择器（#myButton）、属性选择器
- box model：margin / border / padding / content
- 练习：给记事本做一套暗色主题皮肤
- **产出：** 暗色主题记事本

- [ ] 覆盖路线图项：8.3 QSS基础(CSS子集)、8.3 选择器语法(类/ID/属性)、8.3 属性(background-color/border/padding/margin)、8.3 setStyleSheet()层级(控件/窗口/全局)

### 第 45 天 ⭐

- [ ] 今日完成
- 自定义控件：继承 QWidget，重写 `paintEvent()`
- 做"环形进度条"控件：支持设置进度（0-100）、颜色、线宽，做成独立可复用控件
- 做"圆形头像"控件：用 QPainter 裁剪圆形区域 + 绘制头像图片
- 做"带刻度进度条"：继承 QProgressBar 绘制刻度标记
- **产出：** 3 个自定义控件（环形进度条/圆形头像/带刻度进度条）

- [ ] 覆盖路线图项：8.4 继承QWidget重写paintEvent()、8.4 自定义控件(环形进度条)、8.4 自定义控件(圆形头像/带刻度进度条)

---

## 第 11 周：事件系统

### 第 46 天

- [ ] 今日完成
- 理解 Qt 事件系统架构：`QEvent` → `event()` → 具体事件处理器
- 事件与信号的区别
- 重写 `mousePressEvent`、`mouseReleaseEvent`、`mouseMoveEvent`
- **产出：** 鼠标事件追踪（Label 实时显示鼠标坐标和按键状态）

- [ ] 覆盖路线图项：9.1 事件机制: QEvent-event()-具体处理器、9.1 事件 vs 信号的区别、9.2 mousePressEvent/mouseReleaseEvent/mouseMoveEvent、9.2 获取鼠标坐标(pos()/globalPos())

### 第 47 天

- [ ] 今日完成
- 重写 `keyPressEvent`、`keyReleaseEvent`
- 处理组合键（Ctrl+C 等）、`QKeySequence` 标准快捷键
- 识别特殊键（方向键、Esc、Enter）
- `mouseDoubleClickEvent`：双击事件处理
- 练习：做一个"方向键移动的小方块"，双击重置位置
- **产出：** 键盘操控 demo

- [ ] 覆盖路线图项：9.3 keyPressEvent/keyReleaseEvent、9.3 组合键处理(Ctrl+C等)、9.3 QKeySequence标准快捷键、9.2 mouseDoubleClickEvent

### 第 48 天

- [ ] 今日完成
- 事件过滤器 `installEventFilter()` + `eventFilter()`
- 经典场景：让 QLineEdit 响应回车键
- 经典场景：让 QTableView 响应 Delete 键删除行
- **产出：** 事件过滤器实践

- [ ] 覆盖路线图项：9.4 installEventFilter()、9.4 eventFilter()、9.4 QLineEdit响应回车键、9.4 QTableView响应Delete键

### 第 49 天 ⭐

- [ ] 今日完成
- 综合练习：做一个"简易画板"
  - 鼠标按下拖动 → 画线条
  - 滚轮 → 调整笔刷粗细
  - 按 R/G/B 键 → 切换颜色
  - 按 Ctrl+Z → 撤销上一笔
- **产出：** 画板程序

- [ ] 覆盖路线图项：9.1-9.5 事件系统综合、9.2 wheelEvent(滚轮)、9.3 keyPressEvent(按键)、验证标准: 画板程序

---

## 第 12 周：文件 I/O 与数据

### 第 50 天

- [ ] 今日完成
- `QFile` 读写文件
- `QTextStream`（文本流）vs `QDataStream`（二进制流）
- `QFileInfo` 获取文件信息（路径、大小、修改时间）
- **产出：** 文件读写练习

- [ ] 覆盖路线图项：10.1 QFile、10.1 QTextStream vs QDataStream、10.1 QFileInfo

### 第 51 天

- [ ] 今日完成
- `QStandardPaths` 获取系统标准路径（AppDataLocation/DocumentsLocation/TempLocation）
- `QSettings` 存储应用配置：了解 INI 格式 vs Windows 注册表的区别
- `beginGroup()` / `endGroup()` 分组读写配置
- 练习：让记事本记住上次打开的目录、窗口位置和大小
- **产出：** 带配置记忆的记事本

- [ ] 覆盖路线图项：10.2 QStandardPaths、10.3 QSettings、10.3 INI格式 vs 注册表、10.3 beginGroup()/endGroup()

### 第 52 天

- [ ] 今日完成
- `QJsonDocument` / `QJsonObject` / `QJsonArray`
- 从文件读取 JSON → 解析 → 修改 → 写回
- 练习：Todo 列表的数据用 JSON 文件持久化
- **产出：** Todo 数据可保存和加载

- [ ] 覆盖路线图项：10.4 QJsonDocument、10.4 QJsonObject/QJsonArray、10.4 读取/写入JSON文件

### 第 53 天 ⭐

- [ ] 今日完成
- 将前几天的内容整合进记事本
  - 文件 → 打开（真正读取文件内容到 QPlainTextEdit）
  - 文件 → 保存（真正写入磁盘）
  - 文件 → 另存为
  - 启动时恢复上次窗口位置/大小
- **产出：** 记事本 2.0（能真正读写文件）

- [ ] 覆盖路线图项：10.1-10.4 综合: 记事本真正读写文件、验证标准: QSettings记忆窗口状态

---

## 第 13 周：多线程

### 第 54 天

- [ ] 今日完成
- 理解 GUI 线程不能阻塞的原因
- 经典错误示范：在主线程 `sleep()` 或 `while(1)`
- `QThread` 基础：继承 QThread + 重写 `run()`（了解即可）
- **产出：** 理解为什么需要多线程

- [ ] 覆盖路线图项：11.1 GUI线程不能阻塞、11.1 主线程与工作线程关系、11.2 继承QThread重写run()(了解)

### 第 55 天

- [ ] 今日完成
- **推荐方式**：Worker 对象 + `moveToThread()`
- 创建 Worker 类，包含耗时操作的槽函数
- 启动线程、发送信号触发工作、接收完成信号
- 练习："计算大文件 MD5"在子线程执行，UI 保持响应
- **产出：** 正确的 Qt 多线程写法

- [ ] 覆盖路线图项：11.2 moveToThread()(推荐)、11.5 Worker模式、11.5 工作线程发信号更新UI

### 第 56 天

- [ ] 今日完成
- `QMutex` + `QMutexLocker`：互斥锁保护共享数据
- `QWaitCondition`：线程等待/唤醒（生产者-消费者模型）
- `QSemaphore`：信号量控制并发数量
- `QtConcurrent::run()`：最简单的异步方式
- `QFutureWatcher`：监控异步任务状态
- 练习：多线程批量计算文件哈希，UI 实时显示每个文件的完成进度
- **产出：** 批量文件处理 demo

- [ ] 覆盖路线图项：11.3 QMutex + QMutexLocker、11.4 QtConcurrent::run()、11.4 QFutureWatcher、11.3 QWaitCondition、11.3 QSemaphore

### 第 57 天 ⭐

- [ ] 今日完成
- 综合：批量图片缩略图生成器
  - 使用 `QThreadPool` 管理线程池，限制并发数量
  - 用 `QThread::currentThread()` 和 `QObject::thread()` 调试验证线程归属
  - 选择文件夹 → 子线程池遍历图片 → 生成缩略图
  - UI 实时显示当前处理的文件名和总进度
  - 支持中途取消
- **产出：** 批量缩略图生成器（线程池版）

- [ ] 覆盖路线图项：11.4 QThreadPool、11.2 QObject::thread()/QThread::currentThread()、验证标准: 批量文件处理

---

## 第 14 周：网络编程

### 第 58 天

- [ ] 今日完成
- `QTcpServer` + `QTcpSocket`：TCP 通信
- 写一个简单的 Echo 服务端：收到什么就回复什么
- 写一个客户端：连接服务端，发送消息，显示回复
- **产出：** Echo 服务端 + 客户端

- [ ] 覆盖路线图项：12.1 QTcpServer、12.1 QTcpSocket、12.1 连接/收发/断开处理

### 第 59 天

- [ ] 今日完成
- `QNetworkAccessManager` + `QNetworkRequest` + `QNetworkReply`
- 发起 GET 请求，获取返回数据
- 理解异步网络请求的信号模型（`finished(QNetworkReply*)`）
- 练习：调用一个免费 HTTP API（如天气、名言），在 UI 显示结果
- **产出：** HTTP API 调用 demo

- [ ] 覆盖路线图项：12.3 QNetworkAccessManager、12.3 QNetworkRequest/QNetworkReply、12.3 GET/POST请求、12.3 异步请求(信号驱动)

### 第 60 天

- [ ] 今日完成
- POST 请求
- 下载文件并显示进度条
- `QUdpSocket`：UDP 通信
  - 单播：点对点发送数据报
  - 广播（`QHostAddress::Broadcast`）：局域网全体接收
  - 组播（`QHostAddress` 组播地址）：加入组播组接收
- **产出：** 带下载进度的文件下载器 + UDP 广播/组播 demo

- [ ] 覆盖路线图项：12.3 下载文件(带进度)、12.2 QUdpSocket、12.2 广播与组播

### 第 61 天 ⭐

- [ ] 今日完成
- 综合：局域网聊天程序
  - 服务端：接收所有客户端的消息并广播
  - 客户端：连接服务器，发送和接收消息
  - UI 显示聊天记录、在线用户列表
- **产出：** 简易聊天室

- [ ] 覆盖路线图项：12.4 聊天程序(TCP)、12.1-12.3 综合实战、验证标准: 网络请求不阻塞UI

---

## 第 15 周：数据库

### 第 62 天

- [ ] 今日完成
- SQLite 简介与环境
- `QSqlDatabase`：打开/关闭数据库连接
- `QSqlQuery`：执行 SQL（CREATE TABLE、INSERT、SELECT）
- 练习：创建数据库，建表，插入几条数据，查询显示
- **产出：** 数据库 CRUD 基础

- [ ] 覆盖路线图项：13.1 QSqlDatabase、13.1 QSqlQuery、13.2 CREATE TABLE/INSERT/SELECT

### 第 63 天

- [ ] 今日完成
- `QSqlTableModel`：将数据库表直接绑定到 QTableView
- 自动显示、编辑、提交修改
- 练习：通讯录列表（姓名、电话、邮箱），支持增删改
- **产出：** 通讯录 V1

- [ ] 覆盖路线图项：13.1 QSqlTableModel、13.3 QSqlTableModel-QTableView一条龙、13.2 增删改查

### 第 64 天

- [ ] 今日完成
- `QSqlQueryModel`：自定义 SQL 查询
- `QDataWidgetMapper`：当前行映射到独立控件
- 参数化查询（`prepare()` + `bindValue()`）防止 SQL 注入
- 练习：通讯录升级——选中表格某行，右侧表单显示详情并可编辑，搜索用参数化查询防注入
- **产出：** 通讯录 V2（主从视图）

- [ ] 覆盖路线图项：13.3 QSqlQueryModel、13.3 QDataWidgetMapper、13.2 参数化查询(防SQL注入)

### 第 65 天 ⭐

- [ ] 今日完成
- 综合：通讯录 V3
  - 完整的增删改查
  - 搜索/过滤功能
  - 数据导出为 CSV
  - QSettings 记住窗口状态
- **产出：** 完整通讯录应用

- [ ] 覆盖路线图项：13.2 综合: 通讯录应用、验证标准: SQLite增删改查

---

## 第 16 周：QML 入门

### 第 66 天

- [ ] 今日完成
- 理解 QML 的定位：做流畅的现代 UI
- 新建 Qt Quick 项目，运行第一个 QML 程序
- QML 基本语法：属性绑定、JavaScript 表达式、信号处理器
- **产出：** 理解 QML 基本概念

- [ ] 覆盖路线图项：14.1 QML定位(Widgets vs QML)、14.1 第一个QML程序、14.1 属性绑定/JS表达式/信号处理器

### 第 67 天

- [ ] 今日完成
- `Rectangle`、`Text`、`Image`、`MouseArea`
- `Row` / `Column` / `Grid` 布局
- 练习：用 QML 写一个计算器界面
- **产出：** QML 计算器

- [ ] 覆盖路线图项：14.2 Rectangle/Text/Image、14.2 MouseArea、14.2 Row/Column/Grid布局

### 第 68 天

- [ ] 今日完成
- `ListView` + Model（ListModel / C++ Model）
- `Repeater` 动态生成元素
- 练习：用 QML 做一个待办事项列表
- **产出：** QML Todo 列表

- [ ] 覆盖路线图项：14.2 ListView + Model、14.2 Repeater

### 第 69 天

- [ ] 今日完成
- C++ 与 QML 交互：注册 C++ 类、调用 C++ 方法
- 把之前的"天气查询"后端（HTTP 请求部分）用 C++ 实现，QML 做界面
- **产出：** C++/QML 混合应用

- [ ] 覆盖路线图项：14.3 QQmlApplicationEngine、14.3 注册C++类型到QML、14.3 C++/QML信号桥接

### 第 70 天 ⭐

- [ ] 今日完成
- QML 动画入门：PropertyAnimation、NumberAnimation
- Transition（过渡效果）
- 练习：给 Todo 列表加动画（添加/删除时的淡入淡出）
- **产出：** QML Todo（带动画）

- [ ] 覆盖路线图项：14.3 QML动画入门、验证标准: QML重写天气查询界面

---

## 第 17~20 周：综合实战项目（20 天，选 1 个完成）

### 方向一：音乐播放器（10 天）
| 天数 | 完成 | 任务 |
|------|------|------|
| 71 | [ ] | QMediaPlayer 基础：播放/暂停/停止控制 |
| 72 | [ ] | QMediaPlayer 进阶：进度条、音量、上下曲切换 |
| 73 | [ ] | 播放列表 UI（QListView + Model） |
| 74 | [ ] | 播放列表交互（添加/删除/拖拽排序） |
| 75 | [ ] | 歌词解析（LRC 格式） |
| 76 | [ ] | 歌词同步滚动显示 |
| 77 | [ ] | 自定义界面：环形进度条、专辑封面 |
| 78 | [ ] | 频谱可视化 |
| 79 | [ ] | QSS 整体美化 |
| 80 | [ ] | 打包发布（windeployqt） |

### 方向二：Markdown 编辑器（10 天）
| 天数 | 完成 | 任务 |
|------|------|------|
| 71 | [ ] | 左侧编辑区（QPlainTextEdit） |
| 72 | [ ] | 实时预览框架搭建（QSplitter 分栏） |
| 73 | [ ] | Markdown → HTML 解析（标题/加粗/列表） |
| 74 | [ ] | Markdown → HTML 解析（链接/图片/代码块） |
| 75 | [ ] | QSyntaxHighlighter：标题、加粗语法高亮 |
| 76 | [ ] | QSyntaxHighlighter：代码块、引用语法高亮 |
| 77 | [ ] | 文件树侧边栏（QFileSystemModel） |
| 78 | [ ] | 多标签页管理 |
| 79 | [ ] | 导出为 HTML/PDF |
| 80 | [ ] | 主题切换、打包发布 |

### 方向三：截图工具（10 天）
| 天数 | 完成 | 任务 |
|------|------|------|
| 71 | [ ] | 全屏截图功能 |
| 72 | [ ] | 区域选择截图（鼠标拖拽选区） |
| 73 | [ ] | 截图编辑：矩形框、箭头标注 |
| 74 | [ ] | 截图编辑：画笔、文字标注 |
| 75 | [ ] | 截图保存为文件 |
| 76 | [ ] | 截图复制到剪贴板 |
| 77 | [ ] | 全局热键注册触发截图 |
| 78 | [ ] | 系统托盘图标 |
| 79 | [ ] | 窗口自动识别截图 |
| 80 | [ ] | 打包发布 |

---

## 附录 A：每日学习模板

每天 1~2 小时的推荐分配：

```
10 min — 复习前一天内容，浏览今天要学的内容
30 min — 阅读文档/教程，理解概念
40 min — 动手写代码，完成当天练习
10 min — 总结今天学到的东西，记录遇到的问题
```

## 附录 B：每周复习检查点

每周最后一天，花 30 分钟做这 5 件事：

1. [ ] 本周学过的类名和核心方法，能不看文档写出吗？
2. [ ] 本周的练习代码能独立重新写一遍吗？
3. [ ] 有没有看不懂但没深究的报错？现在去查清楚。
4. [ ] 哪个概念最模糊？标记出来，下周找机会再练一次。
5. [ ] 本周代码提交到 Git 了吗？（建议从第一天就用 Git 管理学习代码）

## 附录 C：常见卡点预警

| 卡点 | 常见原因 | 解决办法 |
|------|----------|----------|
| 信号槽不触发 | 连接写错、对象已被销毁、信号参数不匹配 | 检查 connect 返回值，用 Qt::Debug 调试验证 |
| 界面不刷新 | 在主线程做耗时操作 | 把耗时逻辑移到子线程 |
| 布局不生效 | 忘记 setLayout()、父控件设置错误 | 检查父子关系和布局设置顺序 |
| 崩溃无提示 | 指针问题、跨线程操作 UI | 用 Qt Creator 调试器，检查堆栈 |
| Model/View 数据不更新 | 未调用 beginResetModel/endResetModel | 检查 Model 的信号发射 |

---

## 节奏建议

- **工作日**：每天 1 个新任务（约 70 天学完核心内容）
- **周末**：复习 + 尝试做一些阶段性的小题，不学新内容
- **如果某天落下了**：不要赶进度，宁愿延后也不要跳步骤。每个阶段都是下一个阶段的基础。
- **项目阶段**：不要着急，选一个自己最感兴趣的项目方向，做到可以"拿得出手"的程度为止。

总耗时约 **3.5 ~ 4 个月**（含项目），之后你可以自信地说"我会 Qt 开发"。
