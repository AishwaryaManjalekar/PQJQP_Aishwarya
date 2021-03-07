<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>GET YOUR JOB</title>
<link rel="shortcut icon" href="logo.jpg"/>
<style type="text/css">
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
            li{
    display: inline;
}
ul
{
    float: right;
    list-style-type: none;
}
ul li{
    display: inline-block;

}
ul li a{
    text-decoration: none;
    color:rgb(0, 0, 0);
    padding: 5px 20px;
    border: 1px solid #fff;
}
ul li a:hover{
    background-color:rgb(248, 251, 252);
}
.logo img
{
    float: left;
    width: 150px;
    height: auto;
}
.main{
    max-width: 1200px;
    margin: auto;
}
ul li.active a{
 background-color:rgb(248, 251, 252);
}
.title{
position:absolute;
top:50%;
left:50%;
transform:translate(-50%,-50%)}

.title h1{
    color:black;
    font-size: 70px;
}
        </style>
</head>
<body>
 <header>
            <div class="main">
            <div class="logo">
                    <img src="123.png">
                </div>
                
                <ul>
                    <li class="active"><a href="HOME.html" target="dispcontent">HOME </a></li>
                    <li><a href="ABOUTUS.jsp" target="dispcontent">ABOUTUS</a></li>
                    <li><a href="CONTACTUS.jsp" target="dispcontent">CONTACT US</a></li>
                    <li><a href="LOGIN.jsp" target="dispcontent">LOGIN</a></li>
                    <li><a href="REGISTER.jsp" target="dispcontent">REGISTER.</a></li>
                </ul>
            </div>
            <div class="title">
            <h1>JOB PORTAL</h1>
       
            </div>
        </header>
    </body>
</html>