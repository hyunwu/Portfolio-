#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include <windows.h>

void start_screen()
{
	printf("-------------------------------------------------------------------------------------------------------------\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                 ��Ż��                                                    |\n");
	printf("|                                               GAME START                                                  |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("|                                                                                                           |\n");
	printf("-------------------------------------------------------------------------------------------------------------\n");
}
void story_full()
{
	printf("\n\n��� ���� �ٸ����� �б��� ������ �ҳ�� ģ����� �����Ϳ��� �ų��� ��� �־���.\n");
	printf("���ž��� ��� ���̿� ����� ���� ������ �Ѿ� ��ο� �� ���� ģ������ �ϳ��Ѿ� ���� ���ư���.\n");
	printf("\n\'ģ������ �� ����? ���� ���� ���� ���߰ڴ�.\'\n\n");
	printf("�ҳడ å������ ì��� �����Ϳ��� ������ �� �ָ� ���ε� �ؿ��� ���ڸ� ������ �ο��� �ҳฦ ������ �ٶ󺸰� �־���.\n");
	printf("\n\'��? Ȥ�� �ƺ�?! ȸ�簡 ���� ������ ������ ���̳� ����!\'\n\n");
	printf("�ҳ�� ������ ���� �޷�����. �׷��� ������ �ٰ����� ������ �ڴʰ� ���� �ο��� �ƺ��� �ƴ��� �˾����ȴ�.\n");
	printf("�˼��մϴ�! ��� ������ ���� �ڿ� �ٽ� ���ư��� ���� ū ���� �ҳ��� ���� ���ư� ���� ���� �ҳ�� �״�� �����ϰ� ���Ҵ�.\n");
	printf("�ҳฦ ��ġ�� ���ڴ� ��̰� ������ �ڽ��� ��н��� ���ÿ� �ҳฦ ��������.\n\n");
}
void hint_chloe()
{
	printf("\n\nå�󼭶��� �������� �޸� �ִ�.\n\n");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
	printf("\\\\\t\t\t\t\t\t\t\\\\\n");
	printf("\\\\\t\t\t\t\t\t\t\\\\\n");
	printf("\\\\\t[Ŭ����: 9��, �������: 2013.04.18]\t\t\\\\\n");
	printf("\\\\\t\t\t\t\t\t\t\\\\\n");
	printf("\\\\\t\t\t\t\t\t\t\\\\\n");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
}
void news_word()
{
	printf("\n\n���� ��Ŀ: �ֱ� �Ͼ ������λ���� �Ѵ��ֱ�� ��� �Ͼ�� ������\n������ �ַ� ����̸� ��ġ�Ͽ� ��ġ�� �ڿ� �����ϰ� �����ϴ� ������ ���̰� �ֽ��ϴ�.\n");
	printf("� �ڳฦ �� �θ�Բ��� ������ ���ǰ� �ʿ��� ������ ���-\n");
	printf("���� �Ҹ����� �𸣰ھ�...������ ���۰Ŷ�� ����µ� �����ؾ߰ڴ�.\n\n");
}
void quiz_math()
{
	printf("\n\n���̺� ���� ���̰� �־�.\n");
	printf("*********************************\n");
	printf("*\t6 + 4 = 210\t\t*\n");
	printf("*\t9 + 2 = 711\t\t*\n");
	printf("*\t8 + 5 = 313\t\t*\n");
	printf("*\t5 + 2 = 37\t\t*\n");
	printf("*\t7 + 6 = ???\t\t*\n");
	printf("*********************************\n\n");
}
void Kitchen_Situation()
{
	printf("\n\n��...�� �� ����� ���� ������. �츮������ ������ �̻��ѵ�?\n������...9���ε� 3���� �����ְ� 1���� �ʹ� ������.\n");
	printf("��ũ�� ������ 9���� �� ������ ¦�� �ȸ¾�...�� ������ 2���� ���η���������?\n");
	printf("....�̰� ���� �����ڴ� �ƴϰ���. ���� �ų� �������� ����.\n\n");
}
struct profile
{
	char name_one[100];
	char name_two[100];
	char name_three[100];
	char name_four[100];
	char name_five[50];
	int number;
	char name_six[50];
};
void printstruct_one(struct profile P)
{
	printf("--: %s\n", P.name_one);
	printf("---: %s\n", P.name_two);
	printf("---: %s\n", P.name_three);
	printf("---: %s\n", P.name_four);
}
void printstruct_two(struct profile H)
{
	printf("�̸�: %s\n", H.name_five);
	printf("----: %s\n", H.name_six);
}
void show_array(int arr[4][10], int col, int row)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%i", arr[i][j]);
			if (j != 9)
				printf(", ");
		}
		printf("\n");
	}
}
void main(void)
{

	// ����ȭ��
	start_screen();
	printf("���� �޴��� �����ϼ���.\n");
	printf("1. ���� ����\n");
	printf("2. ���� ����\n");
	int A, B;
	while (1)
	{
		printf("��ȣ �Է�: ");
		scanf("%i", &A);
		system("cls");
		if (A == 1) // ���� ����
		{
			printf("\n���� ���� ��ư�� �����̽��ϴ�.�Ʒ� �޴��� �����ϼ���.\n");
			printf("1. ���ΰ� ��ġ���丮 ����\n");
			printf("2. ���丮 ��ŵ �� ��Ż�� �����ϱ�\n");
			printf("��ȣ �Է�: ");
			scanf("%i", &B);
			
			system("cls");
			while (1)
			{
				if (B == 1) // ���� ���丮
				{
					story_full();
					goto EXIT0;
				}
				else if (B == 2) // ���丮 ��ŵ
				{
					goto EXIT0;
				}
			}
		}
		else if (A == 2) // ���� ����
		{
			printf("������ �����մϴ�.\n");
			goto EXIT4;
		}
	}

	// �ٶ���

	int start;
EXIT0:
	printf("\n���� �� ���� �̻��� ���� ������. ������� ���� ���� �ٶ��� ����...���⼭ ������ ��.");
	while (1)
	{
		printf("\n\n[���� ��ġ: �ٶ���]\n\n");
		printf("1. ������ ��������.\n2. �ֺ��� �ѷ�����.\n3. ������ �ִ� ������ Ȯ���Ѵ�.\n");
		printf("\n������ �ұ�... ");
		scanf("%i", &start);
		system("cls");
		if (start == 1) // ���� ������
		{
			printf("\n\n������ ���������� ���� ���� ��� �ִ�.\n");
		}
		else if (start == 2) // �ֺ� �ѷ����� ������
		{
			printf("\n\n�ֺ��� �ѷ��������� �ƹ��͵� ���� �ٶ����̴�.\n");
		}
		else if (start == 3) // ������ �ִ� ���� Ȯ�� ������
		{
			printf("\n\n�Ӹ��� �Ӹ����� ���� �ִ�. �̰ɷ� ���� �� �� ������?\n");
			printf("\n<2������ ���� ���� ���Ƚ��ϴ�>\n");
			break;
		}
		else
		{
			printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
		}
	}

	// 2��

	int a, b, c, d, e;
	char password[] = "Chloe";
	char user[10];
	while (1)
	{
	EXIT:
		printf("\n[���� ��ġ: 2��]\n");
		printf("\n1. �����ٷ� ����. \n2. ������ Ȯ���Ѵ�.\n3. ħ�븦 ���캻��. \n4. å���� ������ �����.\n");
		printf("\n��� ���� ���캼��? ");
		scanf("%i", &a);
		system("cls");
		if (a == 1) // ������ ������
		{
			printf("\n\n1. �ٿ뵵���� Ȯ���Ѵ�.\n2. �ֺ��� Ȯ���Ѵ�.\n3. �������� ���ư���.\n");
			printf("\n��� ���� ���캼��? ");
			scanf("%i", &b);
			while (1)
			{
				if (b == 1)
				{
					printf("\n\n�� �� ���� ���ǵ鸸 ���� �ִ�.\n");
					break;
				}
				else if (b == 2)
				{
					printf("\n\n������ ���� ���� ���캸���� ���� ��� ö������ ��� ����ߴ�.\n");
					printf("��GAME OVER��");
					goto EXIT4;
				}
				else if (b == 3)
				{
					printf("\n\n�������� ���ư���.\n");
					break;
				}
				else
				{
					printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
					printf("\n\n1. �ٿ뵵���� Ȯ���Ѵ�.\n2. �ֺ��� Ȯ���Ѵ�.\n3. �������� ���ư���.\n");
					printf("\n��� ���� ���캼��? ");
					scanf("%i", &b);
					system("cls");
				}
			}
		}
		else if (a == 2) // ���� ������
		{
			while (1)
			{
				printf("\n\n1. ���幮�� ����.\n2. �������� ���캻��.\n3. �������� ���ư���.");
				printf("\n��� ���� ���캼��? ");
				scanf("%i", &d);
				system("cls");
				if (d == 1)
				{
					printf("\n\n���� ���� �׿��ִ�.\n");

				}
				else if (d == 2)
				{
					printf("\n\n������ �ʹ� ���Ƽ� ���� �ʴ´�.\n");
					while (1)
					{
						printf("\n\n1. ħ�뿡�� �����Ѵ�.\n2. ���ڸ� �����´�.\n3. å���� ��� �ö󰣴�.\n");
						printf("\n��� �ұ�? ");
						scanf("%i", &e);
						system("cls");
						if (e == 1)
						{
							printf("\n\n�õ� ����.\n");
						}
						else if (e == 2)
						{
							printf("\n\n���ڸ� ��� �ö󰡵� ���� ������ ���� �ʴ´�.\n");

						}
						else if (e == 3)
						{
							printf("\n\n�������ڰ� �ְ�, ���ĺ� �ڹ���� ����ִ�.\n");
							while (1)
							{
								printf("\n���ĺ� 5�ڸ��� �Է��ϼ���: ");
								scanf("%s", &user);
								system("cls");
								if (strcmp(password, user))
								{
									printf("\n\n[��ġ���� �ʽ��ϴ�. 2������ ���ư��ϴ�.]\n");
									goto EXIT;
								}
								else
								{
									printf("\n\n<�ڹ��谡 ���Ƚ��ϴ�> ��罽 ���ܱ⸦ ȹ���ߴ�. ���� 1������ ��������.\n");
									printf("\n<1������ ���� ���� ���Ƚ��ϴ�>\n\n");
									goto EXIT2;
								}
							}
						}
						else
						{
							printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
						}
					}
				}
				else if (d == 3)
				{
					break;
				}
				else
				{
					printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
				}
			}
		}
		else if (a == 3) // ħ�� ������
		{
			printf("\nħ�밡 ǫ���غ���...\n");
			while (1)
			{
				printf("\n1. �ܴ�.\n2. �� �ܴ�.\n");
				printf("\n��� �ұ�? ");
				scanf("%i", &c);
				system("cls");
				if (c == 1)
				{
					printf("\n\n�ǰ��ؼ� �ڹ��ȴ�. ������ ����Ͽ����ϴ�.\n");
					printf("��GAME OVER��");
					goto EXIT4;
				}
				else if (c == 2)
				{
					printf("\n\nħ�뿡 �ɾƼ� ��� �޽� �� �Ͼ��.\n");
					break;
				}
				else
				{
					printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
				}
			}
		}
		else if (a == 4) // å�� ������
		{
			hint_chloe();
		}
		else // �� �ٸ� ������
		{
			printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
			printf("\n\n1. �����ٷ� ����. \n2. ������ Ȯ���Ѵ�.\n3. ħ�� ���� ���캻��. \n4. å���� ������ �����.\n");
			printf("\n");
			scanf("%i", &a);
		}
	}

	// 1��

	int g, h, z, j, k, l, m, C, D, E;
	while (1)
	{
	EXIT2:
		printf("\n[���� ��ġ: 1��]\n");
		printf("\n\n1. TV�� ���캻��.\n2. ���̺��� ���캻��.\n3. ���ĸ� ���캻��.\n4. �ֹ����� ����.\n5. ������ ���캻��.\n");
		printf("��� ���� ã�ƺ��� �ұ�..? ");
		scanf("%i", &g);
		system("cls");
		if (g == 1)
		{
			while (1)
			{
				printf("\n��? TV�� �ֳ�?!\n"); // TV ������
				printf("ä���� ��κ� ������ �ʾ�...�� ���� ������ �ұ�? ");
				scanf("%i", &D);
				if (D == 113)
				{
					news_word();
					break;
				}
				else
				{
					printf("\n\n[��ġ���� �ʽ��ϴ�. 1������ ���ư��ϴ�.]\n\n");
					goto EXIT2;
				}
			}
		}
		else if (g == 2) // ���̺� ������ (TV ä�� ��ȣ ��Ʈ)
		{
			quiz_math();
		}
		else if (g == 3) // ���� ������
		{
			printf("\n\n���� ���İ� �ֳ�...���� �ǰ��ϴ�..\n");
			while (1)
			{
				printf("\n\n1. ���� ���� �ѷ�����.\n2. �޽��� ���Ѵ�.\n3. ���� ���� ���캻��.\n4. �������� ���ư���.\n");
				printf("��� ����...? ");
				scanf("%i", &j);
				system("cls");
				if (j == 1)
				{
					printf("\n\n���ھ��� �����̳�? ���⿡ �̰� �� �ִ°���?\n");
				}
				else if (j == 2)
				{
					printf("\n\n������ ������ ���� �� ����߽��ϴ�.\n");
					printf("��GAME OVER��");
					goto EXIT4;
				}
				else if (j == 3)
				{
					printf("\n\n������ ���� �׿��ֳ�\n");
				}
				else if (j == 4)
				{
					break;
				}
				else
				{
					printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
				}
			}
		}
		else if (g == 4) // �ֹ� ������
		{
			printf("\n\n�ֹ����� ������...!\n");
			while (1)
			{
				printf("\n1. ����� ����.\n2. ������ �����.\n3. �ֹ� �� â��� ����.\n4. �������� ���ư���.");
				printf("\n������ �ұ�? ");
				scanf("%i", &k);
				system("cls");
				if (k == 1)
				{
					while (1)
					{
						printf("\n\n1. ����� ���Ḧ ���Ŵ�.\n2. �ʷϻ� ���Ḧ ���Ŵ�.\n3. �������� ���ư���.\n");
						printf("�ʹ� �񸶸���.. ");
						scanf("%i", &z);
						system("cls");
						if (z == 1)
						{
							printf("\n\n������� ����ִ� ���ع��� ���� ����߽��ϴ�.\n");
							printf("��GAME OVER��");
							goto EXIT4;
						}
						else if (z == 2)
						{
							printf("\n\n�������� ���� �������ϴ�. ������ ����Ͽ����ϴ�.\n");
							printf("��GAME OVER��");
							goto EXIT4;
						}
						else if (z == 3)
						{
							break;
						}
						else
						{
							printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
						}
					}
				}
				else if (k == 2) // ���� ������ ( ���Ͻ� ���� ��Ʈ)
				{
					Kitchen_Situation();
				}
				else if (k == 3) // ���Ͻ� �Ա�
				{
					printf("\n\n�ֹ� ���� â�� �ֳ�? �����߰ڴ�.\n");
					printf("[â�� ���� ����ֽ��ϴ�] ��й�ȣ 4�ڸ��� �Է��ϼ���: ");
					scanf("%i", &E);
					system("cls");
					if (E == 5970)
					{
						printf("\n\n<���ϽǷ� ���� ���� ���Ƚ��ϴ�>\n");
						printf("\n�̰� ����...�� �̷��� �����? ���� �� �������� ����? ���ʿ� �� ������...\n");
						goto EXIT3;
					}
					else
					{
						printf("\n\n[��ġ���� �ʽ��ϴ�. 1������ ���ư��ϴ�.]\n\n");
						goto EXIT2;
					}
				}
				else if (z == 4)
				{
					break;
				}
				else
				{
					printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
				}
			}
		}
		else if (g == 5) // ���� ������ (���� Ŭ����)
		{
			printf("\n�������� ������!\n");
			printf("\n[���� ��ġ: ����]\n");
			printf("\n1. ���� �����.\n2. �������� ���ư���.\n");
			printf("�������� �� �ؾ� �ұ�? ");
			scanf("%i", &m);
			system("cls");
			while (1)
			{
				if (m == 1)
				{
					printf("\n�������� �����!\n");
					while (1)
					{
						printf("\n\n[[���� �����]]\n��й�ȣ 4�ڸ��� �Է��ϼ���: ");
						scanf("%i", &C);
						system("cls");
						if (C == 0607)
						{
							printf("\n\n<���� ���Ƚ��ϴ�>\n");
							printf("Ż�⿡ �����Ͽ����ϴ�.\n");
							printf("�����ϼ̽��ϴ�.\n");
							printf("��GAME CLREAR��\n");
							int arr[4][10] = { {2,0,2,2,2,1,8,0,5,3},{2,0,2,2,2,1,8,0,1,1},{2,0,2,2,2,1,8,0,3,6},{2,0,2,2,2,1,8,0,3,2} };
							int volume = sizeof(arr) / sizeof(int);
							int col = 0, row = 0;
							show_array(arr, col, row);
							struct profile H = { "---", "--" };
							strcpy(H.name_five, "---");
							strcpy(H.name_six, "--");
							printstruct_two(H);

							struct profile P;
							strcpy(P.name_one, "---");
							strcpy(P.name_two, "�� ��");
							strcpy(P.name_three, "---");
							strcpy(P.name_four, "---");
							printstruct_one(P);
							goto EXIT4;
						}
						else
						{
							printf("\n\n[��ġ���� �ʽ��ϴ�. 1������ ���ư��ϴ�.]\n\n");
							goto EXIT2;
						}
					}
				}
				else if (m == 2)
				{
					break;
				}
			}
		}
		else
		{
			printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
		}
	}

	// ���Ͻ�

	int n, o, p, q;
	while (1)
	{
	EXIT3:
		printf("\n\n[���� ��ġ: ���Ͻ�]\n");
		printf("\n1. ���� �����Ѵ�.\n2. ����� �����Ѵ�.\n3. öâ�� ��������.\n4. �޷��� Ȯ���Ѵ�.\n5. 1������ ���ư���.\n");
		printf("���� �ʹ� �̻���. �� ������ �;�. ");
		scanf("%i", &n);
		system("cls");
		if (n == 1) // �� ������
		{
			while (1)
			{
				printf("\n�ڼ��� ���� �� �Ƿ� ���ھ��̵� ���� ����.\n");
				printf("\n[���� ��ġ: ���Ͻ�]\n");
				printf("\n1. ���� �� ���캻��.\n2. �������� ���ư���.");
				printf("\n��� �ұ�? ");
				scanf("%i", &o);
				system("cls");
				if (o == 1)
				{
					while (1)
					{
						printf("\n\nù ��° ������ �ܹ߸Ӹ� ���ھ��� �����̴�.\n2022�� 03�� 07��\n");
						printf("\n[���� ��ġ: ���Ͻ�]\n");
						printf("\n1. ���� �� ���캻��.\n2. �������� ���ư���.");
						printf("\n��� �ұ�? ");
						scanf("%i", &p);
						system("cls");
						if (p == 1)
						{
							while (1)
							{
								printf("\n\n�� ��° ������ �Ӹ��� �������� ���� ���ھ��� �����̴�.\n2022�� 04�� 07��\n");
								printf("\n[���� ��ġ: ���Ͻ�]\n");
								printf("\n1. ���� �� ���캻��.\n2. �������� ���ư���.");
								printf("\n��� �ұ�? ");
								scanf("%i", &q);
								system("cls");
								if (q == 1) // ���� ��й�ȣ ��Ʈ
								{
									printf("\n\n�� ��° ������ �� �Ӹ� ���ھ��� �����̴�.\n2022�� 05�� 07��\n");
									printf("������ ������ ���� ��ҳ�. �� �� ���� ����. ��¥�� �� ����?\n");
									goto EXIT3;
								}
								else if (q == 2)
								{
									break;
								}
								else
								{
									printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
								}
							}
						}
						else if (p == 2)
						{
							break;
						}
						else
						{
							printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
						}
					}
				}
				else if (o == 2)
				{
					break;
				}
				else
				{
					printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
				}
			}
		}
		else if (n == 2) // ����� ������
		{
			printf("\n\nTV������ ���� ������� ����. ��� ���� �ɱ�?\n");
		}
		else if (n == 3) // öâ ������
		{
			printf("\n\nöâ�� ���ڸ��� �տ� ������ ��ü�� ����´�. �ٴڵ� �������̰� ���� ������ ����ϴ�. ���� ��?\n");
		}
		else if (n == 4) // �޷� ������
		{
			printf("\n6�� 1�Ϻ��� 6�� 7�ϱ��� �������� �����ִ�. 5���޵� ������������ �ǹ̸� �𸣰ڴ�.\n");
		}
		else if (n == 5)
		{
			goto EXIT2;
		}
		else
		{
			printf("\n�ൿ�� �� ���� �������Դϴ�.\n");
		}
	}
EXIT4:
	return 0;
}