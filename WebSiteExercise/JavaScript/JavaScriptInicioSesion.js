function error(){
	alert("Atención esta página está bajo mantenimiento");
}

var botonVolver = document.getElementById('botonVolver');

botonVolver.addEventListener("click", volver);

function volver(){
	window.history.back();
}