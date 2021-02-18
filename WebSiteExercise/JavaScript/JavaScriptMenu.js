/* Poner la anchura del menu desplegable a 250px al igual que su contenido */
function abrirMenu() {
  document.getElementById("MenuExtendible").style.width = "250px";
  document.getElementById("main").style.marginLeft = "250px";
  document.getElementById("main").style.opacity="0";
}



/* Poner la anchura del menu desplegable a 0 al igual que su contenido*/
function cerrarMenu() {
  document.getElementById("MenuExtendible").style.width = "0";
  document.getElementById("main").style.marginLeft = "0";
  document.getElementById("main").style.opacity="1";
} 

let num1=1;
let intervalo;
function siguiente(){
	num1++;
	if (num1>2){
		num1=1;
	}
	document.getElementById("anuncios").src="../Anuncios/anuncio"+num1+".jpg";
}

intervalo = setInterval(siguiente, 8000);

function cerrarAnuncio(){
	document.getElementById("anuncios").style.width = "0";
	document.getElementById("ocultarAnuncios").innerHTML="";
}

function error(){
	alert("Todavía no se puede enviar un correo lo sentimos");
}