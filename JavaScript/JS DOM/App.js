  // Traversing elements
 //parentNode
  let txt = document.querySelector(".text");
 console.log(txt.parentNode); 

 //childNodes[nodenumber], firstChild, lastChild
 let parent = document.querySelector(".title");
 console.log(parent.firstElementChild);
 console.log(parent.lastElementChild);
 console.log(parent.childNodes);

 //nextSibling, previousSibling
 let second = document.querySelector(".second");
 console.log(second.nextElementSibling);
 console.log(second.previousElementSibling); 
 
 // Manipulating Elements -> not using any html bcz create element js dia. 
  let div =  document.createElement("div");
  div.innerHTML = "<p>welcome</p>";
  document.body.appendChild(div); // show the web page that  way 
  div.id = "title" // create div  id name 
  div.className = "title" // create div  classname 
  console.log(div);

//appendChild(element)
 let menu = document.getElementById("menu");
 
 let list = document.createElement("li");
 list.innerHTML = "contact";
 menu.appendChild(list); 

 // textContent 

 let menuu = document.getElementById("menuu");
 console.log(menuu.textContent);
 console.log(menuu.innerText); // flow css & display visivul text only
 
 menuu.textContent = "Hello"; // change the html menuu 
 menuu.innerHTML = "<h1>Hello!</h1>";  // display hello h1 tag 
 

 // we can use after() method to insert one or more nodes after the element 

 //insertAdjacentHTML () method 
 let menuu = document.getElementById("menuu");
 // htlm li tag er first contactt display korbe bcz creat & add korsi li tag e 
 menuu.insertAdjacentElement("afterbegin","<li>contactt</li>")
 
 // replaceChild() method 
 // cloneNode() method
 //insertBefore() method
 //removeChild() method 
 let menuu = document.getElementById("menuu");
 menuu.removeChild(menuu.lastElementChild);  

 //Attribute methods

 let inputBox = document.getElementById("username");
 // read which type input 
 console.log(inputBox.getAttribute("type"));
 // add attribute firstparametar - name , second - value 
 console.log(inputBox.setAttribute("class","user"));
 //attribute name jodi thake tahole true ba false return korbe 
 console.log(inputBox.hasAttribute("class"));
 // remove any attribute 
 console.log(inputBox.removeAttribute("placeholder"));  

 //Manipulating Element's styles -> js die css sob kisu kora jay 

 let inputBoox = document.getElementById("username");
// console.log(inputBoox.style.backgroundColor); // output - red
 inputBoox.style.padding = "10px"
 console.log(inputBoox);

 inputBoox.style.cssText += "width:200px; height:100px;"
 console.log(inputBoox);
 // using this method we can read all propartis html element 
let inputBoox = document.getElementById("username");
console.log(window.getComputedStyle(inputBoox).fontSize);
console.log(window.getComputedStyle(inputBoox).background);
console.log(window.getComputedStyle(inputBoox).width);

//className properti 
let title = document.getElementById("title");
title.className = "new"; // change the class name 
console.log(title.className); 

//classList property
let title = document.getElementById("title");
title.classList.add("new");
title.classList.remove("message");
title.classList.replace("main", "newNew");
console.log(title);
console.log(title.classList.contains("message")); // class name jodi thake true else false hobe.

//toggle er kaj hocche jodi className message thake tahole remove kore dibe. na thakle add kore dibe
title.classList.toggle("message");


//Event

function displayMsg(){
  console.log("Button Clicked")
} 
// assign event handlar
let btn = document.getElementById("btn");
btn.onclick = function(){
  console.log("button clicked")
} 
// addEventListener(event, function) -> accept three argument (event, function, useCapture{by defult it's false})
// removeEventListener()

let btn = document.getElementById("btn");
btn.addEventListener('click', function(){
  console.log("Button Clicked!");
})

let btnn = document.getElementById("btn");
function displayMsg(){
  console.log("Button Clicked");
}
btn.addEventListener('click',displayMsg);
 
btn.removeEventListener('click',displayMsg);


