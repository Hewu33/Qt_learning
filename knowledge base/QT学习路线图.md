# QT 学习路线图（循序渐进）

> 适用人群：有 C++ 基础，想系统学习 QT 框架的开发者。
> 学习顺序自上而下，每一步掌握后再进入下一步。

---

## 第一阶段：环境搭建与第一个窗口

**目标：成功编译运行一个 QT 程序，理解项目结构。**

### 1.1 安装 QT 开发环境
- [x] 下载并安装 Qt Creator（推荐）或配置 VS Code + CMake
- [x] 安装对应版本的 Qt 库（至少包含 MSVC 或 MinGW 编译套件）
- [x] 理解 Qt 版本差异（Qt5 vs Qt6，选择 Qt6 作为学习目标）

### 1.2 第一个 Qt 程序
- [x] 用 Qt Creator 新建一个 `QWidget` 项目
- [x] 理解生成的 `main.cpp`、头文件、`.pro` 或 `CMakeLists.txt` 的结构
- [x] 了解 QApplication 的作用（事件循环的入口）
- [x] 运行程序，出现一个空白窗口

### 1.3 项目构建系统
- [x] 阅读 `.pro` 文件（qmake）或 `CMakeLists.txt`（CMake）的基本语法
- [x] 知道如何添加新源文件、头文件到项目中
- [x] 知道 `QT +=` 的作用（添加模块依赖）

**🔰 验证标准：** 能独立创建项目、添加文件、编译运行，不报错。

---

## 第二阶段：信号与槽（Signal & Slot）

**目标：理解 Qt 最核心的通信机制。**

### 2.1 基础概念
- [x] 理解什么是信号（Signal）和槽（Slot）
- [x] 用 `connect()` 连接信号与槽（Qt5 新式语法）
- [x] 区分两种连接写法：
  ```cpp
  // 旧式（不推荐）
  connect(sender, SIGNAL(clicked()), receiver, SLOT(onClicked()));
  // 新式（推荐）
  connect(sender, &Sender::clicked, receiver, &Receiver::onClicked);
  ```

### 2.2 动手实验
- [x] 创建一个按钮 `QPushButton`，点击后关闭窗口
- [x] 创建自定义信号（`signals:` 关键字）
- [x] 创建自定义槽（`public slots:` / `private slots:`）
- [x] 理解信号与槽的参数匹配规则

### 2.3 进阶用法
- [x] 使用 Lambda 表达式作为槽函数
- [x] 理解 `sender()` 的用法和局限性
- [x] 了解 `QObject::disconnect()`
- [x] 了解 `Qt::AutoConnection` / `Qt::DirectConnection` / `Qt::QueuedConnection` 的区别（先记概念，线程阶段再深入）

**🔰 验证标准：** 能写出"一个窗口 A 发信号，另一个窗口 B 接收并处理"的代码。

---

## 第三阶段：常用控件（Widgets）

**目标：熟悉 20+ 常用控件，能快速搭出 UI 界面。**

### 3.1 按钮类
- [x] `QPushButton` — 普通按钮
- [x] `QRadioButton` + `QButtonGroup` — 单选按钮组
- [x] `QCheckBox` — 复选框
- [x] `QToolButton` — 工具按钮

### 3.2 输入类
- [x] `QLineEdit` — 单行文本输入（掌握 validators、mask、echoMode）
- [ ] `QTextEdit` — 富文本编辑
- [ ] `QPlainTextEdit` — 纯文本编辑
- [x] `QSpinBox` / `QDoubleSpinBox` — 数字输入
- [x] `QSlider` / `QScrollBar` — 滑块
- [x] `QComboBox` — 下拉框

### 3.3 显示类
- [ ] `QLabel` — 文本/图片显示（掌握富文本、pixmap、缩放）
- [ ] `QProgressBar` — 进度条
- [ ] `QListWidget` — 列表控件
- [ ] `QTableWidget` — 表格控件（基于 item）
- [ ] `QTreeWidget` — 树形控件（基于 item）

