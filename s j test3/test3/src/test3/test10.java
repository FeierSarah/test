package test3;

interface PCI //PCI²å²Û
{
  void start();
  void stop();
}
class NetworkCard implements PCI//Íø¿¨
{
  public void start()
  {
    System.out.println("ÍøÂç´«ËÍ");
  }
  public void stop()
  {
    System.out.println("ÍøÂç¹Ø±Õ");
  }
}
class SoundCard implements PCI//Éù¿¨ 
{
  public void start()
  {
    System.out.println("Éù¿¨¿ªÆô");
  }
  public void stop()
  {
    System.out.println("Éù¿¨¹Ø±Õ");
  }
}
class MainBoard //µ÷ÓÃPCIµÄº¯Êı
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
