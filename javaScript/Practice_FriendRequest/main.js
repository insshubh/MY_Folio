const btn = document.querySelector("button")
const statu = document.querySelector('h2')

btn.addEventListener('mousemove',function(){
   btn.style.background = "#f6cedc";
   btn.style.color = ""
})
btn.addEventListener('mouseout',function(){
   btn.style.background = "white";
   btn.style.color = "royalblue"
})
var flag = 0
btn.addEventListener('click',function(){
   if(flag==0)
   {
      btn.style.border = "2px solid green";
      btn.innerText = "Remove"
      statu.innerHTML = "Friend"
      flag = 1;
   }
   else{
      btn.style.border= " 2px solid red";
      btn.innerText = "ADD ME"
      statu.innerHTML = "Stranger"
      flag = 0;
   } 
})
