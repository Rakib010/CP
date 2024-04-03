//Web APIs -  Application Programming Interface

//Web Froms -> Validation API

function Validation(){
   const inputobj = document.getElementById('id1');

   if(inputobj.Validity.rangeOverflow){
      inputobj.setCustomValidity("range overflow error");
   }

   if(inputobj.checkValidity()){
      document.getElementById('demo').innerHTML =
      inputobj.ValidationMessaage;

   }
}

*** JavaScript Fetch API ***
** onno jayga theke data nie asha- like servar theke,api request kora

const display = document.getElementById("display");
 
// fatch call korle promise return kore  
function getData(){
   fetch("http://127.0.0.1:5500/JS-learning/data.txt")
   .then(res => res.text()) // text call korle text akare data pabo, r jodi JSON akare call kore JSON akare data pabo
   .then((data) =>{    
      display.innerText =  data;
   })
} 

const display = document.getElementById("display");

async function getData(){
  const res = await fetch("http://127.0.0.1:5500/JS-learning/data.txt");
  const data = await res.text();
   display.innerHTML = data;

}
