package classes;

import interfaces.*;

public class Bat implements Viewable, Lookable {
  @Override
  public void view() {
    System.out.println("Mammal");
  }

  @Override
  public void look() {
    System.out.println("WingedAnimal");
  }
}
