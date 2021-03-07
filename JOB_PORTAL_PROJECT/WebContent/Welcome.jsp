<%@page import="com.jobportal.Controller.User"%>
<%
User user = (User) session.getAttribute("logUser");
if (user == null) {
	response.sendRedirect("HOMEPAGE.jsp");
}
%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>

<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>JSP Page</title>
</head>
<body>
	<div align="center">
		<h1>
			Welcome,
			<%=user.getUname()%></h1>
		<hr>

		<h2>
			Your Password:
			<%=user.getPassword()%></h2>
			
	    <h3>
			Your Email:
			<%=user.getEmail()%>
		</h3>
		<button>
			<a href="LogoutServlet">Log Out</a>
		</button>
	</div>
</body>
</html>