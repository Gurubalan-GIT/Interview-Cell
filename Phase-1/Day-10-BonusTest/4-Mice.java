import java.util.* ; 
  
public class Solution
{ 
    public int assignHole(ArrayList<Integer> mice,ArrayList<Integer> holes) 
    { 
        if (mice.size() != holes.size()) 
           return -1;
        Collections.sort(mice); 
        Collections.sort(holes); 
        int size = mice.size(); 
        int max = 0; 
        for (int i=0; i<size; i++) 
            if (max < Math.abs(mice.get(i)-holes.get(i))) 
                max = Math.abs(mice.get(i)-holes.get(i)); 
  
        return Math.abs(max); 
    } 
    public static void main(String[] args) 
    { 
        Solution gfg = new Solution(); 
        ArrayList<Integer> mice = new ArrayList<Integer>(0); 
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
           for(int i=0;i<n;i++)
        {
         int l=sc.nextInt();
         mice.add(l); 
        }
 
        ArrayList<Integer> holes= new ArrayList<Integer>(); 
     
        for(int i=0;i<n;i++)
        {
         int l=sc.nextInt();
         holes.add(l); 
        } 
        System.out.println(gfg.assignHole(mice, holes)); 
    } 
} 