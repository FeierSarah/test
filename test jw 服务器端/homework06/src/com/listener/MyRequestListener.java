package com.listener;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.ServletRequestEvent;
import javax.servlet.ServletRequestListener;

public final class MyRequestListener implements ServletRequestListener{
    private int count = 0;
    @SuppressWarnings("deprecation")
	public void requestInitialized(ServletRequestEvent re){
        HttpServletRequest request= (HttpServletRequest)re.getServletRequest();
        if(request.getRequestURI().equals("/homework06/onlineCount.jsp")){
            count++;
            re.getServletContext().setAttribute("count",new Integer(count));
        }
    }

    public void requestDestroyed(ServletRequestEvent re){

    }

}

