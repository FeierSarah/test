package student;

public class StudentDeal {
	public int getCountsGirls(Student[] students,String prof) {
		int count1 =0;
		for(int j=0;j<students.length;j++) {
			if(students[j].major.equals(prof)) {
				if(students[j].sex=='W') {
				   ++count1;
			    }
		    }
		}
		return count1;
    }
	public int getCountsBoys(Student[] students,String prof) {
		int count2 =0;
		for(int j=0;j<students.length;j++) {
			if(students[j].major.equals(prof)) {
				if(students[j].sex=='M') {
				   ++count2;
			    }
		    }
		}
		return count2;
    }
}

