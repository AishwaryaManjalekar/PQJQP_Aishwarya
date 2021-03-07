<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>LOGIN PAGE</title>
<style type="text/css">
 @import"https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css";
    *{
        margin: 0;
        padding: 0;
    }
    body{
    background-image: url(../JOB_PORTAL_PROJECT/5.jpg);
                background-position: center;
                background-size: cover;
                font-family: sans-serif;
                margin-top: 40px;
            }

.login-box{
    width: 280px;
    position: absolute;
    top: 50%;
    left: 50%;
    transform: translate(-50%,-50%);
}
.login-box h1{
    float:inline-start;
    font-size: 40px;
    border-bottom: 6px solid #4caf50;
    margin-bottom: 50px;
    padding: 13px 0px;
   
}
.textbox{
    width: 100%;
    overflow: hidden;
    font-size: 20px;
    padding: 8px 0;
    margin: 8px 0;
    border-bottom: 1px solid #4caf50;
}
.textbox i{
    width: 26px;
    float: left;
    text-align: center;
}
.textbox input{
    border: none;
    outline: none;
    background: none;
    color: rgb(12, 11, 11);
    font-size: 18px;
    width: 90px;
    float: left;
    margin: 10px;
}
.btn{
    width: 100%;
    background: none;
    border: 2px solid #4caf50;
    color: rgb(10, 10, 10);
    padding: 5px;
    font-size: 18px;
    cursor: pointer;
    margin: 12px 0;
}
</style>
</head>
<body>
<form action="LoginController" method="post">

<div class="login-box">
    <h1>Login</h1>
<div class="textbox">
    <i class="fa fa-user" aria-hidden="true"></i>
    <input type="text" placeholder="Username"  name="uname" value="">
</div>
<div class="textbox">
    <i class="fa fa-lock" aria-hidden="true"></i>
    <input type="password" placeholder="Password" name="password" value="">
</div>
<input  class="btn" type="submit" value="Login">

</div>
</form>

</body>
</html>