import java.io.*;
import java.util.*;
import java.lang.*;

public class AlphaGo {
	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		int st_1 = sc.nextInt(); // no of stones to team1;
		int st_2 = sc.nextInt(); // no of stones to team2;
		int pr_1 = sc.nextInt(); // value of first prime no;
		int pr_2 = sc.nextInt(); // value of second prime no;
		int n = st_1 > st_2 ? st_1 : st_2; // setting size of the array to the greater input no;  
		int[] st_w = new int[n+3]; st_w[0] = 1; // array containing all multiples of st_1 or the white colored stones;
		int[] st_b = new int[n+3]; st_b[0] = 1; // array containing all multiples of st_2 or the black colored stones;
		int[] st_g = new int[n]; // array containing all the multiples of st_1*st_2 or the green stones;
		int[] st_y = new int[n]; // array containing all the yellow stones or those stones which are not in the previous three arrays;
		for(int i =1; i < n+3; i++) {
			st_w[i] = pr_1 *i; // filling st_w according to the rules;      
			st_b[i] = pr_2 *i;  // filling st_b according to the rules;
		}
		for(int i =0; i < n; i++){
			st_g[i] = (pr_1*pr_2) * (i+1); // filling st_g according to the rules
		}
		SortedSet<Integer> set = new TreeSet<>(); // using a sorted set to contain all unique elements in the arrays st_w, st_b and st_g;
		for(int i =0;i < n+3; i++){
			set.add((Integer)(st_w[i]));
			set.add((Integer)(st_b[i]));
			if(i < st_g.length)set.add((Integer)(st_g[i]));
		} 
		int i =0;
		for(int q =2; q < 50; q++) { // filling the array of the yellow stones with no. that is not present in the sorted set in the above line;
			if(i >= n) break;
			if(!set.contains((Integer)q)){
				st_y[i] = q;
				++i;
			}
		}
		List<Integer> T_1 = new ArrayList<>(); // list containing the stones which team1 can have ,i.e the stones which are black or yellow;  
		List<Integer> T_2 = new ArrayList<>(); // list containing the stones which team2 can have, i.e the stones which are white or yellow;
		for(int j =0; j < n+3; j++) { // filling T_1 acording to the above reule;
			T_1.add((Integer)(st_b[j]));
			if(j < st_y.length) T_1.add((Integer)(st_y[j]));
		}
               for(int j =0; j < n+3; j++) { // filling T_2 according to the above rule;
			T_2.add((Integer)(st_w[j]));
			if(j < st_y.length) T_2.add((Integer)(st_y[j]));
		}
		Collections.sort(T_1); // sorting the list;
		Collections.sort(T_2); // sorting the list;
		System.out.println(combination(T_1, T_2, st_1, st_2)); // printing the result by calling the combination function;
	} 
	private static Map<Integer, List<Integer>> combination(List<Integer> a, List<Integer> b, int k1, int k2) { // this function takes two lists as arguments and two integers which specify  
		List<Integer> lst_1, lst_2;                                                                                  // elements our combination list can have from both lists accordingly;
		int n1, n2;
		if(k1>k2) {lst_1 = b; lst_2 = a; n1 = k2; n2 = k1;} // making the lists and the other integer arguments to be consistent throughout the function, i.e lst_1 is always less than lst_2 nd same; 
		else {lst_1 = a; lst_2 = b;n1 = k1; n2 = k2;}       // by ordering them into lst_1 and lst_2 and n1 and n2; 
		Map<Integer, List<Integer>> mp = new HashMap<>(); // a map to hold the valid combination of the given sets in a list as value and the greatest element in that list as our key;
		for(int i =0; i< lst_1.size(); i++) {
		    List<Integer> ans = new ArrayList<>(); // our combination list from both given lists and the two integer arguments;
		    int t =i;
			for(int x = 0; x <n1; x++) {ans.add(lst_1.get(t)); ++t;}
			for(int j =0; j <lst_2.size(); j++) {
				if(!ans.contains(lst_2.get(j))&& ans.size() < k1+k2) ans.add(lst_2.get(j));
			}
			Integer count = Collections.max(ans); // setting key count to the max element of our combination list
			mp.put(count, ans); // inserting the key-value pair in our map;	
		}
		return mp; // returning the map;
	}
} 

