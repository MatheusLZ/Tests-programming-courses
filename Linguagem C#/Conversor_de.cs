
	class Program
	{
		static void Main(String[] Args)
		{
			//Criação de variávies
			int Conversor, metrica;
			char converte;
			//Exibição do Menu
			Console.WriteLine("================");
			Console.WriteLine("=  CONVERSORES =");
			Console.WriteLine("================");

			Console.WriteLine("\n1- Conversor de Medidas.\n2- Conversor de Moedas.\n3- Conversor de Pesos.\n0- Sair.");
			Console.WriteLine("Escolha o seu conversor:");
			//opção
			Conversor = int.Parse(Console.ReadLine());
			Console.Clear();
			
			while (Conversor!=0)
            {								
					switch (Conversor)
					{
						//medidas
						case 1:
							Console.WriteLine("**Conversor de Medidas**");
							Console.WriteLine("\nA-métricas\nB-Volumétrica\nC-Voltar ao Menu Principal");
							converte = char.Parse(Console.ReadLine());
							Console.Clear();
							do
							{


								switch (converte)
								{
									case 'a':
									case 'A':
										Console.WriteLine("\n1-Metro para centimetro\n2-Centimetro para Metro\n3-Retornar ao Menu Principal");
										metrica = int.Parse(Console.ReadLine());
										Console.Clear();
										if (metrica == 1)
										{
											Console.WriteLine("\nMetros para centimetro\nInsira o valor a ser convertido:");
										}
										else if (metrica == 2)
										{
											Console.WriteLine("\nCentimetro para Metro\nInsira o valor a ser convertido:");
										}
										else if (metrica == 3)
										{
											Console.WriteLine("\nVoltando ao Menu Principal");
											break;
										}
										break;
									case 'b':
									case 'B':
										Console.WriteLine("\n1-Litro para Mililitro\n2-Mililitro para Litro\n3-Retornar ao Menu Principal");
										break;
									case 'c':
									case 'C':
										break;
									default:
										Console.WriteLine("Opção invalida");
										break;
								}
						    } while (converte != 'c' || converte != 'C');
						      break;
							
						//moedas
					    case 2:
							Console.WriteLine("Conversor de Medidas");
							break;
						//peso
						case 3:
							Console.WriteLine("Conversor de Medidas");
							break;
						//sair
						case 0:
							Console.WriteLine("Conversor de Medidas");
							break;
					}

			}

			Console.ReadKey();


		}
	}
}
