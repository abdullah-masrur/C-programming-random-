// Function to find all the students
// who have registered for a given course
void find_c()
{
	int id;
	printf("Enter the course ID \n");

	// Course ID
	id = 1;
	int c = 0;

	// Iterating through the students list
	for (int j = 0; j <= i; j++) {

		// Checking if the student
		// has registered in the
		// given course or not
		for (int d = 0; d < 5; d++) {
			if (id == st[j].cid[d]) {

				printf(
					"The Students Details are\n");
				printf(
					"The First name is %s\n",
					st[j].fname);
				printf(
					"The Last name is %s\n",
					st[j].lname);
				printf(
					"The Roll Number is %d\n ",
					st[j].roll);
				printf(
					"The CGPA is %f\n",
					st[j].cgpa);

				c = 1;
				break;
			}
		}
	}
}







// Function to find the details
// of the student by roll number
void find_rl()
{
	int x;
	printf("Enter the Roll Number"
		" of the student\n");

	// Roll number for which the details
	// needs to be found
	x = 1;

	// Iterating through all the students
	for (int j = 0; j < i; j++) {

		// If the roll number is found
		if (x == st[j].roll) {
			printf("The Students Details are\n");
			printf("The First name is %s\n",
				st[j].fname);
			printf("The Last name is %s\n",
				st[j].lname);
			printf("The CGPA is %f\n",
				st[j].cgpa);

			// Printing the courses
			// in which the student
			// is enrolled
			for (int k = 0; k < 5; k++) {
				printf(
					"The course ID are %d\n",
					st[j].cid[k]);
			}
			break;
		}
	}
}










// Function to add the student into the database
void add_student()
{

	printf("Add the Students Details\n");
	printf("-------------------------\n");
	printf("Enter the first name of student\n");

	// First name of the student
	st[i].fname = "Rahul";
	printf("Enter the last name of student\n");

	// Last name of the student
	st[i].lname = "Kumar";
	printf("Enter the Roll Number\n");

	// Roll Number of the student
	st[i].roll = 1;
	printf("Enter the CGPA you obtained\n");

	// CGPA of the student
	st[i].cgpa = 8;
	printf("Enter the course ID"
		" of each course\n");

	// Storing the courses every student
	// is enrolled in
	for (int j = 0; j < 5; j++) {
		st[i].cid[j] = j;
	}
	i = i + 1;
}









// Function to search the students list
// by the given first name
void find_fn()
{
	char a[50];
	printf("Enter the First Name"
		" of the student\n");
	a = "Rahul";
	int c = 0;

	// Iterating through the students list
	for (int j = 0; j <= i; j++) {

		// Compare the first names
		if (!strcmp(st[j].fname, a)) {

			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[j].fname);
			printf(
				"The Last name is %s\n",
				st[j].lname);
			printf(
				"The Roll Number is %d\n ",
				st[j].roll);
			printf(
				"The CGPA is %f\n",
				st[j].cgpa);
			printf("Enter the course ID "
				"of each course\n");

			// Print the course ID's
			for (int k = 0; k < 5; k++) {
				printf(
					"The course ID are %d\n",
					st[j].cid[k]);
			}
			c = 1;
		}
	}
}