### 3.4 分组与容器
- [ ] `QGroupBox` — 分组框
- [ ] `QTabWidget` — 选项卡
- [ ] `QStackedWidget` — 页面栈（类似分页）
- [ ] `QScrollArea` — 滚动区域

**🔰 验证标准：** 做一个"个人信息面板"——左侧 QTreeWidget 导航，右侧 QStackedWidget 切换表单页，综合运用按钮、输入、容器、树形控件。

---

## 第四阶段：布局管理（Layouts）

**目标：做出能自适应窗口大小的界面。**

### 4.1 三大布局
- [x] `QHBoxLayout` — 水平布局
- [x] `QVBoxLayout` — 垂直布局
- [ ] `QGridLayout` — 网格布局

### 4.2 布局核心概念
- [x] `addStretch()` — 弹性空间
- [ ] `setSpacing()` / `setContentsMargins()` — 间距与边距
- [ ] `sizePolicy` — 尺寸策略（Preferred / Expanding / Fixed 等）
- [ ] `setMinimumSize()` / `setMaximumSize()` / `setFixedSize()`

### 4.3 布局嵌套
- [x] 在布局中嵌套另一个布局
- [ ] 理解"布局 → 控件/子布局"的层级关系
- [x] 用 `addLayout()` 嵌套使用

### 4.4 其他布局
- [ ] `QFormLayout` — 表单布局（标签-输入框对）
- [ ] `QSplitter` — 可拖拽分割面板

**🔰 验证标准：** 做一个"计算器"界面，按钮用 GridLayout 排列，整体用 VBoxLayout，窗口缩放时按钮等比例变化。

---

## 第五阶段：对话框与窗口

**目标：掌握窗口交互、模态/非模态对话框。**

### 5.1 内置对话框
- [ ] `QMessageBox` — 消息提示（info / warning / critical / question）
- [ ] `QFileDialog` — 文件选择对话框
- [ ] `QColorDialog` — 颜色选择器
- [ ] `QFontDialog` — 字体选择器
- [ ] `QInputDialog` — 输入对话框
- [ ] `QProgressDialog` — 进度对话框

### 5.2 窗口类型
- [ ] 模态 vs 非模态窗口（`exec()` vs `show()`）
- [ ] `setWindowModality()` 的用法
- [ ] `setAttribute(Qt::WA_DeleteOnClose)` — 窗口关闭时自动释放内存

### 5.3 自定义对话框
- [ ] 继承 `QDialog` 创建自定义对话框
- [ ] 使用 `QDialogButtonBox` 统一按钮管理

### 5.4 窗口间通信
- [ ] 父窗口 → 子窗口：直接调用方法
- [ ] 子窗口 → 父窗口：通过信号回传数据
- [ ] 理解 `parent` 机制与 Qt 的对象树（内存管理）

**🔰 验证标准：** 做一个对话框综合练习——用 QFileDialog 打开/保存、用 QMessageBox 做确认提示、用自定义 QDialog 收集用户输入并回传数据。

---

## 第六阶段：菜单栏、工具栏、状态栏

**目标：掌握桌面应用的标准 UI 框架。**

### 6.1 菜单系统
- [ ] `QMenuBar` — 菜单栏
- [ ] `QMenu` — 菜单（可嵌套子菜单）
- [ ] `QAction` — 菜单项/工具栏项的核心抽象
- [ ] 快捷键 `setShortcut()`

### 6.2 工具栏
- [ ] `QToolBar` — 工具栏
- [ ] 向工具栏添加 `QAction`
- [ ] 工具栏的可停靠属性

### 6.3 状态栏
- [ ] `QStatusBar` — 状态栏
- [ ] `showMessage()` — 临时消息
- [ ] 添加永久控件（`addPermanentWidget()`）

