import java.util.Scanner;

public class UsaAluno {
  public static void main (String[] args) {
    float media;
    Scanner entrada = new Scanner(System.in);
    Aluno a = new Aluno();
    Aluno b = new Aluno();
    
    //leitura de dados do objeto
    
    System.out.println("Informe a primeira nota do Aluno A: ");
    a.nota1 = entrada.nextFloat();
    System.out.println("Informe a segunda nota do Aluno A: ");
    a.nota2 = entrada.nextFloat();
    
     //leitura de dados do objeto
    
    System.out.println("Informe a primeira nota do Aluno B: ");
    b.nota1 = entrada.nextFloat();
    System.out.println("Informe a segunda nota do Aluno B: ");
    b.nota2 = entrada.nextFloat();
    
    //calculo de média
    a.media = a.calculaMedia();
    b.media = b.calculaMedia();
    
    if(a.media>b.media)
      System.out.println("A media do objeto A é maior");
    else if (b.media>a.media)
      System.out.println("A media do objeto A é menor");
    else
      System.out.println("A media do objeto A é igual");
    
