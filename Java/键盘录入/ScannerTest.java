//1.����
import java.util.Scanner;

public class ScannerTest{
	public static void main(String[] args){
		//��������
		Scanner sc = new Scanner(System.in);
		
		//���յ�һ������
		System.out.println("�������һ�����֣�");
		int number1 = sc.nextInt();
		//���յڶ�������
		System.out.println("������ڶ������֣�");
		int number2 = sc.nextInt();
		
		//���֮��
		System.out.println(number1 + number2);
	}
}