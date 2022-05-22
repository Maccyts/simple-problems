import java.io.*;
import java.lang.*;
public class Main
{
	public static void main(String[] args)throws IOException 
	{
	    int x=Integer.parseInt(args[0]);
	    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	    int y=Integer.parseInt(br.readLine());
		System.out.println(x*y);
	}
}
