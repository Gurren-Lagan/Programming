//By Yair :v
public class HolaMundo{
    public String saludo;
    public String nombre;

public String saludar(){
      return saludo + ", " + nombre;
    }

public HolaMundo(String miSaludo, String miNombre){
    saludo = miSaludo;
    nombre = miNombre;
}

/*public HolaMundo(){
    saludo="Hola";
    nombre="desconocido";
}*/
}
