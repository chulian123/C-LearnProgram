//#include<iostream>
//#include<string>
//using namespace std;
////���������
////1.������������
////2.�������
////3.�����Ϊ����ȡ��������������
////4.�ֱ�����ȫ�ֺ����ͳ�Ա�������ж������������Ƿ����
////5.ȫ�ֺ�����main�����⣬��Ա������class����
//
//class Cube
//{
//public:
//	//����д
//	//���ó�   
//	void  setL(int l)
//	{
//		m_L = l;
//	}
//	//��ȡ��
//	int getL()
//	{
//		return m_L;
//	}
//	//���ÿ�
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//��ȡ��
//	int getW()
//	{
//		return m_W;
//	}
//
//	//���ø�
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	//��ȡ��
//	int getH()
//	{
//		return m_H;
//	}
//	//��ȡ���������      calculate-����
//	int  calculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//	//��ȡ���������
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//	//���ó�Ա�����ж������������Ƿ����
//	bool isSameByClass(Cube& c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//
//	}
//
//
//
//private:         //����һ������˽�У��ⲿ���ýӿڼ��ɣ��ڷ���Ȩ������ƽӿ�
//	//����
//	int m_L;  //��  lengh
//	int m_W;  //��  weigh
//	int m_H;  //��  high
//	//��Ϊ
//
//
//};
//
//
//
//
////����ȫ�ֺ����ж������������Ƿ����
//bool isSame(Cube& c1, Cube& c2)    //�����õķ�ʽ����
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//
//
//
//int main()
//{
//	//�������������
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
//	cout << "c1�����Ϊ��" << c1.calculateV() << endl;
//
//	//�����ڶ���������
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	//����ȫ�ֺ����ж�
//	bool ret = isSame(c1, c2);      //isSame��ȫ�ֺ���
//	if (ret)       //Ĭ��retΪ�棬��ret=ture
//	{
//		cout << "c1��c2����ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�ǲ���ȵģ�" << endl;
//	}
//
//	//���ó�Ա�����ж�
//	ret = c1.isSameByClass(c2);
//	if (ret)       //Ĭ��retΪ�棬��ret=ture
//	{
//		cout << "��Ա�����жϣ�c1��c2����ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "��Ա�����жϣ�c1��c2�ǲ���ȵģ�" << endl;
//	}
//
//
//
//	system("pause");
//	return 0;
//}

