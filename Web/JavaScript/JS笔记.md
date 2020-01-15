# JS笔记

## JS用法

HTML中脚本必须放在`<script></script>`标签中

- `<scripy>` 标签

    - 范围: `<script></script>`中间
    - 从`<script>`开始，`</script>`结束
   
- `body`中的JS
    
    [示例1](1_写文本.html)
    
- `<head>` 中的 `JavaScript` 函数

    把一个 JavaScript 函数放置到 HTML 页面的 <head> 部分。该函数会在点击按钮时被调用
    
    [示例2:按钮点击](2_按钮点击)
    
- 外部的 `JavaScript`

    也可以把脚本保存到外部文件中。外部文件通常包含被多个网页使用的代码。
    
## JavaScript 输出
    
JavaScript 没有任何打印或者输出的函数。
    
- `JavaScript` 显示数据
   
    - 使用window.alert()弹窗警告
    
    - documen.write()讲内容写入HTML文档
    
    - 使用interHTML写入HTML元素
    
    - console.log()写入控制台
  
1. 使用window.alert()
    
    通过弹窗警告显示数据
    
    [示例3:弹窗警告](3_弹窗警告.html)
    
2. 写入`HTML`文档

    将`JavaScript`直接写在`HTML`文档中

    [示例4: 写到HTML文档](4_写到HTML.html)
    
    
3. 操作`HTML`元素

    `document.getElementById(id)`获取id,然后使用interHTML
    
    [示例5: 操作HTML](5_操作HTML.html)
    
4. 写到控制台

    [示例6:写到控制台](5_写到控制台.html)