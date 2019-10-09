package practice;

public class StudentDeal {

	public float getAverMaleAge(Student[] students) {
		float sum =0.0f;
		int count1 =0;
		for(int i=0;i<students.length;i++){
			if(students[i].sex.equals("male")) {
				sum =sum+students[i].age;
				count1++;
			}
		}
		sum=sum/count1;
		return sum;
	}

	public int getCounts(Student[] students,String prof) {
		int count2 =0;
		for(int j=0;j<students.length;j++) {
			if(students[j].major.equals(prof)) {
				if(students[j].sex.equals("male")) {
				    count2++;
			    }
		    }
		}
		return count2;
    }
}
