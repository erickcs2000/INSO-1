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


//Lacon
function ingredientesLacon(){
	document.getElementById("ingredientesYDatosLacon").innerHTML="<p>Esta receta es de lo más típico en Galicia.</p><p><b>Contiene:</b><ul><li>1 “lacón galego” salado de 2 Kg</li><li>2 manojos de grelos frescos</li><li>4 chorizos frescos</li><li>8 patatas gallegas tipo cachelo</li><li>100 ml de aceite de oliva virgen extra</li></ul></p>";
	document.getElementById("ingredientesYDatosLacon").style.backgroundColor="#F3C59A";
}
function fueraIngredientesLacon(){
	document.getElementById("ingredientesYDatosLacon").innerHTML="";
	document.getElementById("ingredientesYDatosLacon").style.backgroundColor="";
}
//Percebes
function ingredientesPercebes(){
	document.getElementById("ingredientesYDatosPercebes").innerHTML="<p>Esta receta es de lo más típico en Galicia.</p><p><b>Contiene:</b><ul><li>Percebes</li><li>Sal</li><li>Agua</li></ul></p>";
	document.getElementById("ingredientesYDatosPercebes").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPercebes(){
	document.getElementById("ingredientesYDatosPercebes").innerHTML="";
	document.getElementById("ingredientesYDatosPercebes").style.backgroundColor="";
}
//Pulpo
function ingredientesPulpo(){
	document.getElementById("ingredientesYDatosPulpo").innerHTML="<p>Esta receta es de lo más típico en Galicia.</p><p><b>Contiene:</b><ul><li>1 pulpo de 2 a 3 kg</li><li>1 kg de patatas gallegas</li><li>Sal gruesa</li><li>Pimentón dulce o picante (o mixto, depende del gusto de cada uno)</li><li>Aceite de oliva virgen extra</li></ul></p>";
	document.getElementById("ingredientesYDatosPulpo").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPulpo(){
	document.getElementById("ingredientesYDatosPulpo").innerHTML="";
	document.getElementById("ingredientesYDatosPulpo").style.backgroundColor="";
}
//Empanada
function ingredientesEmpanada(){
	document.getElementById("ingredientesYDatosEmpanada").innerHTML="<p>Esta receta es de lo más típico en Galicia.</p><p><b>Contiene:</b><ul><li>2 masas para empanada</li><li>3 cebollas</li><li>1 huevo</li><li>sal</li><li>32 zamburiñas</li><li>1 pimiento rojo</li></ul></p>";
	document.getElementById("ingredientesYDatosEmpanada").style.backgroundColor="#F3C59A";
}
function fueraIngredientesEmpanada(){
	document.getElementById("ingredientesYDatosEmpanada").innerHTML="";
	document.getElementById("ingredientesYDatosEmpanada").style.backgroundColor="";
}
//Brazo de gitano
function ingredientesBrazoDeGitano(){
	document.getElementById("ingredientesYDatosBrazoDeGitano").innerHTML="<p>Esta receta es de lo más típico en Galicia.</p><p><b>Contiene:</b><ul><li>110g de harina</li><li>110g de azuúcar</li><li>110g de dulce de leche</li><li>Azúcar glas</li><li>Mantequilla</li></ul></p>";
	document.getElementById("ingredientesYDatosBrazoDeGitano").style.backgroundColor="#F3C59A";
}
function fueraIngredientesBrazoDeGitano(){
	document.getElementById("ingredientesYDatosBrazoDeGitano").innerHTML="";
	document.getElementById("ingredientesYDatosBrazoDeGitano").style.backgroundColor="";
}
//Tarta de santiago
function ingredientesTartaDeSantiago(){
	document.getElementById("ingredientesYDatosTartaDeSantiago").innerHTML="<p>Esta receta es de lo más típico en Galicia.</p><p><b>Contiene:</b><ul><li>230 gr de almendras molidas</li><li>4 huevos</li><li>230 gr de azúcar blanco</li><li>Ralladura de la piel de 1/2 limón</li><li>1 cucharadita de postre de canela molida</li><li>Azúcar glas para decorar</li></ul></p>";
	document.getElementById("ingredientesYDatosTartaDeSantiago").style.backgroundColor="#F3C59A";
}
function fueraIngredientesTartaDeSantiago(){
	document.getElementById("ingredientesYDatosTartaDeSantiago").innerHTML="";
	document.getElementById("ingredientesYDatosTartaDeSantiago").style.backgroundColor="";
}
//Pimientos de padron
function ingredientesPimientosDePadron(){
	document.getElementById("ingredientesYDatosPimientosDePadron").innerHTML="<p>Esta receta es de lo más típico en Galicia.</p><p><b>Contiene:</b><ul><li>300 gr de pimientos de padrón</li><li>Aceite de oliva</li><li>Sal</li></ul></p>";
	document.getElementById("ingredientesYDatosPimientosDePadron").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPimientosDePadron(){
	document.getElementById("ingredientesYDatosPimientosDePadron").innerHTML="";
	document.getElementById("ingredientesYDatosPimientosDePadron").style.backgroundColor="";
}
//Pastel de cabracho
function ingredientesPastelDeCabracho(){
	document.getElementById("ingredientesYDatosPastelDeCabracho").innerHTML="<p>Esta receta es de lo más típico en Asturias.</p><p><b>Contiene:</b><ul><li>1 zanahoria</li><li>1 puerro</li><li>1 cebolla</li><li>8 huevos</li><li>200gr de salsa de tomate</li><li>300ml de nata</li></ul></p>";
	document.getElementById("ingredientesYDatosPastelDeCabracho").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPastelDeCabracho(){
	document.getElementById("ingredientesYDatosPastelDeCabracho").innerHTML="";
	document.getElementById("ingredientesYDatosPastelDeCabracho").style.backgroundColor="";
}
//Chorizo a la sidra
function ingredientesChorizoALaSidra(){
	document.getElementById("ingredientesYDatosChorizoALaSidra").innerHTML="<p>Esta receta es de lo más típico en Asturias.</p><p><b>Contiene:</b><ul><li>350gr de chorizo</li><li>750 ml de sidra Asturiana</li><li>2 hojas de laurel</li></ul></p>";
	document.getElementById("ingredientesYDatosChorizoALaSidra").style.backgroundColor="#F3C59A";
}
function fueraIngredientesChorizoALaSidra(){
	document.getElementById("ingredientesYDatosChorizoALaSidra").innerHTML="";
	document.getElementById("ingredientesYDatosChorizoALaSidra").style.backgroundColor="";
}
//Fabada asturiana
function ingredientesFabadaAsturiana(){
	document.getElementById("ingredientesYDatosFabadaAsturiana").innerHTML="<p>Esta receta es de lo más típico en Asturias.</p><p><b>Contiene:</b><ul><li>400gr de fabes</li><li>200gr de panceta</li><li>2 chorizos asturianos</li><li>2 morcillas asturianas</li></ul></p>";
	document.getElementById("ingredientesYDatosFabadaAsturiana").style.backgroundColor="#F3C59A";
}
function fueraIngredientesFabadaAsturiana(){
	document.getElementById("ingredientesYDatosFabadaAsturiana").innerHTML="";
	document.getElementById("ingredientesYDatosFabadaAsturiana").style.backgroundColor="";
}
//Cachopo
function ingredientesCachopo(){
	document.getElementById("ingredientesYDatosCachopo").innerHTML="<p>Esta receta es de lo más típico en Asturias.</p><p><b>Contiene:</b><ul><li>2 filetes grades</li><li>4 lonchas de jamón serrano</li><li>Queso cabrales</li><li>Harina</li><li>Huevos</li><li>Pan rallado</li></ul></p>";
	document.getElementById("ingredientesYDatosCachopo").style.backgroundColor="#F3C59A";
}
function fueraIngredientesCachopo(){
	document.getElementById("ingredientesYDatosCachopo").innerHTML="";
	document.getElementById("ingredientesYDatosCachopo").style.backgroundColor="";
}
//Pitu Caleya
function ingredientesPiutoCaleya(){
	document.getElementById("ingredientesYDatosPiutoCaleya").innerHTML="<p>Esta receta es de lo más típico en Asturias.</p><p><b>Contiene:</b><ul><li>1 Pitu caleya</li><li>5 cebollas</li><li>6 dientes de ajo</li><li>200 ml de Jerez</li><li>Aceite de oliva</li><li>Agua</li></ul></p>";
	document.getElementById("ingredientesYDatosPiutoCaleya").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPiutoCaleya(){
	document.getElementById("ingredientesYDatosPiutoCaleya").innerHTML="";
	document.getElementById("ingredientesYDatosPiutoCaleya").style.backgroundColor="";
}
//Arroz con leche
function ingredientesArrozConLeche(){
	document.getElementById("ingredientesYDatosArrozConLeche").innerHTML="<p>Esta receta es de lo más típico en Asturias.</p><p><b>Contiene:</b><ul><li>1l de leche</li><li>70gr de azúcar</li><li>100gr de arroz</li><li>2 trozos de corteza de limón</li><li>1 rama de canela</li><li>Canela en polvo</li></ul></p>";
	document.getElementById("ingredientesYDatosArrozConLeche").style.backgroundColor="#F3C59A";
}
function fueraIngredientesArrozConLeche(){
	document.getElementById("ingredientesYDatosArrozConLeche").innerHTML="";
	document.getElementById("ingredientesYDatosArrozConLeche").style.backgroundColor="";
}
//Moscovitas
function ingredientesMoscovitas(){
	document.getElementById("ingredientesYDatosMoscovitas").innerHTML="<p>Esta receta es de lo más típico en Asturias.</p><p><b>Contiene:</b><ul><li>100gr de almendra granulada</li><li>100gr de azúcar glas</li><li>100ml de nata para montar</li><li>20gr de harina</li><li>75gr de chocolate para fundir</li></ul></p>";
	document.getElementById("ingredientesYDatosMoscovitas").style.backgroundColor="#F3C59A";
}
function fueraIngredientesMoscovitas(){
	document.getElementById("ingredientesYDatosMoscovitas").innerHTML="";
	document.getElementById("ingredientesYDatosMoscovitas").style.backgroundColor="";
}
//Anchoas de Santoña
function ingredientesAnchoasDeSantoña(){
	document.getElementById("ingredientesYDatosAnchoasDeSantoña").innerHTML="<p>Esta receta es de lo más típico en Cantabria.</p><p><b>Contiene:</b><ul><li>Anchoas</li><li>Aceite de oliva</li><li>Diente de ajo</li><li>Perejil</li></ul></p>";
	document.getElementById("ingredientesYDatosAnchoasDeSantoña").style.backgroundColor="#F3C59A";
}
function fueraIngredientesAnchoasDeSantoña(){
	document.getElementById("ingredientesYDatosAnchoasDeSantoña").innerHTML="";
	document.getElementById("ingredientesYDatosAnchoasDeSantoña").style.backgroundColor="";
}
//Anchoas de Cocido Lebaniego
function ingredientesCocidoLebaniego(){
	document.getElementById("ingredientesYDatosCocidoLebaniego").innerHTML="<p>Esta receta es de lo más típico en Cantabria.</p><p><b>Contiene:</b><ul><li>250gr de garbanzos</li><li>4 costillas de cerdo adobadas</li><li>150gr de chorizo lebaniego</li><li>3 huevos</li><li>1 morcilla de arroz</li><li>1/2 repollo</li><li>Aceite de oliva</li></ul></p>";
	document.getElementById("ingredientesYDatosCocidoLebaniego").style.backgroundColor="#F3C59A";
}
function fueraIngredientesCocidoLebaniego(){
	document.getElementById("ingredientesYDatosCocidoLebaniego").innerHTML="";
	document.getElementById("ingredientesYDatosCocidoLebaniego").style.backgroundColor="";
}
//Solomillo de ternera al queso de tresviso
function ingredientesSolomilloDeTernera(){
	document.getElementById("ingredientesYDatosSolomilloDeTernera").innerHTML="<p>Esta receta es de lo más típico en Cantabria.</p><p><b>Contiene:</b><ul><li>Solomillo de ternera</li><li>300gr de queso Tresviso</li><li>1 vaso de nata líquida</li><li>50gr de mantequilla</li><li>Sal</li></ul></p>";
	document.getElementById("ingredientesYDatosSolomilloDeTernera").style.backgroundColor="#F3C59A";
}
function fueraIngredientesSolomilloDeTernera(){
	document.getElementById("ingredientesYDatosSolomilloDeTernera").innerHTML="";
	document.getElementById("ingredientesYDatosSolomilloDeTernera").style.backgroundColor="";
}
//Rabas
function ingredientesRabas(){
	document.getElementById("ingredientesYDatosRabas").innerHTML="<p>Esta receta es de lo más típico en Cantabria.</p><p><b>Contiene:</b><ul><li>Rabas</li><li>1/2l de leche</li><li>4cucharadas de harina</li><li>100ml de agua</li><li>Sal</li></ul></p>";
	document.getElementById("ingredientesYDatosRabas").style.backgroundColor="#F3C59A";
}
function fueraIngredientesRabas(){
	document.getElementById("ingredientesYDatosRabas").innerHTML="";
	document.getElementById("ingredientesYDatosRabas").style.backgroundColor="";
}
//Marmitako de atún
function ingredientesMarmitaDeAtun(){
	document.getElementById("ingredientesYDatosMarmitaDeAtun").innerHTML="<p>Esta receta es de lo más típico en Cantabria.</p><p><b>Contiene:</b><ul><li>1/2 cebolla</li><li>2 dientes de ajo</li><li>1 tomate</li><li>3 patatas medianas</li><li>150ml de vino blanco</li><li>400gr de Atún fresco</li><li>Aceite de oliva</li></ul></p>";
	document.getElementById("ingredientesYDatosMarmitaDeAtun").style.backgroundColor="#F3C59A";
}
function fueraIngredientesMarmitaDeAtun(){
	document.getElementById("ingredientesYDatosMarmitaDeAtun").innerHTML="";
	document.getElementById("ingredientesYDatosMarmitaDeAtun").style.backgroundColor="";
}
//Merluza en salsa verde
function ingredientesMerluzaEnSalsaVerde(){
	document.getElementById("ingredientesYDatosMerluzaEnSalsaVerde").innerHTML="<p>Esta receta es de lo más típico en Cantabria.</p><p><b>Contiene:</b><ul><li>200gr de merluza</li><li>1 diente de ajo</li><li>Aceite de oliva</li><li>4 almejas</li><li>Perejil</li><li>Harina</li></ul></p>";
	document.getElementById("ingredientesYDatosMerluzaEnSalsaVerde").style.backgroundColor="#F3C59A";
}
function fueraIngredientesMerluzaEnSalsaVerde(){
	document.getElementById("ingredientesYDatosMerluzaEnSalsaVerde").innerHTML="";
	document.getElementById("ingredientesYDatosMerluzaEnSalsaVerde").style.backgroundColor="";
}
//Polkas de Torrelavega
function ingredientesPolkasDeTorrelavega(){
	document.getElementById("ingredientesYDatosPolkasDeTorrelavega").innerHTML="<p>Esta receta es de lo más típico en Cantabria.</p><p><b>Contiene:</b><ul><li>2 laminas de hojaldre</li><li>100gr de azúcar glas</li><li>1 clara de huevo</li><li>3 gotas de zumo de limón</li></ul></p>";
	document.getElementById("ingredientesYDatosPolkasDeTorrelavega").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPolkasDeTorrelavega(){
	document.getElementById("ingredientesYDatosPolkasDeTorrelavega").innerHTML="";
	document.getElementById("ingredientesYDatosPolkasDeTorrelavega").style.backgroundColor="";
}
//Pintxos
function ingredientesPintxos(){
	document.getElementById("ingredientesYDatosPintxos").innerHTML="<p>Esta receta es de lo más típico en el País Vasco.</p><p><b>Contiene:</b><ul><li>De todo</li></ul></p>";
	document.getElementById("ingredientesYDatosPintxos").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPintxos(){
	document.getElementById("ingredientesYDatosPintxos").innerHTML="";
	document.getElementById("ingredientesYDatosPintxos").style.backgroundColor="";
}
//Gildas
function ingredientesGildas(){
	document.getElementById("ingredientesYDatosGildas").innerHTML="<p>Esta receta es de lo más típico en el País Vasco.</p><p><b>Contiene:</b><ul><li>3 guindillas</li><li>3 anchoas</li><li>6 aceitunas verdes sin hueso</li><li>Aceite de oliva</li></ul></p>";
	document.getElementById("ingredientesYDatosGildas").style.backgroundColor="#F3C59A";
}
function fueraIngredientesGildas(){
	document.getElementById("ingredientesYDatosGildas").innerHTML="";
	document.getElementById("ingredientesYDatosGildas").style.backgroundColor="";
}
//Aluvia
function ingredientesAluvia(){
	document.getElementById("ingredientesYDatosAluvia").innerHTML="<p>Esta receta es de lo más típico en el País Vasco.</p><p><b>Contiene:</b><ul><li>300gr de Alubia de Tolosa</li><li>200gr de costilla de cerdo</li><li>100gr de tocino</li><li>150gr de chorizo</li><li>1 pimiento verde</li><li>Guindillas</li></ul></p>";
	document.getElementById("ingredientesYDatosAluvia").style.backgroundColor="#F3C59A";
}
function fueraIngredientesAluvia(){
	document.getElementById("ingredientesYDatosAluvia").innerHTML="";
	document.getElementById("ingredientesYDatosAluvia").style.backgroundColor="";
}
//Bonito del Norte
function ingredientesBonitoDelNorte(){
	document.getElementById("ingredientesYDatosBonitoDelNorte").innerHTML="<p>Esta receta es de lo más típico en el País Vasco.</p><p><b>Contiene:</b><ul><li>Bonito</li><li>4 pimientos choriceros</li><li>2 cebollas</li><li>3 tomates</li><li>Aceite de oliva</li><li>2 dientes de ajo</li></ul></p>";
	document.getElementById("ingredientesYDatosBonitoDelNorte").style.backgroundColor="#F3C59A";
}
function fueraIngredientesBonitoDelNorte(){
	document.getElementById("ingredientesYDatosBonitoDelNorte").innerHTML="";
	document.getElementById("ingredientesYDatosBonitoDelNorte").style.backgroundColor="";
}
//Angulas
function ingredientesAngulas(){
	document.getElementById("ingredientesYDatosAngulas").innerHTML="<p>Esta receta es de lo más típico en el País Vasco.</p><p><b>Contiene:</b><ul><li>200gr de Gulas</li><li>2 dientes de ajo</li><li>Cayena</li><li>Aceite de oliva</li><li>Huevos de codorniz</li></ul></p>";
	document.getElementById("ingredientesYDatosAngulas").style.backgroundColor="#F3C59A";
}
function fueraIngredientesAngulas(){
	document.getElementById("ingredientesYDatosAngulas").innerHTML="";
	document.getElementById("ingredientesYDatosAngulas").style.backgroundColor="";
}
//Bacalao en salsa vizaina
function ingredientesBacalaoEnSalsaVizcaina(){
	document.getElementById("ingredientesYDatosBacalaoEnSalsaVizcaina").innerHTML="<p>Esta receta es de lo más típico en el País Vasco.</p><p><b>Contiene:</b><ul><li>Bacalao</li><li>1 cebolla roja y blanca</li><li>2 dientes de ajo</li><li>Aceite de oliva</li><li>500ml de caldo de pescado</li></ul></p>";
	document.getElementById("ingredientesYDatosBacalaoEnSalsaVizcaina").style.backgroundColor="#F3C59A";
}
function fueraIngredientesBacalaoEnSalsaVizcaina(){
	document.getElementById("ingredientesYDatosBacalaoEnSalsaVizcaina").innerHTML="";
	document.getElementById("ingredientesYDatosBacalaoEnSalsaVizcaina").style.backgroundColor="";
}
//Kokotxas De Merluza Al Pil Pil
function ingredientesKokotxasDeMerluzaAlPilPil(){
	document.getElementById("ingredientesYDatosKokotxasDeMerluzaAlPilPil").innerHTML="<p>Esta receta es de lo más típico en el País Vasco.</p><p><b>Contiene:</b><ul><li>3 tacos de merluza</li><li>125gr de cocochas de merluza</li><li>10gr de ajo picado</li><li>300ml de aceite de oliva</li><li>Sal</li></ul></p>";
	document.getElementById("ingredientesYDatosKokotxasDeMerluzaAlPilPil").style.backgroundColor="#F3C59A";
}
function fueraIngredientesKokotxasDeMerluzaAlPilPil(){
	document.getElementById("ingredientesYDatosKokotxasDeMerluzaAlPilPil").innerHTML="";
	document.getElementById("ingredientesYDatosKokotxasDeMerluzaAlPilPil").style.backgroundColor="";
}
//Esparragos
function ingredientesEsparragos(){
	document.getElementById("ingredientesYDatosEsparragos").innerHTML="<p>Esta receta es de lo más típico en Navarra.</p><p><b>Contiene:</b><ul><li>1/2Kg de esparragos blancos</li><li>1 trozo de chistorra</li><li>1 punta de jamón serrano</li><li>Huevos</li><li>3 ajos</li></ul></p>";
	document.getElementById("ingredientesYDatosEsparragos").style.backgroundColor="#F3C59A";
}
function fueraIngredientesEsparragos(){
	document.getElementById("ingredientesYDatosEsparragos").innerHTML="";
	document.getElementById("ingredientesYDatosEsparragos").style.backgroundColor="";
}
//Pochas con chistorra
function ingredientesPochasConChistorra(){
	document.getElementById("ingredientesYDatosPochasConChistorra").innerHTML="<p>Esta receta es de lo más típico en Navarra.</p><p><b>Contiene:</b><ul><li>600gr de pochas</li><li>2 cebolletas</li><li>1 cabeza de ajo</li><li>4 chorizos</li><li>1 pimiento rojo</li><li>1 tomate</li></ul></p>";
	document.getElementById("ingredientesYDatosPochasConChistorra").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPochasConChistorra(){
	document.getElementById("ingredientesYDatosPochasConChistorra").innerHTML="";
	document.getElementById("ingredientesYDatosPochasConChistorra").style.backgroundColor="";
}
//Estofado de rabo de toro
function ingredientesEstofadoDeRaboDeToro(){
	document.getElementById("ingredientesYDatosEstofadoDeRaboDeToro").innerHTML="<p>Esta receta es de lo más típico en Navarra.</p><p><b>Contiene:</b><ul><li>800gr de carne de ternera para guisar</li><li>2 patatas</li><li>3 zanahorias</li><li>200ml de vino tinto</li><li>2 dientes de ajo</li></ul></p>";
	document.getElementById("ingredientesYDatosEstofadoDeRaboDeToro").style.backgroundColor="#F3C59A";
}
function fueraIngredientesEstofadoDeRaboDeToro(){
	document.getElementById("ingredientesYDatosEstofadoDeRaboDeToro").innerHTML="";
	document.getElementById("ingredientesYDatosEstofadoDeRaboDeToro").style.backgroundColor="";
}
//Pimientos rellenos de bacalao
function ingredientesPimientosRellenosDeBacalao(){
	document.getElementById("ingredientesYDatosPimientosRellenosDeBacalao").innerHTML="<p>Esta receta es de lo más típico en Navarra.</p><p><b>Contiene:</b><ul><li>Bacalao</li><li>Pimientos de piquillo</li><li>Zanahorias</li><li>Cebolla</li><li>Pan tostado</li><li>Vino</li><li>3 vasos de agua</li></ul></p>";
	document.getElementById("ingredientesYDatosPimientosRellenosDeBacalao").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPimientosRellenosDeBacalao(){
	document.getElementById("ingredientesYDatosPimientosRellenosDeBacalao").innerHTML="";
	document.getElementById("ingredientesYDatosPimientosRellenosDeBacalao").style.backgroundColor="";
}
//Alcachofas con almejas
function ingredientesAlcachofasConAlmejas(){
	document.getElementById("ingredientesYDatosAlcachofasConAlmejas").innerHTML="<p>Esta receta es de lo más típico en Navarra.</p><p><b>Contiene:</b><ul><li>2 pencas de cardo</li><li>125gr de almejas</li><li>25gr de almendras</li><li>2 alcachofas</li><li>3 dientes de ajo</li></ul></p>";
	document.getElementById("ingredientesYDatosAlcachofasConAlmejas").style.backgroundColor="#F3C59A";
}
function fueraIngredientesAlcachofasConAlmejas(){
	document.getElementById("ingredientesYDatosAlcachofasConAlmejas").innerHTML="";
	document.getElementById("ingredientesYDatosAlcachofasConAlmejas").style.backgroundColor="";
}
//Trucha a la navarra
function ingredientesTruchaALaNavarra(){
	document.getElementById("ingredientesYDatosTruchaALaNavarra").innerHTML="<p>Esta receta es de lo más típico en Navarra.</p><p><b>Contiene:</b><ul><li>2 truchas</li><li>4 lonchas de jamon ibérico</li><li>200gr de patatas</li><li>6 dientes de ajo</li><li>Vinagre de vino blanco</li></ul></p>";
	document.getElementById("ingredientesYDatosTruchaALaNavarra").style.backgroundColor="#F3C59A";
}
function fueraIngredientesTruchaALaNavarra(){
	document.getElementById("ingredientesYDatosTruchaALaNavarra").innerHTML="";
	document.getElementById("ingredientesYDatosTruchaALaNavarra").style.backgroundColor="";
}
//Leche frita
function ingredientesLecheFrita(){
	document.getElementById("ingredientesYDatosLecheFrita").innerHTML="<p>Esta receta es de lo más típico en Navarra.</p><p><b>Contiene:</b><ul><li>500ml de leche</li><li>60gr de harina</li><li>75gr de azúcar</li><li>2 yemas de huevo</li><li>1 rama de canela</li></ul></p>";
	document.getElementById("ingredientesYDatosLecheFrita").style.backgroundColor="#F3C59A";
}
function fueraIngredientesLecheFrita(){
	document.getElementById("ingredientesYDatosLecheFrita").innerHTML="";
	document.getElementById("ingredientesYDatosLecheFrita").style.backgroundColor="";
}
//Cuajada
function ingredientesCuajada(){
	document.getElementById("ingredientesYDatosCuajada").innerHTML="<p>Esta receta es de lo más típico en Navarra.</p><p><b>Contiene:</b><ul><li>Leche fresca de oveja</li><li>Cuajo</li><li>1 cucharita de azúcar</li></ul></p>";
	document.getElementById("ingredientesYDatosCuajada").style.backgroundColor="#F3C59A";
}
function fueraIngredientesCuajada(){
	document.getElementById("ingredientesYDatosCuajada").innerHTML="";
	document.getElementById("ingredientesYDatosCuajada").style.backgroundColor="";
}
//Migas aragonesas
function ingredientesMigasAragonesas(){
	document.getElementById("ingredientesYDatosMigasAragonesas").innerHTML="<p>Esta receta es de lo más típico en Aragón.</p><p><b>Contiene:</b><ul><li>250gr de migas</li><li>150ml de aceite de oliva</li><li>3 dientes de ajo</li><li>4 huevos</li><li>75gr de chorizo</li><li>1 racimo de uva</li></ul></p>";
	document.getElementById("ingredientesYDatosMigasAragonesas").style.backgroundColor="#F3C59A";
}
function fueraIngredientesMigasAragonesas(){
	document.getElementById("ingredientesYDatosMigasAragonesas").innerHTML="";
	document.getElementById("ingredientesYDatosMigasAragonesas").style.backgroundColor="";
}
//Paletilla asada
function ingredientesPaletillaAsada(){
	document.getElementById("ingredientesYDatosPaletillaAsada").innerHTML="<p>Esta receta es de lo más típico en Aragón.</p><p><b>Contiene:</b><ul><li>1 paletilla de cordero</li><li>3 patatas</li><li>1 cebolla</li><li>2 cabezas de ajo</li><li>1 vaso de aceite de oliva y agua</li></ul></p>";
	document.getElementById("ingredientesYDatosPaletillaAsada").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPaletillaAsada(){
	document.getElementById("ingredientesYDatosPaletillaAsada").innerHTML="";
	document.getElementById("ingredientesYDatosPaletillaAsada").style.backgroundColor="";
}
//Asado de Ternasco
function ingredientesAsadoDeTernasco(){
	document.getElementById("ingredientesYDatosAsadoDeTernasco").innerHTML="<p>Esta receta es de lo más típico en Aragón.</p><p><b>Contiene:</b><ul><li>2 paletillas de Ternasco</li><li>1 cabeza de ajo</li><li>4 patatas</li><li>Romero</li><li>Zumo de limón</li><li>Aceite de oliva</li><li>Perejil</li></ul></p>";
	document.getElementById("ingredientesYDatosAsadoDeTernasco").style.backgroundColor="#F3C59A";
}
function fueraIngredientesAsadoDeTernasco(){
	document.getElementById("ingredientesYDatosAsadoDeTernasco").innerHTML="";
	document.getElementById("ingredientesYDatosAsadoDeTernasco").style.backgroundColor="";
}
//Pollo al chilindron
function ingredientesPolloAlChilindron(){
	document.getElementById("ingredientesYDatosPolloAlChilindron").innerHTML="<p>Esta receta es de lo más típico en Aragón.</p><p><b>Contiene:</b><ul><li>1,5kg de pollo</li><li>1 pimiento rojo</li><li>2 tomates</li><li>125ml de vino blanco</li><li>1 pimiento verde</li><li>250ml de caldo de ave</li></ul></p>";
	document.getElementById("ingredientesYDatosPolloAlChilindron").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPolloAlChilindron(){
	document.getElementById("ingredientesYDatosPolloAlChilindron").innerHTML="";
	document.getElementById("ingredientesYDatosPolloAlChilindron").style.backgroundColor="";
}
//Magra con tomate
function ingredientesMagraConTomate(){
	document.getElementById("ingredientesYDatosMagraConTomate").innerHTML="<p>Esta receta es de lo más típico en Aragón.</p><p><b>Contiene:</b><ul><li>300gr de cabecero de lomo en dados</li><li>300gr de tomate triturado</li><li>2 cebollas</li><li>1 hoja de laurel</li><li>75ml de aceite de oliva</li><li>75ml de vino balnco seco</li></ul></p>";
	document.getElementById("ingredientesYDatosMagraConTomate").style.backgroundColor="#F3C59A";
}
function fueraIngredientesMagraConTomate(){
	document.getElementById("ingredientesYDatosMagraConTomate").innerHTML="";
	document.getElementById("ingredientesYDatosMagraConTomate").style.backgroundColor="";
}
//Guirlache
function ingredientesGuirlache(){
	document.getElementById("ingredientesYDatosGuirlache").innerHTML="<p>Esta receta es de lo más típico en Aragón.</p><p><b>Contiene:</b><ul><li>200gr de azúcar</li><li>1 cucharadita de zumo de limón</li><li>50gr de miel</li><li>200gr de almendra cruda</li></ul></p>";
	document.getElementById("ingredientesYDatosGuirlache").style.backgroundColor="#F3C59A";
}
function fueraIngredientesGuirlache(){
	document.getElementById("ingredientesYDatosGuirlache").innerHTML="";
	document.getElementById("ingredientesYDatosGuirlache").style.backgroundColor="";
}
//Frutas de Aragón
function ingredientesFrutasDeAragon(){
	document.getElementById("ingredientesYDatosFrutasDeAragon").innerHTML="<p>Esta receta es de lo más típico en Aragón.</p><p><b>Contiene:</b><ul><li>Cualquier tipo de fruta</li><li>Azúcar</li><li>Agua</li><li>Chocolate</li></ul></p>";
	document.getElementById("ingredientesYDatosFrutasDeAragon").style.backgroundColor="#F3C59A";
}
function fueraIngredientesFrutasDeAragon(){
	document.getElementById("ingredientesYDatosFrutasDeAragon").innerHTML="";
	document.getElementById("ingredientesYDatosFrutasDeAragon").style.backgroundColor="";
}
//Pan tumaca
function ingredientesPanTumaca(){
	document.getElementById("ingredientesYDatosPanTumaca").innerHTML="<p>Esta receta es de lo más típico en Cataluña.</p><p><b>Contiene:</b><ul><li>1 tomate muy maduro</li><li>Aceite de oliva</li><li>Sal</li></ul></p>";
	document.getElementById("ingredientesYDatosPanTumaca").style.backgroundColor="#F3C59A";
}
function fueraIngredientesPanTumaca(){
	document.getElementById("ingredientesYDatosPanTumaca").innerHTML="";
	document.getElementById("ingredientesYDatosPanTumaca").style.backgroundColor="";
}
//Bikini
function ingredientesBikini(){
	document.getElementById("ingredientesYDatosBikini").innerHTML="<p>Esta receta es de lo más típico en Cataluña.</p><p><b>Contiene:</b><ul><li>2 rebanadas de pan de molde</li><li>Mantequilla</li><li>Queso para fundir</li><li>Jamón york</li></ul></p>";
	document.getElementById("ingredientesYDatosBikini").style.backgroundColor="#F3C59A";
}
function fueraIngredientesBikini(){
	document.getElementById("ingredientesYDatosBikini").innerHTML="";
	document.getElementById("ingredientesYDatosBikini").style.backgroundColor="";
}
//Calçots con salsa
function ingredientesCalçpotsConSalsa(){
	document.getElementById("ingredientesYDatosCalçpotsConSalsa").innerHTML="<p>Esta receta es de lo más típico en Cataluña.</p><p><b>Contiene:</b><ul><li>Avellanas tostadas</li><li>Almendras tostadas</li><li>Aceite de oliva</li><li>Tomates maduros</li><li>Ñoras</li><li>Vinagre</li><li>Pan tostado</li></ul></p>";
	document.getElementById("ingredientesYDatosCalçpotsConSalsa").style.backgroundColor="#F3C59A";
}
function fueraIngredientesCalçpotsConSalsa(){
	document.getElementById("ingredientesYDatosCalçpotsConSalsa").innerHTML="";
	document.getElementById("ingredientesYDatosCalçpotsConSalsa").style.backgroundColor="";
}
//Escalivada
function ingredientesEscalivada(){
	document.getElementById("ingredientesYDatosEscalivada").innerHTML="<p>Esta receta es de lo más típico en Cataluña.</p><p><b>Contiene:</b><ul><li>1/2 berenjena</li><li>1/2 cebolla morada</li><li>1/2 pimiento rojo</li><li>Aceite de oliva</li><li>Sal</li></ul></p>";
	document.getElementById("ingredientesYDatosEscalivada").style.backgroundColor="#F3C59A";
}
function fueraIngredientesEscalivada(){
	document.getElementById("ingredientesYDatosEscalivada").innerHTML="";
	document.getElementById("ingredientesYDatosEscalivada").style.backgroundColor="";
}//Escargots
function ingredientesEscargots(){
	document.getElementById("ingredientesYDatosEscargots").innerHTML="<p>Esta receta es de lo más típico en Cataluña.</p><p><b>Contiene:</b><ul><li>Mantequilla</li><li>1 cucharada de vino blanco</li><li>3 dientes de ajo</li><li>1 lata de caracoles</li><li>1 nuez moscada</li><li>1 barra de pan</li></ul></p>";
	document.getElementById("ingredientesYDatosEscargots").style.backgroundColor="#F3C59A";
}
function fueraIngredientesEscargots(){
	document.getElementById("ingredientesYDatosEscargots").innerHTML="";
	document.getElementById("ingredientesYDatosEscargots").style.backgroundColor="";
}
//Butifarra con mongetes
function ingredientesButifarraConMongetes(){
	document.getElementById("ingredientesYDatosButifarraConMongetes").innerHTML="<p>Esta receta es de lo más típico en Cataluña.</p><p><b>Contiene:</b><ul><li>500 de alubias blancas o del ganxet</li><li>4 butifarras</li><li>Aceite</li><li>2 dientes de ajos</li><li>Sal</li></ul></p>";
	document.getElementById("ingredientesYDatosButifarraConMongetes").style.backgroundColor="#F3C59A";
}
function fueraIngredientesButifarraConMongetes(){
	document.getElementById("ingredientesYDatosButifarraConMongetes").innerHTML="";
	document.getElementById("ingredientesYDatosButifarraConMongetes").style.backgroundColor="";
}
//Coca
function ingredientesCocas(){
	document.getElementById("ingredientesYDatosCocas").innerHTML="<p>Esta receta es de lo más típico en Aragón.</p><p><b>Contiene:</b><ul><li>250gr harina de fuerza</li><li>70gr agua</li><li>50gr azúcar</li><li>75gr huevos</li><li>75gr de piñones</li><li>500ml de crema pastelera</li></ul></p>";
	document.getElementById("ingredientesYDatosCocas").style.backgroundColor="#F3C59A";
}
function fueraIngredientesCocas(){
	document.getElementById("ingredientesYDatosCocas").innerHTML="";
	document.getElementById("ingredientesYDatosCocas").style.backgroundColor="";
}
