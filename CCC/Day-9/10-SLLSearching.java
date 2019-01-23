import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        LinkedList<Integer> linkedList = new LinkedList<>();
        Scanner scanner=new Scanner(System.in);
        int n,data,ele,flag=1;
        n=scanner.nextInt();
        while(n!=0){
            data=scanner.nextInt();
            linkedList.addLast(data);
            n--;
        }
        ele=scanner.nextInt();
        for(int i=0;i<linkedList.size();i++){
            if(linkedList.get(i)==ele){
                flag=0;
            }
        }
        if(flag==0){
            System.out.print("yes");
        }else{
            System.out.print("no");
        }
    }
}

