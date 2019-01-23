import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         LinkedList<Integer> linkedList = new LinkedList<>();
        Scanner scanner=new Scanner(System.in);
        int n,data,delel;
        n=scanner.nextInt();
        while(n!=0){
            data=scanner.nextInt();
            linkedList.addFirst(data);
            n--;
        }
        delel=scanner.nextInt();
        while(delel!=0){
            linkedList.remove();
            delel--;
        }
        Iterator<Integer> integerIterator = linkedList.descendingIterator();
        Iterator<Integer> integerIterator1 = linkedList.descendingIterator();
        while(integerIterator.hasNext()){
            if(integerIterator1.next()==(linkedList.getFirst())){
                System.out.println(integerIterator.next());
                break;
            }else {
                System.out.print(integerIterator.next()+"->");
            }
        }
    }
}
