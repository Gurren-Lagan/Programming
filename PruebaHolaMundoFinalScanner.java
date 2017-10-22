//modified by Yair Reyes
import java.util.Scanner;
public class PruebaHolaMundoFinalScanner{
public static void main(String [] args){

	 Scanner reader = new Scanner(System.in);
	 String saludo;
	 String nombre;

	 System.out.println("Introduce el saludo: ");
		saludo = reader.nextLine();

	 System.out.println("Introduce el nombre: ");
	  nombre = reader.nextLine();

	 HolaMundo salt = new HolaMundo(saludo,nombre);

	System.out.println(salt.saludar());
}

}
