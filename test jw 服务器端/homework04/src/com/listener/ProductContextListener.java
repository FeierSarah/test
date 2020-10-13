package com.listener;
import javax.servlet.*;
import javax.servlet.annotation.WebListener;
import java.util.ArrayList;
import com.model.Product;

@WebListener     // 使用注解注册监听器
public class ProductContextListener  implements ServletContextListener{
     private ServletContext context = null;
     // 在上下文对象初始化时将商品信息存储到ArrayList对象中
     public void contextInitialized(ServletContextEvent sce){
       ArrayList<Product> productList = new ArrayList<Product>();
       productList.add(new Product(101, "相机",1000,10, "家用"));
       productList.add(new Product(102, "手机",2000,20, "电子"));
       productList.add(new Product(103, "电脑",3000,30, "电子"));
       productList.add(new Product(104, "冰箱",4000,40, "家用"));
       context = sce.getServletContext();
       // 将productList存储在应用作用域中
       context.setAttribute("productList",productList);   // 添加属性
    }
    public void contextDestroyed(ServletContextEvent sce){
       context = sce.getServletContext();
       context.removeAttribute("productList");
    }
}

