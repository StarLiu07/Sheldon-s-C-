#include "GameStart.h"

//��ʼ��Ϸ
void GameStart::StartGame()
{
    system("mode con cols=100 lines=32");

    cout << "\n\n\n\n";
    cout << "\t\t\t=================================================" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t��ӭ����̰����\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=================================================" << endl;

    //��ͣ
    system("pause");
    system("cls");
}

void GameStart::gotoxy(int x, int y)//�Լ�����һ��gotoxy�����������x��y�� 
{
    COORD c;     //����һ�������
    c.X = x - 1; //�����������λ��
    c.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);   //����WindowsAPI�����ù��λ��
}

/*
* ����
* ��������Ľڵ����
* �ڵ����������ָ�����
*/

//������
//�����ڵ�
struct _SNAKE
{
    int x; //������
    int y; //������
    _SNAKE* next; //ָ��
};

//Snake* g_pHead = NULL; //ͷ


//��ʼ����
void GameStart::CreateSnake()
{
    _SNAKE* head = nullptr;
    head = new _SNAKE;
    head->x = 20;
    head->y = 15;
    head->next = nullptr;

    _SNAKE* g_pHead = new _SNAKE;
    g_pHead = head;

    for (int i = 1; i < 3; i++)
    {
        _SNAKE* p = new _SNAKE;
        p->x = 20 + 2 * i;
        p->y = 15;
        p->next = nullptr;
        head->next = p;
        head = p;
    }

    //���
    head = g_pHead;
    while (head = NULL)
    {
        gotoxy(head->x, head->y);
        cout << "��";
        head = head->next;
        
    }

    //Snake * temp = (Snake*)malloc(sizeof(Snake));
    //temp->x = 20;
    //temp->y = 15;
    //temp->next = NULL;
    //g_pHead = temp;

    //for (int i = 1; i < 3; i++)
    //{
    //    Snake* p = (Snake*)malloc(sizeof(Snake));
    //    p->x = 20 + 2 * i;
    //    p->y = 15;
    //    p->next = NULL;
    //    temp->next = p; 
    //    temp = p;
    //}
    ////���
    //temp = g_pHead;
    //while (temp = NULL);
    //{
    //    gotoxy(temp->x, temp->y);
    //    cout << "��";
    //    temp = temp->next;
    //}
}

//void GameStart::CreateSnake()
//{
//    const int n = 15;//��ʼ���ߵĳ���
//    int arr[n] = { 1,1,1,1};
//    gotoxy(28, 15);
//
//    for (int i = 0; i < sizeof(arr); i++)
//    {
//        if (arr[i] == 1)
//        {
//            cout << "��";
//        }
//    }
//
//    
//}

//�ƶ���
void GameStart::MoveSnake()
{
    
}

//������Ϸ
void GameStart::RunGame()
{
    while (1)
    {
        //�ж���û������
        if (_kbhit())
        {
            //��ȡ����
            //char ch = getch();
            //switch (ch)
            //{
            //    //���Ʒ���
            //}
            
        }

        //�ƶ���
        MoveSnake();
    }
}