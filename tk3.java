import java.io.*;
import java.lang.*;
public class Main
{
	public static void main(String[] args)throws IOException
	{
	    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	    int x=Integer.parseInt(br.readLine());
	    int y=Integer.parseInt(br.readLine());
	    int a=1,b=1;
	    for(int i=1;i<=y;i++)
	        a=a*x;
	    for(int i=1;i<=x;i++)
	        b=b*y;
	       if(a>b)
	        System.out.println(a);
	       else
	        System.out.println(b);
	       
	}
}