### 6.4 右键菜单
- [ ] 重写 `contextMenuEvent()`
- [ ] 使用 `QMenu::exec()` 弹出右键菜单

**🔰 验证标准：** 在上一阶段的"记事本"基础上，加上完整的菜单栏、工具栏、状态栏。

---

## 第七阶段：Model / View 架构

**目标：告别 Item-Based 控件，掌握数据驱动 UI。**

### 7.1 概念理解
- [ ] 理解为什么需要 Model/View/Delegate 分离
- [ ] 对比：`QListWidget`（item-based）vs `QListView`（model-based）的区别

### 7.2 标准 Model
- [ ] `QStringListModel` — 字符串列表模型
- [ ] `QStandardItemModel` — 通用树/表模型
- [ ] `QFileSystemModel` — 文件系统模型

### 7.3 View 控件
- [ ] `QListView` — 列表视图
- [ ] `QTableView` — 表格视图
- [ ] `QTreeView` — 树形视图
- [ ] 理解 View 和 Model 的绑定：`setModel()`

### 7.4 选择模型
- [ ] `QItemSelectionModel` — 管理选中状态
- [ ] 获取当前选中的项
- [ ] 单选 vs 多选模式

### 7.5 自定义 Delegate
- [ ] 继承 `QStyledItemDelegate` 自定义单元格显示
- [ ] 重写 `paint()` 和 `createEditor()`
- [ ] 做一个能编辑颜色、下拉选择的表格单元格

**🔰 验证标准：** 做一个"文件浏览器"，左侧目录树（QTreeView + QFileSystemModel），右侧文件列表（QListView）。

---

## 第八阶段：自定义绘制与样式

**目标：能做出美观、自定义外观的界面。**

### 8.1 绘图基础
- [ ] `QPainter` — 2D 绘图核心类
- [ ] `paintEvent()` — 重写绘制事件
- [ ] 绘制线条、矩形、椭圆、文字
- [ ] `QPen`（笔）和 `QBrush`（刷）的使用

### 8.2 坐标变换
- [ ] `translate()` / `rotate()` / `scale()` — 变换
- [ ] `save()` / `restore()` — 保存/恢复状态

### 8.3 样式表（QSS）
- [ ] 理解 QSS = CSS 的子集
- [ ] 选择器语法：类选择器、ID 选择器、属性选择器
- [ ] 常见属性：`background-color`、`border`、`padding`、`margin`
- [ ] `setStyleSheet()` 的应用层级（控件级 / 窗口级 / 全局）

### 8.4 自定义控件
- [ ] 继承 `QWidget` 或现有控件，重写 `paintEvent()`
- [ ] 做一个圆形头像控件
- [ ] 做一个带刻度的进度条

**🔰 验证标准：** 做一个"仪表盘"风格的温度显示控件，圆形表盘 + 指针，完全自定义绘制。

---

## 第九阶段：事件系统

**目标：深入理解 Qt 事件循环，能拦截和处理各种事件。**

### 9.1 事件机制
- [ ] 理解事件与信号的区别
- [ ] `QEvent` 类及其子类
- [ ] `event()` — 事件分发入口
- [ ] 各专项事件处理器：`mousePressEvent()`、`keyPressEvent()` 等

### 9.2 鼠标事件
- [ ] `mousePressEvent()` / `mouseReleaseEvent()` / `mouseMoveEvent()`
- [ ] `mouseDoubleClickEvent()`
- [ ] `wheelEvent()` — 滚轮事件
- [ ] 获取鼠标坐标（`pos()` / `globalPos()`）

### 9.3 键盘事件
- [ ] `keyPressEvent()` / `keyReleaseEvent()`
- [ ] 按键组合（Ctrl+C 等）
- [ ] `QKeySequence` — 标准快捷键

### 9.4 事件过滤器
- [ ] `installEventFilter()` — 拦截其他控件的事件
- [ ] 重写 `eventFilter()`
- [ ] 典型应用：让 LineEdit 响应回车键

