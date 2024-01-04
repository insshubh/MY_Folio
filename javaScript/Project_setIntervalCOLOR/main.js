function generateRandomColor() {
    // Generate a random hexadecimal color code
    return Math.floor(Math.random() * 16777215).toString(16);
}

// Example usage:

const start = document.getElementById('startBtn');
const stop = document.getElementById('stopBtn');
let reference;
start.addEventListener('click',function(){
    document.body.style.background = "none"
    if(!reference){
    reference = setInterval(ref,1000)
    }
    function ref(){
        const colorName = document.querySelector('h1');
        let randomColor = generateRandomColor();
        document.body.style.backgroundColor = "#" + randomColor;
        document.querySelector('h1').innerHTML = `${randomColor}`;

        
    }
    
})
stop.addEventListener('click', function () {
    // Clear the interval only if it is defined
    if (reference) {
        clearInterval(reference);
        reference = null; // Reset the reference to allow starting a new interval
        document.body.style.backgroundColor = "#010610";
    }
});


