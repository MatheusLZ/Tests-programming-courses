//"Import java.util.Locale" é a biblioteca onde habita Locale
//Locale seria administrar ponto/virgula

import java.util.Locale;

public class Main {
    
public static void main(String[] args) {
    
 Locale.setDefault(Locale.US);
 
 int idade;
 double salario, altura;
 char genero;
 String nome;
 
 //O sinal = tem como função denominar, ou seja, lê-se como "recebe"
 
 idade = 30;
 salario = 5800.5;
 altura = 1.53;
 genero = 'F';
 nome = "Aona";
 
 //Em java o + nesse ponto (println) será feito como concatenação, ou seja, unir duas Strings 
 
 System.out.println("IDADE = " + idade);
 //String.format("") formata o valor, "%2f" significa 2 casas decimais e formatação
 System.out.println("SALARIO = " + String.format("%.2f", salario));
 System.out.println("ALTURA = " + String.format("%.2f", altura));
 System.out.println("GENERO = " + genero);
 System.out.println("NOME = " + nome);
 }
} 
