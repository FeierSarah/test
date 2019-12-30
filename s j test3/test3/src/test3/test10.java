package test3;

interface PCI //PCI���
{
  void start();
  void stop();
}
class NetworkCard implements PCI//����
{
  public void start()
  {
    System.out.println("���紫��");
  }
  public void stop()
  {
    System.out.println("����ر�");
  }
}
class SoundCard implements PCI//���� 
{
  public void start()
  {
    System.out.println("��������");
  }
  public void stop()
  {
    System.out.println("�����ر�");
  }
}
class MainBoard //����PCI�ĺ���
{
  public void usePCICard(PCI p)
  {
    p.start();
    p.stop();
  }
}
public class test10 
{
  public static void main(String[] args) 
  {
    MainBoard mb=new MainBoard();
    NetworkCard nc=new NetworkCard();
    mb.usePCICard(nc);
    SoundCard sc=new SoundCard();
    mb.usePCICard(sc);
  }
}
