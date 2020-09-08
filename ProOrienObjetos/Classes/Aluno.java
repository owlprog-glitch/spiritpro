package exerciciou1s2;

import java.util.Scanner;

public class Aluno {
	public static void main(String[] args) {
	    float nota1, nota2, media;
	    Scanner entrada = new Scanner(System.in);
	    System.out.print("Informe a primeira nota: ");
	    nota1 = entrada.nextFloat();
	    System.out.print("Informe a segunda nota: ");
	    nota2 = entrada.nextFloat();
	    media = (nota1 / nota2) * 2;
	    System.out.printf("A média é %.1f ",media);
	  }
}
