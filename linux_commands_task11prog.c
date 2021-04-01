#include<stdio.h>
#include <time.h>

int main()
{
	char s[100];
    time_t t;
    time(&t);

    // change directory to project2
	chdir("project2");
    printf("Step1. Change dir to project2 - ");
    printf(ctime(&t));  // used to print time and date

	// printing current working directory
	printf("Step2. %s - ", getcwd(s, 100));
    printf(ctime(&t));

    // make directory to dir0
    mkdir("dir0");
    printf("Step3. Make dir to dir0 - ");
    printf(ctime(&t));

    // change directory to dir0
    chdir("dir0");
    printf("Step4. Change dir to dir0 - ");
    printf(ctime(&t));

    // make directory to dir1
    mkdir("dir1");
    printf("Step5. Make dir to dir1 - ");
    printf(ctime(&t));

    // change directory to dir1
    chdir("dir1");
    printf("Step6. Change dir to dir1 - ");
    printf(ctime(&t));

    // create file to file1
    system("touch file1");
    printf("Step7. File created file1 - ");
    printf(ctime(&t));

    // create file to file2
    system("touch file2");
    printf("Step8. File created file2 - ");
    printf(ctime(&t));

    // changing to parent directory
    chdir("..");
    printf("Step9. Change dir to %s - ", getcwd(s, 100));
    printf(ctime(&t));

    // make directory to dir2
    mkdir("dir2");
    printf("Step10. Make dir to dir2 - ");
    printf(ctime(&t));

    // change directory to dir2
    chdir("dir2");
    printf("Step11. Change dir to dir2 - ");
    printf(ctime(&t));

    // create file to file3
    system("touch file3");
    printf("Step12. File created file3 - ");
    printf(ctime(&t));

    // create file to file4
    system("touch file4");
    printf("Step13. File created file4 - ");
    printf(ctime(&t));

    // changing to parent directory
    chdir("..");
    printf("Step14. Change dir to %s - ", getcwd(s, 100));
    printf(ctime(&t));

    // create file to link5
    system("touch link5");
    printf("Step15. File created link5 - ");
    printf(ctime(&t));
    // linking link5 to dir2/file4
    system("ln -s dir2/file4 link5");
    printf("Step16. File link5 linked to dir2/file4 - ");
    printf(ctime(&t));

    // create file to file6
    system("touch file6");
    printf("Step17. File created file6 - ");
    printf(ctime(&t));

	return 0;
}
