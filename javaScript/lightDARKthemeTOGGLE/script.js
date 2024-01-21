const buttons = document.querySelectorAll("button");
const area = document.querySelector(".colorArea");

buttons.forEach(button => {
  button.addEventListener("mouseover", () => {
    if (button.id === "lt") {
      area.style.backgroundColor = "blue";
    } else if (button.id === "dk") {
      area.style.backgroundColor = "black";
    }
  });

  button.addEventListener("mouseout", () => {
    area.style.backgroundColor = "white";
  });
});
