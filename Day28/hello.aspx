<script runat="server" language="C#">
   void doClick(object sender, EventArgs e) {
      MyLabel.Text = "Hello, world! (C# ASP.NET in action!)";
   }
</script>
<html>
   <head><title>Hello World C# ASP.NET App</title></head>
   <body>
      <P>C# Web application...</P>
      <form runat="server">
         <asp:button runat="server" text="Say Hello" 
            onclick="doClick" />
         <p>
         <asp:label runat="server" text="" id="MyLabel" />
      </form>
   </body>
</html>