### 9.5 定时器事件
- [ ] `QTimer`（推荐）— 定时器类
- [ ] `timerEvent()` — 底层定时器事件

**🔰 验证标准：** 做一个"画板"程序，鼠标按下拖动可以画线。

---

## 第十阶段：文件 I/O 与数据持久化

**目标：掌握文件读写和配置存储。**

### 10.1 文件读写
- [ ] `QFile` — 文件操作
- [ ] `QTextStream` — 文本流
- [ ] `QDataStream` — 二进制流
- [ ] `QFileInfo` — 文件信息

### 10.2 标准路径
- [ ] `QStandardPaths` — 获取系统标准路径
- [ ] 知道 `AppDataLocation`、`DocumentsLocation`、`TempLocation`

### 10.3 配置存储
- [ ] `QSettings` — 应用程序配置存储
- [ ] INI 格式 vs 注册表（Windows）
- [ ] `beginGroup()` / `endGroup()` — 配置分组

### 10.4 JSON 处理
- [ ] `QJsonDocument` — JSON 文档
- [ ] `QJsonObject` / `QJsonArray` — 对象与数组
- [ ] 从文件读取 JSON / 写入 JSON

**🔰 验证标准：** 记事本能真正打开 `.txt` 文件并显示，保存时真正写入磁盘，窗口位置/大小用 QSettings 记忆。

---

## 第十一阶段：多线程

**目标：掌握 Qt 线程模型，避免界面卡顿。**

### 11.1 基础概念
- [ ] 理解为什么不能在工作线程直接操作 UI
- [ ] 理解主线程（GUI 线程）与工作线程的关系

### 11.2 QThread 用法
- [ ] 继承 `QThread`，重写 `run()`（老式用法，了解即可）
- [ ] `moveToThread()` — **推荐的现代用法**
- [ ] `QObject::thread()` 和 `QThread::currentThread()`

### 11.3 线程同步
- [ ] `QMutex` + `QMutexLocker` — 互斥锁
- [ ] `QWaitCondition` — 等待条件
- [ ] `QSemaphore` — 信号量

### 11.4 高级并发
- [ ] `QtConcurrent::run()` — 函数式并发（最简单）
- [ ] `QFuture` + `QFutureWatcher` — 异步结果监控
- [ ] `QThreadPool` — 线程池

### 11.5 实践模式
- [ ] Worker 模式：工作对象 + `moveToThread()`
- [ ] 从工作线程发信号更新 UI

**🔰 验证标准：** 做一个"文件批量重命名"工具，重命名逻辑在子线程，UI 实时显示进度条。

---

## 第十二阶段：网络编程

**目标：掌握 TCP / HTTP 通信。**

### 12.1 TCP 通信
- [ ] `QTcpServer` — TCP 服务器
- [ ] `QTcpSocket` — TCP 客户端
- [ ] 处理连接、收发数据、断开

### 12.2 UDP 通信
- [ ] `QUdpSocket` — UDP 通信
- [ ] 广播与组播

### 12.3 HTTP 客户端
- [ ] `QNetworkAccessManager` — 网络请求管理
- [ ] `QNetworkRequest` / `QNetworkReply`
- [ ] GET / POST 请求
- [ ] 异步请求（信号驱动）
- [ ] 下载文件（带进度）

### 12.4 实践
- [ ] 做一个简单的聊天程序（TCP，局域网内）
- [ ] 做一个天气查询工具（调用公开 HTTP API）

**🔰 验证标准：** 能做网络请求并在 UI 上展示结果，不阻塞界面。

---

## 第十三阶段：数据库

**目标：掌握 SQL 数据库的增删改查。**

### 13.1 SQLite 入门
- [ ] `QSqlDatabase` — 数据库连接
- [ ] `QSqlQuery` — 执行 SQL
- [ ] `QSqlTableModel` — 表模型（直接绑定到 View）

