import java.util.Scanner;

class Main{
	public static void main(String[] args){
		Scanner ent = new Scanner(System.in);
		String[] a = new String[] {"", " ", "  ", "   ", "    ", "     ", "      ", "       "};
		while(ent.hasNext()){
			String val = ent.next();
			int base1 = ent.nextInt();
			int base2 = ent.nextInt();
			int dec = Integer.parseInt(val, base1);
			String resp = Integer.toString(dec, base2);
			if(resp.length()>7)
				System.out.println("  ERROR");
			else{
				System.out.println(a[7-resp.length()] + resp.toUpperCase());
			}
		}
		ent.close();
	}
}
