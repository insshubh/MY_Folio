const span = document.querySelectorAll('#common');
const body = document.querySelector('body');

span.forEach(function (eventon){
  eventon.addEventListener("mousemove", function (e){
    body.style.backgroundColor = eventon.className;
  })
  eventon.addEventListener("mouseout", function (e){
    body.style.backgroundColor = 'black';
  })
  
})