### 13.2 CRUD 操作
- [ ] 创建表、插入数据
- [ ] 查询、更新、删除
- [ ] 参数化查询（防 SQL 注入）

### 13.3 模型绑定
- [ ] `QSqlTableModel` → `QTableView` 的一条龙显示
- [ ] `QSqlQueryModel` — 自定义查询模型
- [ ] `QDataWidgetMapper` — 将数据映射到独立控件

**🔰 验证标准：** 做一个"通讯录"应用，增删改查联系人，数据存 SQLite。

---

## 第十四阶段：QML 入门（Qt Quick）

**目标：了解 Qt 的现代 UI 技术栈。**

### 14.1 基础
- [ ] 理解 QML 和 Qt Widgets 的定位差异
- [ ] 运行第一个 QML 程序
- [ ] QML 基本语法：属性、表达式、信号处理器

### 14.2 核心元素
- [ ] `Rectangle`、`Text`、`Image`
- [ ] `MouseArea` — 处理点击
- [ ] `Row` / `Column` / `Grid` — 布局
- [ ] `ListView` — 列表视图

### 14.3 C++ 与 QML 交互
- [ ] `QQmlApplicationEngine` — 加载 QML
- [ ] 注册 C++ 类型到 QML
- [ ] 信号在 C++ 和 QML 之间的桥接

**🔰 验证标准：** 用 QML 重写之前的"天气查询"界面。

---

## 第十五阶段：实战综合项目

**目标：综合运用所学，完成完整项目。**

选择一个方向深入：

### 项目 A：音乐播放器
- 涉及：QMediaPlayer、播放列表（Model/View）、歌词滚动、QSS 美化
- 难度：⭐⭐⭐

### 项目 B：截图工具
- 涉及：屏幕截图、区域选择、标注/箭头/文字、热键、托盘图标
- 难度：⭐⭐⭐

### 项目 C：Markdown 编辑器
- 涉及：QSyntaxHighlighter、实时预览（QTextBrowser）、文件监控
- 难度：⭐⭐⭐

### 项目 D：局域网文件传输工具
- 涉及：TCP 通信、多线程、大文件分片传输、断点续传
- 难度：⭐⭐⭐⭐

### 项目 E：简易数据库管理工具
- 涉及：多种数据库支持（SQLite/MySQL）、Model/View/Delegate、SQL 编辑高亮
- 难度：⭐⭐⭐⭐

**🔰 验证标准：** 项目能完整运行，代码结构清晰，无内存泄漏。

---

## 附录：持续进阶方向

完成上述阶段后，可以根据兴趣进一步深入：

- [ ] **Qt 单元测试** — `QTest` 框架
- [ ] **国际化（i18n）** — `QTranslator`、`tr()`、`.ts` 文件
- [ ] **插件系统** — `QPluginLoader`
- [ ] **进程间通信** — `QLocalServer` / `QLocalSocket`
- [ ] **Web 引擎** — `QWebEngineView`（嵌入浏览器）
- [ ] **串口通信** — `QSerialPort`（工控/嵌入式）
- [ ] **图表** — `Qt Charts` 模块
- [ ] **3D 图形** — `Qt 3D` 模块
- [ ] **打包发布** — `windeployqt` / `macdeployqt` / `linuxdeployqt`

---

## 学习建议

1. **每天写代码**：每学一个知识点，立刻动手写一个小 demo，不要光看文档。
2. **读源码**：Qt Creator 里按住 Ctrl 点击类名，可以直接跳转到 Qt 源码。
3. **善用文档**：Qt Assistant 或 [doc.qt.io](https://doc.qt.io) 是最好的一手资料。
4. **遇到 Bug 先看信号连接**：Qt 新手 80% 的 Bug 是信号槽连接写错了。
5. **对象树要理解透**：`new` 了控件但不 `delete`，不是内存泄漏，是 Qt 的对象树管理机制。
