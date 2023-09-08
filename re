function contarPalabrasDesdePrompt() {
  var texto = prompt("Ingresa una cadena de texto:");
  
  if (texto === null || texto === "") {
      console.log("No ingresaste ninguna cadena.");
      return;
  }


  var palabras = texto.split(/\s+/); 

 
  palabras = palabras.filter(function(palabra) {
      return palabra !== '';
  });


  console.log("Cantidad de palabras: " + palabras.length);
}


contarPalabrasDesdePrompt();

___________________________________________________________________________________________________________


function sumaEnRangoDesdePrompt() {
  var inicio = parseInt(prompt("Ingresa el número de inicio del rango:"));
  var fin = parseInt(prompt("Ingresa el número de fin del rango:"));

  if (isNaN(inicio) || isNaN(fin)) {
      console.log("Por favor, ingresa números válidos.");
      return;
  }

  if (inicio > fin) {
      
      [inicio, fin] = [fin, inicio];
  }

  var suma = 0;

  for (var i = inicio; i <= fin; i++) {
      suma += i;
  }

  console.log("La suma de los números en el rango de " + inicio + " a " + fin + " es: " + suma);
}


sumaEnRangoDesdePrompt();




____________________________________________________________________________________________________________




function celsiusToFahrenheit(celsius) {
  return (celsius * 9/5) + 32;
}


function celsiusToKelvin(celsius) {
  return celsius + 273.15;
}

function convertirTemperatura() {
  var celsius = parseFloat(prompt("Ingresa una temperatura en grados Celsius:"));

  if (!isNaN(celsius)) {
      var fahrenheit = celsiusToFahrenheit(celsius);
      var kelvin = celsiusToKelvin(celsius);

      console.log("Celsius: " + celsius + " -> Fahrenheit: " + fahrenheit + " -> Kelvin: " + kelvin);
  } else {
      console.log("Por favor, ingresa un número válido.");
  }
}

convertirTemperatura();
