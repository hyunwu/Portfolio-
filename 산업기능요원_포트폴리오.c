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
	printf("|                                                 방탈출                                                    |\n");
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
	printf("\n\n어느 때와 다름없이 학교가 끝나고 소녀는 친구들과 놀이터에서 신나게 놀고 있었다.\n");
	printf("정신없이 노는 사이에 어느덧 저녁 노을을 넘어 어두워 질 때쯤 친구들은 하나둘씩 집에 돌아갔다.\n");
	printf("\n\'친구들이 다 갔네? 나도 이제 집에 가야겠다.\'\n\n");
	printf("소녀가 책가방을 챙기고 놀이터에서 나오자 저 멀리 가로등 밑에서 모자를 눌러쓴 인영이 소녀를 지긋이 바라보고 있었다.\n");
	printf("\n\'어? 혹시 아빠?! 회사가 일찍 끝나서 데리러 오셨나 보다!\'\n\n");
	printf("소녀는 망설임 없이 달려갔다. 그러나 가까이 다가서고 나서야 뒤늦게 검은 인영이 아빠가 아님을 알아차렸다.\n");
	printf("죄송합니다! 라고 빠르게 말한 뒤에 다시 돌아가려 하자 큰 손이 소녀의 얼굴을 덮쳤고 숨이 막힌 소녀는 그대로 기절하고 말았다.\n");
	printf("소녀를 납치한 남자는 즐겁게 웃으며 자신의 비밀스런 저택에 소녀를 데려갔다.\n\n");
}
void hint_chloe()
{
	printf("\n\n책상서랍을 열었더니 메모가 있다.\n\n");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
	printf("\\\\\t\t\t\t\t\t\t\\\\\n");
	printf("\\\\\t\t\t\t\t\t\t\\\\\n");
	printf("\\\\\t[클로이: 9세, 생년월일: 2013.04.18]\t\t\\\\\n");
	printf("\\\\\t\t\t\t\t\t\t\\\\\n");
	printf("\\\\\t\t\t\t\t\t\t\\\\\n");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
}
void news_word()
{
	printf("\n\n뉴스 앵커: 최근 일어난 연쇄살인사건은 한달주기로 계속 일어나고 있으며\n범인은 주로 어린아이를 납치하여 방치한 뒤에 끔찍하게 살해하는 만행을 벌이고 있습니다.\n");
	printf("어린 자녀를 둔 부모님꼐서 각별히 주의가 필요할 것으로 사료-\n");
	printf("무슨 소리인지 모르겠어...살인은 나쁜거라고 배웠는데 조심해야겠다.\n\n");
}
void quiz_math()
{
	printf("\n\n테이블 위에 종이가 있어.\n");
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
	printf("\n\n어...이 집 사람은 정말 더럽다. 우리집보다 찻장이 이상한데?\n찻잔이...9개인데 3개나 깨져있고 1개는 너무 더러워.\n");
	printf("포크랑 수저도 9개인 것 같은데 짝이 안맞아...왜 수저만 2개나 구부러져있을까?\n");
	printf("....이게 설마 주전자는 아니겠지. 없는 거나 마찬가지 같아.\n\n");
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
	printf("이름: %s\n", H.name_five);
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

	// 시작화면
	start_screen();
	printf("게임 메뉴를 선택하세요.\n");
	printf("1. 게임 시작\n");
	printf("2. 게임 종료\n");
	int A, B;
	while (1)
	{
		printf("번호 입력: ");
		scanf("%i", &A);
		system("cls");
		if (A == 1) // 게임 시작
		{
			printf("\n게임 시작 버튼을 누르셨습니다.아래 메뉴를 선택하세요.\n");
			printf("1. 주인공 납치스토리 보기\n");
			printf("2. 스토리 스킵 후 방탈출 시작하기\n");
			printf("번호 입력: ");
			scanf("%i", &B);
			
			system("cls");
			while (1)
			{
				if (B == 1) // 게임 스토리
				{
					story_full();
					goto EXIT0;
				}
				else if (B == 2) // 스토리 스킵
				{
					goto EXIT0;
				}
			}
		}
		else if (A == 2) // 게임 종료
		{
			printf("게임을 종료합니다.\n");
			goto EXIT4;
		}
	}

	// 다락방

	int start;
EXIT0:
	printf("\n눈을 떠 보니 이상한 곳에 갇혔다. 생김새로 보아 낡은 다락방 같다...여기서 나가야 해.");
	while (1)
	{
		printf("\n\n[현재 위치: 다락방]\n\n");
		printf("1. 문고리를 만져본다.\n2. 주변을 둘러본다.\n3. 가지고 있는 물건을 확인한다.\n");
		printf("\n무엇을 할까... ");
		scanf("%i", &start);
		system("cls");
		if (start == 1) // 문고리 선택지
		{
			printf("\n\n문고리를 돌려봤지만 문은 굳게 잠겨 있다.\n");
		}
		else if (start == 2) // 주변 둘러보기 선택지
		{
			printf("\n\n주변을 둘러보았지만 아무것도 없는 다락방이다.\n");
		}
		else if (start == 3) // 가지고 있는 물건 확인 선택지
		{
			printf("\n\n머리에 머리핀이 꽂혀 있다. 이걸로 문을 열 수 있을까?\n");
			printf("\n<2층으로 가는 길이 열렸습니다>\n");
			break;
		}
		else
		{
			printf("\n행동할 수 없는 선택지입니다.\n");
		}
	}

	// 2층

	int a, b, c, d, e;
	char password[] = "Chloe";
	char user[10];
	while (1)
	{
	EXIT:
		printf("\n[현재 위치: 2층]\n");
		printf("\n1. 베란다로 간다. \n2. 옷장을 확인한다.\n3. 침대를 살펴본다. \n4. 책상의 서랍을 열어본다.\n");
		printf("\n어디를 먼저 살펴볼까? ");
		scanf("%i", &a);
		system("cls");
		if (a == 1) // 베란다 선택지
		{
			printf("\n\n1. 다용도실을 확인한다.\n2. 주변을 확인한다.\n3. 이전으로 돌아간다.\n");
			printf("\n어디를 먼저 살펴볼까? ");
			scanf("%i", &b);
			while (1)
			{
				if (b == 1)
				{
					printf("\n\n알 수 없는 물건들만 많이 있다.\n");
					break;
				}
				else if (b == 2)
				{
					printf("\n\n난간을 통해 밖을 살펴보려다 발을 헛딛여 철조망에 찔려 사망했다.\n");
					printf("ㅡGAME OVERㅡ");
					goto EXIT4;
				}
				else if (b == 3)
				{
					printf("\n\n이전으로 돌아간다.\n");
					break;
				}
				else
				{
					printf("\n행동할 수 없는 선택지입니다.\n");
					printf("\n\n1. 다용도실을 확인한다.\n2. 주변을 확인한다.\n3. 이전으로 돌아간다.\n");
					printf("\n어디를 먼저 살펴볼까? ");
					scanf("%i", &b);
					system("cls");
				}
			}
		}
		else if (a == 2) // 옷장 선택지
		{
			while (1)
			{
				printf("\n\n1. 옷장문을 연다.\n2. 옷장위를 살펴본다.\n3. 이전으로 돌아간다.");
				printf("\n어디를 먼저 살펴볼까? ");
				scanf("%i", &d);
				system("cls");
				if (d == 1)
				{
					printf("\n\n옷이 많이 쌓여있다.\n");

				}
				else if (d == 2)
				{
					printf("\n\n옷장이 너무 높아서 닿지 않는다.\n");
					while (1)
					{
						printf("\n\n1. 침대에서 점프한다.\n2. 의자를 가져온다.\n3. 책상을 밟고 올라간다.\n");
						printf("\n어떻게 할까? ");
						scanf("%i", &e);
						system("cls");
						if (e == 1)
						{
							printf("\n\n택도 없다.\n");
						}
						else if (e == 2)
						{
							printf("\n\n의자를 밟고 올라가도 옷장 위에는 닿지 않는다.\n");

						}
						else if (e == 3)
						{
							printf("\n\n공구상자가 있고, 알파벳 자물쇠로 잠겨있다.\n");
							while (1)
							{
								printf("\n알파벳 5자리를 입력하세요: ");
								scanf("%s", &user);
								system("cls");
								if (strcmp(password, user))
								{
									printf("\n\n[일치하지 않습니다. 2층으로 돌아갑니다.]\n");
									goto EXIT;
								}
								else
								{
									printf("\n\n<자물쇠가 열렸습니다> 쇠사슬 절단기를 획득했다. 이제 1층으로 내려가자.\n");
									printf("\n<1층으로 가는 길이 열렸습니다>\n\n");
									goto EXIT2;
								}
							}
						}
						else
						{
							printf("\n행동할 수 없는 선택지입니다.\n");
						}
					}
				}
				else if (d == 3)
				{
					break;
				}
				else
				{
					printf("\n행동할 수 없는 선택지입니다.\n");
				}
			}
		}
		else if (a == 3) // 침대 선택지
		{
			printf("\n침대가 푹신해보여...\n");
			while (1)
			{
				printf("\n1. 잔다.\n2. 안 잔다.\n");
				printf("\n어떻게 할까? ");
				scanf("%i", &c);
				system("cls");
				if (c == 1)
				{
					printf("\n\n피곤해서 자버렸다. 다음날 사망하였습니다.\n");
					printf("ㅡGAME OVERㅡ");
					goto EXIT4;
				}
				else if (c == 2)
				{
					printf("\n\n침대에 앉아서 잠깐 휴식 후 일어난다.\n");
					break;
				}
				else
				{
					printf("\n행동할 수 없는 선택지입니다.\n");
				}
			}
		}
		else if (a == 4) // 책상 선택지
		{
			hint_chloe();
		}
		else // 또 다른 선택지
		{
			printf("\n행동할 수 없는 선택지입니다.\n");
			printf("\n\n1. 베란다로 간다. \n2. 옷장을 확인한다.\n3. 침대 밑을 살펴본다. \n4. 책상의 서랍을 열어본다.\n");
			printf("\n");
			scanf("%i", &a);
		}
	}

	// 1층

	int g, h, z, j, k, l, m, C, D, E;
	while (1)
	{
	EXIT2:
		printf("\n[현재 위치: 1층]\n");
		printf("\n\n1. TV를 살펴본다.\n2. 테이블을 살펴본다.\n3. 쇼파를 살펴본다.\n4. 주방으로 간다.\n5. 현관을 살펴본다.\n");
		printf("어디를 먼저 찾아봐야 할까..? ");
		scanf("%i", &g);
		system("cls");
		if (g == 1)
		{
			while (1)
			{
				printf("\n어? TV가 있네?!\n"); // TV 선택지
				printf("채널이 대부분 나오지 않아...몇 번을 눌러야 할까? ");
				scanf("%i", &D);
				if (D == 113)
				{
					news_word();
					break;
				}
				else
				{
					printf("\n\n[일치하지 않습니다. 1층으로 돌아갑니다.]\n\n");
					goto EXIT2;
				}
			}
		}
		else if (g == 2) // 테이블 선택지 (TV 채널 번호 힌트)
		{
			quiz_math();
		}
		else if (g == 3) // 쇼파 선택지
		{
			printf("\n\n낡은 쇼파가 있네...조금 피곤하다..\n");
			while (1)
			{
				printf("\n\n1. 쇼파 위를 둘러본다.\n2. 휴식을 취한다.\n3. 쇼파 밑을 살펴본다.\n4. 이전으로 돌아간다.\n");
				printf("어떻게 하지...? ");
				scanf("%i", &j);
				system("cls");
				if (j == 1)
				{
					printf("\n\n여자아이 사진이네? 여기에 이게 왜 있는거지?\n");
				}
				else if (j == 2)
				{
					printf("\n\n잠들었기 때문에 다음 날 사망했습니다.\n");
					printf("ㅡGAME OVERㅡ");
					goto EXIT4;
				}
				else if (j == 3)
				{
					printf("\n\n먼지가 많이 쌓여있네\n");
				}
				else if (j == 4)
				{
					break;
				}
				else
				{
					printf("\n행동할 수 없는 선택지입니다.\n");
				}
			}
		}
		else if (g == 4) // 주방 선택지
		{
			printf("\n\n주방으로 가보자...!\n");
			while (1)
			{
				printf("\n1. 냉장고를 연다.\n2. 찻장을 열어본다.\n3. 주방 옆 창고로 간다.\n4. 이전으로 돌아간다.");
				printf("\n무엇을 할까? ");
				scanf("%i", &k);
				system("cls");
				if (k == 1)
				{
					while (1)
					{
						printf("\n\n1. 보라색 음료를 마신다.\n2. 초록색 음료를 마신다.\n3. 이전으로 돌아간다.\n");
						printf("너무 목마르다.. ");
						scanf("%i", &z);
						system("cls");
						if (z == 1)
						{
							printf("\n\n음료수에 들어있던 독극물로 인해 사망했습니다.\n");
							printf("ㅡGAME OVERㅡ");
							goto EXIT4;
						}
						else if (z == 2)
						{
							printf("\n\n수면제로 인해 잠들었습니다. 다음날 사망하였습니다.\n");
							printf("ㅡGAME OVERㅡ");
							goto EXIT4;
						}
						else if (z == 3)
						{
							break;
						}
						else
						{
							printf("\n행동할 수 없는 선택지입니다.\n");
						}
					}
				}
				else if (k == 2) // 찻장 선택지 ( 지하실 오픈 힌트)
				{
					Kitchen_Situation();
				}
				else if (k == 3) // 지하실 입구
				{
					printf("\n\n주방 옆에 창고가 있네? 가봐야겠다.\n");
					printf("[창고 문은 잠겨있습니다] 비밀번호 4자리를 입력하세요: ");
					scanf("%i", &E);
					system("cls");
					if (E == 5970)
					{
						printf("\n\n<지하실로 가는 길이 열렸습니다>\n");
						printf("\n이게 뭐야...왜 이렇게 어둡지? 벽에 저 사진들은 뭘까? 저쪽에 저 빨간건...\n");
						goto EXIT3;
					}
					else
					{
						printf("\n\n[일치하지 않습니다. 1층으로 돌아갑니다.]\n\n");
						goto EXIT2;
					}
				}
				else if (z == 4)
				{
					break;
				}
				else
				{
					printf("\n행동할 수 없는 선택지입니다.\n");
				}
			}
		}
		else if (g == 5) // 현관 선택지 (게임 클리어)
		{
			printf("\n현관으로 가보자!\n");
			printf("\n[현재 위치: 현관]\n");
			printf("\n1. 문을 열어본다.\n2. 이전으로 돌아간다.\n");
			printf("현관에서 뭘 해야 할까? ");
			scanf("%i", &m);
			system("cls");
			while (1)
			{
				if (m == 1)
				{
					printf("\n현관문을 열어보자!\n");
					while (1)
					{
						printf("\n\n[[현관 도어락]]\n비밀번호 4자리를 입력하세요: ");
						scanf("%i", &C);
						system("cls");
						if (C == 0607)
						{
							printf("\n\n<문이 열렸습니다>\n");
							printf("탈출에 성공하였습니다.\n");
							printf("수고하셨습니다.\n");
							printf("ㅡGAME CLREARㅡ\n");
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
							strcpy(P.name_two, "김 준");
							strcpy(P.name_three, "---");
							strcpy(P.name_four, "---");
							printstruct_one(P);
							goto EXIT4;
						}
						else
						{
							printf("\n\n[일치하지 않습니다. 1층으로 돌아갑니다.]\n\n");
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
			printf("\n행동할 수 없는 선택지입니다.\n");
		}
	}

	// 지하실

	int n, o, p, q;
	while (1)
	{
	EXIT3:
		printf("\n\n[현재 위치: 지하실]\n");
		printf("\n1. 벽을 조사한다.\n2. 무기고를 조사한다.\n3. 철창을 만져본다.\n4. 달력을 확인한다.\n5. 1층으로 돌아간다.\n");
		printf("여기 너무 이상해. 얼른 나가고 싶어. ");
		scanf("%i", &n);
		system("cls");
		if (n == 1) // 벽 선택지
		{
			while (1)
			{
				printf("\n자세히 보니 내 또래 여자아이들 사진 같아.\n");
				printf("\n[현재 위치: 지하실]\n");
				printf("\n1. 조금 더 살펴본다.\n2. 이전으로 돌아간다.");
				printf("\n어떻게 할까? ");
				scanf("%i", &o);
				system("cls");
				if (o == 1)
				{
					while (1)
					{
						printf("\n\n첫 번째 사진은 단발머리 여자아이 사진이다.\n2022년 03월 07일\n");
						printf("\n[현재 위치: 지하실]\n");
						printf("\n1. 조금 더 살펴본다.\n2. 이전으로 돌아간다.");
						printf("\n어떻게 할까? ");
						scanf("%i", &p);
						system("cls");
						if (p == 1)
						{
							while (1)
							{
								printf("\n\n두 번째 사진은 머리를 양쪽으로 묶은 여자아이 사진이다.\n2022년 04월 07일\n");
								printf("\n[현재 위치: 지하실]\n");
								printf("\n1. 조금 더 살펴본다.\n2. 이전으로 돌아간다.");
								printf("\n어떻게 할까? ");
								scanf("%i", &q);
								system("cls");
								if (q == 1) // 현관 비밀번호 힌트
								{
									printf("\n\n세 번째 사진은 긴 머리 여자아이 사진이다.\n2022년 05월 07일\n");
									printf("마지막 사진은 나랑 닮았네. 꼭 내 사진 같아. 날짜는 왜 없지?\n");
									goto EXIT3;
								}
								else if (q == 2)
								{
									break;
								}
								else
								{
									printf("\n행동할 수 없는 선택지입니다.\n");
								}
							}
						}
						else if (p == 2)
						{
							break;
						}
						else
						{
							printf("\n행동할 수 없는 선택지입니다.\n");
						}
					}
				}
				else if (o == 2)
				{
					break;
				}
				else
				{
					printf("\n행동할 수 없는 선택지입니다.\n");
				}
			}
		}
		else if (n == 2) // 무기고 선택지
		{
			printf("\n\nTV에서나 보던 무기들이 많다. 어떻게 쓰는 걸까?\n");
		}
		else if (n == 3) // 철창 선택지
		{
			printf("\n\n철창을 잡자마자 손에 빨간색 액체가 묻어나온다. 바닥도 물웅덩이가 생길 정도로 흥건하다. 설마 피?\n");
		}
		else if (n == 4) // 달력 선택지
		{
			printf("\n6월 1일부터 6월 7일까지 빨간줄이 쳐져있다. 5월달도 마찬가지지만 의미를 모르겠다.\n");
		}
		else if (n == 5)
		{
			goto EXIT2;
		}
		else
		{
			printf("\n행동할 수 없는 선택지입니다.\n");
		}
	}
EXIT4:
	return 0;
}