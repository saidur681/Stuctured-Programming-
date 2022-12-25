#include <stdio.h>
#include <string.h>
//========function declaration=======
void menu();
int authentication();
//===========manage project function declaration=========
void subMenu();
void createNewProject();
void saveProjectInfo();
void viewAllProjectInfo();
void updateProjectInfo();
void deleteProjectInfo();
int managePID();
//========expense management function declaration=========
void subMenu_2();
void createNewExpense();
void saveExpenseInfo();
void viewAllExpenseInfo();
void updateExpenseInfo();
void deleteExpenseInfo();
int expensePID();
//========feed history management function declaration==========
void subMenu_3();
void createNewFeedHistory();
void saveFeedHistoryInfo();
void viewFeedHistoryInfo();
void updateFeedHistoryInfo();
void deleteFeedHistory();
int feedPID();
//=========selling history management function declaration===========
void subMenu_4();
void addNewSellingInfo();
void saveSellingInformation();
void viewAllSellingHistory();
void updateSellingInformation();
void deleteSellingInformation();
int sellPID();
//============employee management function declaration==============
void subMenu_5();
void addNewEmployeeInfo();
void saveEmployeeInfo();
void viewAllEmployeesInfo();
void updateEmployeeSalaryInfo();
void deleteEmployeeSalaryInfo();
int employee_PID();
//=========Generate report function declaration=======
void reportGeneration();

// global declaration section

//================structure =================
struct Project{
    int projectCode;
    char projectId[20], projectName[50], projectShortDes[100], projectType[30], startDate[15], endDate[15];
    float estimatedBudget;
};
struct expense{
    int projectCode;
    char expenseId[50];
    char expenseDate[50], expenseType[50], productName[50], supplierInfo[100];
    float expenseAmount;
};
struct feed
{
    int projectCode;
    float feedQuantity;
    char feedId[50], feedDate[50], feedTiming[50], feedCatagory[100];
};
struct sell
{
    int projectCode;
    char sellingId[50], sellingDate[50], buyerInfo[50];
    float sellProductQuantity, unitPrice, totalSellAmount;
};
struct employee
{
    int projectCode;
    char employeeId[50];
    char employeeName[50];
    char employeeAddress[50];
    char employeeEmail[50];
    int employeeNumber;
    float employeeSalary;
};

FILE *filetooperate, *temp_file;
struct Project projectInfo;
struct expense expenseInfo;
struct feed feedInfo;
struct sell sellInfo;
struct employee employeeInfo;

//______________________________________________________________________ main function section ____________________________________________________________
int main()
{
    int choice;
    printf("\n-----------------------------------------------------------------------------------\n\xDB\xDB\xB2 \t\tWELCOME TO MAZUMDAR'S AGRO & FRISHARIES \t\t\t\xB2\xDB\xDB\n-----------------------------------------------------------------------------------\n\n\n\xDB\xDB\xDB Do You Want To Login ----------??\n\n\xDB\xDB\xDB 1. Yes I Want To Login\n\n\xDB\xDB\xDB 2. NO. I don't want To login \n\n\n\n\xDB\xDB\xDB Please Enter Your Choice(1/2)------: ");

lebel1:
    scanf("%d", &choice);
    if (choice == 1)
    {

    lebel3:
        if (authentication() == 0)
        {

            menu();
        }
        else
        {
            printf("\nYour Password Is Incorrect. Please Try Again.\n");
            goto lebel3;
        }
    }
    else if (choice == 2)
    {
        exit(0);
    }
    else
    {
        printf("\nInvalid Choice. If You Want To Loin,,,,,Please enter ('1') Or If You Want To Exit---Please Enter ('2')\nTry Again: ");
        goto lebel1;
    }

    return 0;
}

//*****function definition******
void menu()
{
    system("cls");
    printf("\n------------------------------------------------------------------------------\n\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n------------------------------------------------------------------------------\n\n\xDB\xDB\ 1.MANAGE FISH OR POULTRY PROJECT\n\n\xDB\xDB\ 2.MANAGE EXPENSES\n\n\xDB\xDB\ 3.MANAGE FEED HISTORY\n\n\xDB\xDB\ 4.MANAGE SELLING INFO\n\n\xDB\xDB\ 5.MANAGE EMPLOYEE SALARY INFO\n\n\xDB\xDB\ 6.GENERATE REPORTS\n\n\xDB\xDB\ 7.MAKE A PRICE ESTIMATION\n\n\xDB\xDB\ 8.BACK TO HOME\n\n\xDB\xDB\ 9.EXIT\n\n\xDB\xDB\ ENTER A TERM YOU WANT TO USE(1/2/3/4/5/6/7/8/9): ");
    int user_choice;

lebel2:
    scanf("%d", &user_choice);
    switch (user_choice)
    {
    case 1:
        subMenu();
        break;
    case 2:
        subMenu_2();
        break;
    case 3:
        subMenu_3();
        break;
    case 4:
        subMenu_4();
        break;
    case 5:
        subMenu_5();
        break;
    case 6:
        reportGeneration();
        break;
    case 7:

        break;
    case 8:
        menu();
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("\nINVALID INPUT. PLEASE ENTER A VALID INPUT: ");
        goto lebel2;
    }
}

int authentication(){
    system("cls");
    printf("\n-----------------------------------------------------------------------------------\n\xDB\xDB\xB2 \t\t\tLOGIN MAZUMDAR'S AGRO & FRISHARIES \t\t\t\xB2\xDB\xDB\n-----------------------------------------------------------------------------------");
    char fixUsername[20]="saidur";
    char fixPassword[20]="12345";
    char userName[20],userPassword[20];

    printf("\n\n\xDB Enter your Username : ");
    fflush(stdin);
    gets(userName);
    printf("\n\xDB Enter your Password : ");
    fflush(stdin);
    gets(userPassword);

    int login1= (strcmp(userName,fixUsername));
    int login2 = (strcmp(userPassword, fixPassword));

    return login1+login2;
}

//======================= manage section ==========================
void subMenu()
{

    system("cls");
    char subMenu_choice;

    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n\xDB\xDB\xB2======================= MANAGE NEW FISH & POULTRY PROJECTS =========================\xB2\xDB\xDB\n\n");
    printf("\n\n\xDB\xB2 A.CREATE NEW PROJECT INFO");
    printf("\n\n\xDB\xB2 B.VIEW ALL PROJECT INFO");
    printf("\n\n\xDB\xB2 C.UPDATE EXISTING PROJECT INFO");
    printf("\n\n\xDB\xB2 D.DELETE A PROJECT");
    printf("\n\n\xDB\xB2 E.BACK TO MAIN MENU");
label4:
    printf("\n\n\n\xDB\xDB\xB2 CHOSE THE OPTION(A/B/C/D/E): ");

    // Choose User Input
    fflush(stdin);
    scanf("%c", &subMenu_choice);
    subMenu_choice = toupper(subMenu_choice);
    switch (subMenu_choice)
    {
    case 'A':
        createNewProject();
        break;
    case 'B':
        viewAllProjectInfo();
        break;
    case 'C':
        updateProjectInfo();
        break;
    case 'D':
        deleteProjectInfo();
        break;
    case 'E':
        printf("\nBack Successfully\n");
        menu();
        break;
    default:
        printf("\nInvalid Input!\nTry again!!\n");
        goto label4;
    }
}

void createNewProject()
{
    system("cls");
    struct project;
    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n\xDB\xDB\xB2================================ PROVIDE ALL INFORMATION ABOUT THE PROJECT ==============================\xB2\xDB\xDB\n\n\n");

    projectInfo.projectCode = managePID() + 1;
    fflush(stdin);

    printf("\xB2 Please Enter Project Type (Fish/Poultry): ");
    fflush(stdin);
    gets(projectInfo.projectType);

    printf("\xB2 Please your Project id: ");
    fflush(stdin);
    gets(projectInfo.projectId);

    printf("\xB2 Please Enter Project Name/Title: ");
    fflush(stdin);
    gets(projectInfo.projectName);

    printf("\xB2 Please Provide Short Details About Projcet: ");
    fflush(stdin);
    gets(projectInfo.projectShortDes);

    printf("\xB2 Please Enter Project Start Date: ");
    fflush(stdin);
    gets(projectInfo.startDate);

    printf("\xB2 Please Enter Project End Date: ");
    fflush(stdin);
    gets(projectInfo.endDate);

    printf("\xB2 Please Enter the Estimated Budget: ");
    fflush(stdin);
    scanf("%f", &projectInfo.estimatedBudget);

    saveProjectInfo();

add_record:
    printf("\n\t\t\t1.Do You Want To Add Another new Project info?\n\t\t\t0.Project Menu");
    printf("\n\t\t\tEnter Your Choose: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        createNewProject();
    }
    else if (choice == 0)
    {
        subMenu();
    }
    else
    {
        printf("\n\t\t\tInvalid Input! Please enter a valid choice");
        goto add_record;
    }
}
void saveProjectInfo()
{
    filetooperate = fopen("projectinformation.txt", "a");
    fwrite(&projectInfo, sizeof(struct Project), 1, filetooperate);
    if (fwrite != 0)
    {
        printf("\nSuccessfully Saved\n");
    }
    else
    {
        printf("\nSomething went wrong\n");
    }
    fclose(filetooperate);
}
int managePID()
{
    int current_id = 0;
    filetooperate = fopen("projectinformation.txt", "r");
    while (fread(&projectInfo, sizeof(struct Project), 1, filetooperate))
    {
        current_id = projectInfo.projectCode;
    }
    fclose(filetooperate);
    return current_id;
}

void viewAllProjectInfo()
{
    system("cls");
    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    filetooperate = fopen("projectinformation.txt", "r");
    printf("\n\n\t\t\t================= All PROJECT INFORMATION =================\n\t\t");
    printf("\n\nPROJECT CODE\tPROJECT ID\tPROJECT TYPE\tPROJECT NAME\tPROJECT SHORT DESCRIPTION\tStart Date\tEnd Date\t\tESTIMATED BUDGET");
    while (fread(&projectInfo, sizeof(struct Project), 1, filetooperate))
    {
        printf("\n\n%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%.3f\n", projectInfo.projectCode, projectInfo.projectId, projectInfo.projectType, projectInfo.projectName, projectInfo.projectShortDes, projectInfo.startDate, projectInfo.endDate, projectInfo.estimatedBudget);
    }
    fclose(filetooperate);

add_record1:
    printf("\n\n\n\n\t\xB2 1.Project Menu\n\t\xB2 2.Main Menu\n\t\xB2 3. Exit");
    printf("\n\t\xB2 Enter Your Choose: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        subMenu();
    }
    else if (choice == 2)
    {
        menu();
    }
    else if (choice == 3)
    {
        exit(0);
    }
    else
    {
        printf("\n\t\xB2Invalid Input! Please enter a valid choice");
        goto add_record1;
    }
}
// ======================= UPDATE YOUR PROJECT =====================
void updateProjectInfo()
{
    system("cls");
    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n\n================= UPDATE PROJECT INFORMATION =================\n\n");

    printf("\n\xB2 PLEASE ENTER PROJECT CODE YOU WANT TO MODIFY: ");
    int p_id;
    fflush(stdin);
    scanf("%d", &p_id);
    filetooperate = fopen("projectinformation.txt", "r+");
    int found = 0;
    while (fread(&projectInfo, sizeof(struct Project), 1, filetooperate))
    {
        if (projectInfo.projectCode == p_id)
        {
            found = 1;
            printf("\n\n=================PROVIDE ALL THE NECESSARY INFORMATION ABOUT THE PROJECT=================\n\n");

            printf("Please Enter Project Type (Fish/Poultry): ");
            fflush(stdin);
            gets(projectInfo.projectType);

            printf("Enter the project ID: ");
            fflush(stdin);
            gets(projectInfo.projectId);

            printf("Please Enter Project Name/Title: ");
            fflush(stdin);
            gets(projectInfo.projectName);

            printf("Please Provide Short Details About Projcet: ");
            fflush(stdin);
            gets(projectInfo.projectShortDes);

            printf("Please Enter Project Start Date: ");
            fflush(stdin);
            gets(projectInfo.startDate);

            printf("Please Enter Project End Date: ");
            fflush(stdin);
            gets(projectInfo.endDate);

            printf("Please Enter the Estimated Budget: ");
            fflush(stdin);
            scanf("%f", &projectInfo.estimatedBudget);

            fseek(filetooperate, -sizeof(projectInfo), SEEK_CUR);
            fwrite(&projectInfo, sizeof(struct Project), 1, filetooperate);
            break;
        }
    }
    fclose(filetooperate);
    if (found == 1)
    {
        printf("\nPROJECT INFO HAS UPDATED");
    }
    else
    {
        printf("\nPROJECT ID NOT FOUND ON OUR DATABASE");
    }
update_project:
    printf("\n\t\t\t1.Do You Want To Modify Another  Project info?\n\t\t\t2.Project Menu\n\t\t\t3.Main Menu");
    printf("\n\t\tEnter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        updateProjectInfo();
    }
    else if (choice == 2)
    {
        subMenu();
    }
    else if (choice == 3)
    {
        menu();
    }
    else
    {
        printf("\n\t\t\tInvalid Input! Please enter a valid choice");
        goto update_project;
    }
}

// ===================== Delete project function =========================
void deleteProjectInfo()
{
     printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    FILE *remove_file;
    int p_id;
    printf("\n=================DELETE YOUR PROJECT=================\n");
    printf("\n\n\n \xB2 ENTER THE PROJECT CODE YOU WANT DELETE: ");
    fflush(stdin);
    scanf("%d", &p_id);

    filetooperate = fopen("projectinformation.txt", "r+");
    remove_file = fopen("temp.txt", "a+");
    if (filetooperate == NULL)
    {
        fprintf(stderr, "THIS FILE CAN NOT BE OPENED");
        exit(0);
    }
    while (fread(&projectInfo, sizeof(struct Project), 1, filetooperate))
    {
        if (projectInfo.projectCode != p_id)
        {
            fwrite(&projectInfo, sizeof(struct Project), 1, remove_file);
        }
    }
    fclose(filetooperate);
    fclose(remove_file);

    remove("projectinformation.txt");
    rename("temp.txt", "projectinformation.txt");
    printf("\nproject information delete successfuly\n");

delete_record:
    printf("\n\t\xB2 1.DO YOU WANT TO DELETE ANOTHER PROJECT INFO?\n\t\xB2 2.PROJECT MENU\n\t\xB2 3.MAIN MENU");
    printf("\n\t\xB2 Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        deleteProjectInfo();
    }
    else if (choice == 2)
    {
        subMenu();
    }
    else if (choice == 3)
    {
        menu();
    }
    else
    {
        printf("\n\tINVALID INPUT..........PLEASE ENTER A VALID CHOICE");
        goto delete_record;
    }
}

//..........................expense section....................//
void subMenu_2()
{

    system("cls");
    char subMenu_choice;

    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n============================================== MANAGE THE EXPENSE SECTION ==============================================\n\n");
    printf("\n\n\xDB\xDB\xB2 A.CREATE NEW EXPENSE INFO");
    printf("\n\n\xDB\xDB\xB2 B.VIEW ALL EXPENSE INFO");
    printf("\n\n\xDB\xDB\xB2 C.UPDATE EXISTING EXPENSE INFO");
    printf("\n\n\xDB\xDB\xB2 D.DELETE A EXPENSE INFO");
    printf("\n\n\xDB\xDB\xB2 E.BACK TO MAIN MENU");
label4:
    printf("\n\nCHOSE THE OPTION(A/B/C/D/E): ");

    // Choose User Input
    fflush(stdin);
    scanf("%c", &subMenu_choice);
    subMenu_choice = toupper(subMenu_choice);
    switch (subMenu_choice)
    {
    case 'A':
        createNewExpense();
        break;
    case 'B':
        viewAllExpenseInfo();
        break;
    case 'C':
        updateExpenseInfo();
        break;
    case 'D':
        deleteExpenseInfo();
        break;
    case 'E':
        printf("\nBack Successfully\n");
        menu();
        break;
    default:
        printf("\nInvalid Input!\nTry again!!\n");
        goto label4;
    }
}

void createNewExpense()
{
    system("cls");
    struct expense;
    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n====================================== PROVIDE ALL INFORMATION ABOUT THE EXPENSES ====================================\n\n\n");

    fflush(stdin);
    expenseInfo.projectCode = expensePID() + 1;

    printf("\xB2 Please Enter expense Type (Fish/Poultry): ");
    fflush(stdin);
    gets(expenseInfo.expenseType);

    printf("\xB2 Please Enter expense ID: ");
    fflush(stdin);
    gets(expenseInfo.expenseId);

    printf("\xB2 Please Enter expense Name/Title: ");
    fflush(stdin);
    gets(expenseInfo.productName);

    printf("\xB2 Please Provide the expense date: ");
    fflush(stdin);
    gets(expenseInfo.expenseDate);

    printf("\xB2 Please Enter supplier information: ");
    fflush(stdin);
    gets(expenseInfo.supplierInfo);

    printf("\xB2 Please Enter the expense amount: ");
    fflush(stdin);
    scanf("%f", &expenseInfo.expenseAmount);

    saveExpenseInfo();

add_record:
    printf("\n\n\t\xB2 1.Do You Want To Add Another new EXPENSE info?\n\t\xB2 0.Expense Menu");
    printf("\n\t\t\tEnter Your Choose: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        createNewExpense();
    }
    else if (choice == 0)
    {
        subMenu_2();
    }
    else if (choice == 2)
    {
        createNewExpense();
    }
    else
    {
        printf("\n\t\t\tInvalid Input! Please enter a valid choice");
        goto add_record;
    }
}
void saveExpenseInfo()
{
    filetooperate = fopen("expenseinformation.txt", "a");
    fwrite(&expenseInfo, sizeof(struct expense), 1, filetooperate);
    if (fwrite != 0)
    {
        printf("\nSuccessfully Saved\n");
    }
    else
    {
        printf("\nSomething went wrong\n");
    }
    fclose(filetooperate);
}

int expensePID()
{
    int current_id = 0;
    filetooperate = fopen("expenseinformation.txt", "r");
    while (fread(&expenseInfo, sizeof(struct expense), 1, filetooperate))
    {
        current_id = expenseInfo.projectCode;
    }
    fclose(filetooperate);
    return current_id;
}
void viewAllExpenseInfo()
{
    system("cls");
     printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    filetooperate = fopen("expenseinformation.txt", "r");
    printf("\n\n=================================== All EXPENSE INFO =======================================\n\n");
    printf("\n\nPROJECT CODE\tEXPENSE ID\tEXPENSE ITEM NAME\tEXPENSE TYPE\tEXPENSE DATE\tSUPPLIER INFORMATIO\t\tEXPENSE AMOUNT\n");
    while (fread(&expenseInfo, sizeof(struct expense), 1, filetooperate))
    {
        printf("\n\n%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%.3f\n", expenseInfo.projectCode, expenseInfo.expenseId, expenseInfo.productName, expenseInfo.expenseType, expenseInfo.expenseDate, expenseInfo.supplierInfo, expenseInfo.expenseAmount);
    }
    fclose(filetooperate);

add_record1:
    printf("\n\t\xB2 1.Expense Menu\n\t\xB2 2.Main Menu\n\t\xB2 3. Exit");
    printf("\n\t\xB2 Enter Your Choose: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        subMenu_2();
    }
    else if (choice == 2)
    {
        menu();
    }
    else if (choice == 3)
    {
        exit(0);
    }
    else
    {
        printf("\n\t\t\tInvalid Input! Please enter a valid choice");
        goto add_record1;
    }
}
// ======================= UPDATE YOUR EXPENSE =======================
void updateExpenseInfo()
{
    system("cls");
     printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n\n========================= UPDATE EXPENSE INFORMATION =========================\n\n");

    printf("\n\xB2 PLEASE ENTER PROJECT CODE YOU WANT TO MODIFY: ");
    int p_id;
    fflush(stdin);
    scanf("%d", &p_id);
    filetooperate = fopen("expenseinformation.txt", "r+");
    int found = 0;
    while (fread(&expenseInfo, sizeof(struct expense), 1, filetooperate))
    {
        if (expenseInfo.projectCode == p_id)
        {
            found = 1;
            printf("\n======================= PROVIDE ALL THE NECESSARY INFOMATION ABOUT THE EXPENSE =========================\n\n");

            printf("Please Enter expense Type (Fish/Poultry): ");
            fflush(stdin);
            gets(expenseInfo.expenseType);

            printf("Please Enter expense ID: ");
            fflush(stdin);
            gets(expenseInfo.expenseId);

            printf("Please Enter expense Name/Title: ");
            fflush(stdin);
            gets(expenseInfo.productName);

            printf("Please Provide the expense date: ");
            fflush(stdin);
            gets(expenseInfo.expenseDate);

            printf("Please Enter supplier information: ");
            fflush(stdin);
            gets(expenseInfo.supplierInfo);

            printf("Please Enter the expense amount: ");
            fflush(stdin);
            scanf("%f", &expenseInfo.expenseAmount);

            fseek(filetooperate, -sizeof(expenseInfo), SEEK_CUR);
            fwrite(&expenseInfo, sizeof(struct expense), 1, filetooperate);
            break;
        }
    }
    fclose(filetooperate);
    if (found == 1)
    {
        printf("\nEXPENSE INFO HAS UPDATED");
    }
    else
    {
        printf("\nEXPENSE ID NOT FOUND ON OUR DATABASE");
    }
update_project:
    printf("\n\t\t\t1.Do You Want To Modify Another  Expense info?\n\t\t\t2.expense Menu\n\t\t\t3.Main Menu");
    printf("\n\t\tEnter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        updateExpenseInfo();
    }
    else if (choice == 2)
    {
        subMenu_2();
    }
    else if (choice == 3)
    {
        menu();
    }
    else
    {
        printf("\n\t\t\tInvalid Input! Please enter a valid choice");
        goto update_project;
    }
}
// ======================= Delete project =======================
void deleteExpenseInfo()
{
    FILE *remove_file;
    int p_id;
    printf("\n======================= DELETE YOUR EXPENSE =======================");
    printf("\n\nENTER THE PROJECT CODE YOU WANT TO DELETE: ");
    fflush(stdin);
    scanf("%d", &p_id);

    filetooperate = fopen("expenseinformation.txt", "r+");
    remove_file = fopen("temp.txt", "a+");
    if (filetooperate == NULL)
    {
        fprintf(stderr, "THIS FILE CAN NOT BE OPENED");
        exit(0);
    }
    while (fread(&expenseInfo, sizeof(struct expense), 1, filetooperate))
    {
        if (expenseInfo.projectCode != p_id)
        {
            fwrite(&expenseInfo, sizeof(struct expense), 1, remove_file);
        }
    }
    fclose(filetooperate);
    fclose(remove_file);

    remove("expenseinformation.txt");
    rename("temp.txt", "expenseinformation.txt");
    printf("\nproject information delete successfuly\n");

delete_record:
    printf("\n\t\xB2 1.DO YOU WANT TO DELETE ANOTHER EXPENSE INFO?\n\t\xB2 2.EXPENSE MENU\n\t\xB2 3.MAIN MENU");
    printf("\n\t\xB2 Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        deleteExpenseInfo();
    }
    else if (choice == 2)
    {
        subMenu_2();
    }
    else if (choice == 3)
    {
        menu();
    }
    else
    {
        printf("\n\t\tINVALID INPUT..........PLEASE ENTER A VALID CHOICE");
        goto delete_record;
    }
}
//------------------------FEED HISTORY SECTION---------------------------//
void subMenu_3()
{

    system("cls");
    char subMenu_choice;
    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n\n========================= FEED HISTORY SECTION =======================\n\n");
    printf("\n\n\xDB\xDB\xDB\xB2 A.CREATE NEW FEED HISTORY INFO");
    printf("\n\n\xDB\xDB\xDB\xB2 B.VIEW ALL FEED HISTORY INFO");
    printf("\n\n\xDB\xDB\xDB\xB2 C.UPDATE EXISTING FEED HISTORY INFO");
    printf("\n\n\xDB\xDB\xDB\xB2 D.DELETE A FEED HISTORY");
    printf("\n\n\xDB\xDB\xDB\xB2 E.BACK TO MAIN MENU");
label4:
    printf("\n\n    CHOSE THE OPTION(A/B/C/D/E): ");

    // Choose User Input
    fflush(stdin);
    scanf("%c", &subMenu_choice);
    subMenu_choice = toupper(subMenu_choice);
    switch (subMenu_choice)
    {
    case 'A':
        createNewFeedHistory();
        break;
    case 'B':
        viewFeedHistoryInfo();
        break;
    case 'C':
        updateFeedHistoryInfo();
        break;
    case 'D':
        deleteFeedHistory();
        break;
    case 'E':
        printf("\nBack Successfully\n");
        menu();
        break;
    default:
        printf("\nInvalid Input!\nTry again!!\n");
        goto label4;
    }
}

void createNewFeedHistory()
{
    system("cls");
     printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    struct feed;

    printf("\n\n=========================== PROVIDE ALL INFORMATION ABOUT FEED HISTORY ==================\n\n");

    fflush(stdin);
    feedInfo.projectCode = feedPID() + 1;

    printf("\xB2 Please Enter Feed ID: ");
    fflush(stdin);
    gets(feedInfo.feedId);

    printf("\xB2 Please Provide the feed history date: ");
    fflush(stdin);
    gets(feedInfo.feedDate);

    printf("\xB2 Please Enter food timing: ");
    fflush(stdin);
    gets(feedInfo.feedTiming);

    printf("\xB2 Please Enter food quantity(KG): ");
    fflush(stdin);
    scanf("%f", &feedInfo.feedQuantity);

    printf("\xB2 Please Enter food catagory: ");
    fflush(stdin);
    gets(feedInfo.feedCatagory);

    saveFeedHistoryInfo();

add_record:
    printf("\n\t\xB2 1.Do You Want To Add Another new Feed History info?\n\t\xB2 0.Feed Menu");
    printf("\n\t\xB2 Enter Your Choose: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        createNewFeedHistory();
    }
    else if (choice == 0)
    {
        subMenu_3();
    }
    else
    {
        printf("\n\t\t\tInvalid Input! Please enter a valid choice");
        goto add_record;
    }
}
void saveFeedHistoryInfo()
{
    filetooperate = fopen("feedhistoryinformation.txt", "a");
    fwrite(&feedInfo, sizeof(struct feed), 1, filetooperate);
    if (fwrite != 0)
    {
        printf("\nSuccessfully Saved\n");
    }
    else
    {
        printf("\nSomething went wrong\n");
    }
    fclose(filetooperate);
}

int feedPID()
{
    int current_id = 0;
    filetooperate = fopen("feedhistoryinformation.txt", "r");
    while (fread(&feedInfo, sizeof(struct feed), 1, filetooperate))
    {
        current_id = feedInfo.projectCode;
    }
    fclose(filetooperate);
    return current_id;
}
void viewFeedHistoryInfo()
{
    system("cls");
    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    filetooperate = fopen("feedhistoryinformation.txt", "r");
    printf("\n\n======================= ALL FEED HISTORY MINFORMATION =======================\n");
    printf("\n\nPROJECT CODE\t\tFEED ID\t\tFEED DATE\tFEED TIMING\tFEED QUANTITY\tFEED CATAGORY\n");
    while (fread(&feedInfo, sizeof(struct feed), 1, filetooperate))
    {
        printf("\n\n%d\t\t%s\t\t%s\t\t%s\t\t%.2f KG\t\t%s\n", feedInfo.projectCode, feedInfo.feedId, feedInfo.feedDate, feedInfo.feedTiming, feedInfo.feedQuantity, feedInfo.feedCatagory);
    }
    fclose(filetooperate);

add_record1:
    printf("\n\t\xB2 1.Feed Menu\n\t\xB2 2.Main Menu\n\t\xB2 3. Exit");
    printf("\n\t\t\tEnter Your Choose: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        subMenu_3();
    }
    else if (choice == 2)
    {
        menu();
    }
    else if (choice == 3)
    {
        exit(0);
    }
    else
    {
        printf("\n\t\t\tInvalid Input! Please enter a valid choice");
        goto add_record1;
    }
}
// UPDATE YOUR FEED HISTORY
void updateFeedHistoryInfo()
{
    system("cls");
     printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n\n======================= UPDATE FEED HISTORY MINFORMATION =======================\n\n");

    printf("\n\n\xB2 PLEASE ENTER PROJECT CODE YOU WANT TO MODIFY: ");
    int p_id;
    fflush(stdin);
    scanf("%d", &p_id);
    filetooperate = fopen("feedhistoryinformation.txt", "r+");
    int found = 0;
    while (fread(&feedInfo, sizeof(struct feed), 1, filetooperate))
    {
        if (feedInfo.projectCode == p_id)
        {
            found = 1;
            printf("\n=================== PROVIDE ALL THE NECESSARY INFORMATION ABOUT THE FEED HISTORY ============================\n\n");

            printf("Please Enter Feed ID: ");
            fflush(stdin);
            gets(feedInfo.feedId);

            printf("Please Provide the feed history date: ");
            fflush(stdin);
            gets(feedInfo.feedDate);

            printf("Please Enter food timing: ");
            fflush(stdin);
            gets(feedInfo.feedTiming);

            printf("Please Enter food quantity(KG): ");
            fflush(stdin);
            scanf("%f", &feedInfo.feedQuantity);

            printf("Please Enter food catagory: ");
            fflush(stdin);
            gets(feedInfo.feedCatagory);

            fseek(filetooperate, -sizeof(feedInfo), SEEK_CUR);
            fwrite(&feedInfo, sizeof(struct feed), 1, filetooperate);
            break;
        }
    }
    fclose(filetooperate);
    if (found == 1)
    {
        printf("\n\nFEED HISTORY INFO HAS UPDATED");
    }
    else
    {
        printf("\n\nFEED HISTORY ID NOT FOUND ON OUR DATABASE");
    }
update_project:
    printf("\n\t\t\t1.Do You Want To Modify Another  Feed history info?\n\t\t\t2.Feed history Menu\n\t\t\t3.Main Menu");
    printf("\n\t\tEnter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        updateFeedHistoryInfo();
    }
    else if (choice == 2)
    {
        subMenu_3();
    }
    else if (choice == 3)
    {
        menu();
    }
    else
    {
        printf("\n\t\t\tInvalid Input! Please enter a valid choice");
        goto update_project;
    }
}
// ========================Delete feed history ====================
void deleteFeedHistory()
{
    FILE *remove_file;
    int p_id;
    printf("\n======================= DELETE FEED HISTORY INFO =======================");
    printf("\n\n\xB2 ENTER THE PROJECT CODE YOU WANT TO DELETE: ");
    fflush(stdin);
    scanf("%d", &p_id);

    filetooperate = fopen("feedhistoryinformation.txt", "r+");
    remove_file = fopen("temp.txt", "a+");
    if (filetooperate == NULL)
    {
        fprintf(stderr, "THIS FILE CAN NOT BE OPENED");
        exit(0);
    }
    while (fread(&feedInfo, sizeof(struct feed), 1, filetooperate))
    {
        if (feedInfo.projectCode != p_id)
        {
            fwrite(&feedInfo, sizeof(struct feed), 1, remove_file);
        }
    }
    fclose(filetooperate);
    fclose(remove_file);

    remove("feedhistoryinformation.txt");
    rename("temp.txt", "feedhistoryinformation.txt");
    printf("\nproject information delete successfuly\n");

delete_record:
    printf("\n\t\xB2 1.DO YOU WANT TO DELETE ANOTHER FEED HISTORY INFO?\n\t\xB2 2.FEED HISTORY MENU\n\t\xB2 3.MAIN MENU");
    printf("\n\t\tEnter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        deleteFeedHistory();
    }
    else if (choice == 2)
    {
        subMenu_3();
    }
    else if (choice == 3)
    {
        menu();
    }
    else
    {
        printf("\n\t\tINVALID INPUT..........PLEASE ENTER A VALID CHOICE");
        goto delete_record;
    }
}

//-----------------------------manage selling section----------------------------
void subMenu_4()
{

    system("cls");
    char subMenu_choice;

    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n===============================================SELLING INFORMATION SECTION============================================\n\n");
    printf("\n\n\xDB\xDB\xDB\xB2 A.CREATE NEW SELLING INFO");
    printf("\n\n\xDB\xDB\xDB\xB2 B.VIEW ALL SELLING INFO");
    printf("\n\n\xDB\xDB\xDB\xB2 C.UPDATE EXISTING SELLING INFO");
    printf("\n\n\xDB\xDB\xDB\xB2 D.DELETE A SELLING INFO");
    printf("\n\n\xDB\xDB\xDB\xB2 E.BACK TO MAIN MENU");
label4:
    printf("\n\nCHOSE THE OPTION(A/B/C/D/E): ");

    // ====================Choose User Input================
    fflush(stdin);
    scanf("%c", &subMenu_choice);
    subMenu_choice = toupper(subMenu_choice);
    switch (subMenu_choice)
    {
    case 'A':
        addNewSellingInfo();
        break;
    case 'B':
        viewAllSellingHistory();
        break;
    case 'C':
        updateSellingInformation();
        break;
    case 'D':
        deleteSellingInformation();
        break;
    case 'E':
        printf("\nBack Successfully\n");
        menu();
        break;
    default:
        printf("\nInvalid Input!\nTry again!!\n");
        goto label4;
    }
}

void addNewSellingInfo()
{
    system("cls");
    struct sell;
    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n=======================================PROVIDE ALL INFORMATION ABOUT THE SELLING====================================\n\n\n");

    fflush(stdin);
    sellInfo.projectCode = sellPID() + 1;

    printf("\xB2 Please Enter Selling ID: ");
    fflush(stdin);
    gets(sellInfo.sellingId);

    printf("\xB2 Please Enter selling date: ");
    fflush(stdin);
    gets(sellInfo.sellingDate);

    printf("\xB2 Please Enter the buyer information: ");
    fflush(stdin);
    gets(sellInfo.buyerInfo);

    printf("\xB2 Please Provide selling quantity(KG): ");
    fflush(stdin);
    scanf("%fKG", &sellInfo.sellProductQuantity);

    printf("\xB2 Please Enter the unit price(TK): ");
    fflush(stdin);
    scanf("%f", &sellInfo.unitPrice);

    printf("\xB2 The total amount is: %.3f TK", sellInfo.totalSellAmount = sellInfo.sellProductQuantity * sellInfo.unitPrice);

    saveSellingInformation();

add_record:
    printf("\n\t\xB2 1.Do You Want To Add Another new Selling info?\n\t\xB2 0.Selling Menu");
    printf("\n\t\xB2 tEnter Your Choose: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        addNewSellingInfo();
    }
    else if (choice == 0)
    {
        subMenu_4();
    }
    else
    {
        printf("\n\t\t\tInvalid Input! Please enter a valid choice");
        goto add_record;
    }
}
void saveSellingInformation()
{
    filetooperate = fopen("sellinginformation.txt", "a");
    fwrite(&sellInfo, sizeof(struct sell), 1, filetooperate);
    if (fwrite != 0)
    {
        printf("\nSuccessfully Saved\n");
    }
    else
    {
        printf("\nSomething went wrong\n");
    }
    fclose(filetooperate);
}

int sellPID()
{
    int current_id = 0;
    filetooperate = fopen("sellinginformation.txt", "r");
    while (fread(&sellInfo, sizeof(struct sell), 1, filetooperate))
    {
        current_id = sellInfo.projectCode;
    }
    fclose(filetooperate);
    return current_id;
}

void viewAllSellingHistory()
{
    system("cls");
     printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    filetooperate = fopen("sellinginformation.txt", "r");
    printf("\n\n============================== ALL SELLING INFORMATION ==============================\n");
    printf("\n\nPROJECT CODE\t\tSELLING ID\t\tSELLING DATE\t\tBUYER INFO\t\tSELL QUANTITY\t\tUNIT PRICE\t\tTOTAL AMOUNT\n");
    while (fread(&sellInfo, sizeof(struct sell), 1, filetooperate))
    {

        printf("\n\n%d\t\t%s\t\t%s\t\t%s\t\t%.3f KG\t\t%.3f TK\t\t%.3f TK\n", sellInfo.projectCode, sellInfo.sellingId, sellInfo.sellingDate, sellInfo.buyerInfo, sellInfo.sellProductQuantity, sellInfo.unitPrice, sellInfo.totalSellAmount = sellInfo.sellProductQuantity * sellInfo.unitPrice);
    }
    fclose(filetooperate);

add_record1:
    printf("\n\t\xB21.Selling Menu\n\t\xB2 2.Main Menu\n\t\xB2 3. Exit");
    printf("\n\t\xB2 Enter Your Choose: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        subMenu_4();
    }
    else if (choice == 2)
    {
        menu();
    }
    else if (choice == 3)
    {
        exit(0);
    }
    else
    {
        printf("\n\t\xB2 Invalid Input! Please enter a valid choice");
        goto add_record1;
    }
}
//  UPDATE YOUR SELLING HISTORY
void updateSellingInformation()
{
    system("cls");
     printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n\n############## UPDATE SELLING HISTORY INFORMATION ##################\n\n");

    printf("\n\xB2 PLEASE ENTER PROJECT CODE YOU WANT TO MODIFY: ");
    int p_id;
    fflush(stdin);
    scanf("%d", &p_id);
    filetooperate = fopen("sellinginformation.txt", "r+");
    int found = 0;
    while (fread(&sellInfo, sizeof(struct sell), 1, filetooperate))
    {
        if (sellInfo.projectCode == p_id)
        {
            found = 1;
            printf("\nProvide all necessary information about the selling\n\n");

            printf("\xB2 Please Enter project ID: ");
            fflush(stdin);
            gets(sellInfo.sellingId);

            printf("\xB2 Please Enter selling date: ");
            fflush(stdin);
            gets(sellInfo.sellingDate);

            printf("\xB2 Please Enter the buyer information: ");
            fflush(stdin);
            gets(sellInfo.buyerInfo);

            printf("\xB2 Please Provide selling quantity(KG): ");
            fflush(stdin);
            scanf("%f", &sellInfo.sellProductQuantity);

            printf("\xB2 Please Enter the unit price(TK): ");
            fflush(stdin);
            scanf("%f", &sellInfo.unitPrice);

            printf("\xB2 The toatal amount is: %.3f TK", sellInfo.sellProductQuantity * sellInfo.unitPrice);


            fseek(filetooperate, -sizeof(sellInfo), SEEK_CUR);
            fwrite(&sellInfo, sizeof(struct sell), 1, filetooperate);
            break;
        }
    }
    fclose(filetooperate);
    if (found == 1)
    {
        printf("\nSELLING HISTORY INFO HAS UPDATED");
    }
    else
    {
        printf("\nSELLING HISTORY ID NOT FOUND ON OUR DATABASE");
    }
update_project:
    printf("\n\t\xB2 1.Do You Want To Modify Another  Selling history info?\n\t\xB2 2.Selling history Menu\n\t\xB2 3.Main Menu");
    printf("\n\t\tEnter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        updateSellingInformation();
    }
    else if (choice == 2)
    {
        subMenu_4();
    }
    else if (choice == 3)
    {
        menu();
    }
    else
    {
        printf("\n\t\xB2 Invalid Input! Please enter a valid choice");
        goto update_project;
    }
}
// ######################### Delete project ###########################
void deleteSellingInformation()
{
    FILE *remove_file;
    int p_id;
    printf("\n===================== DELETE YOUR SELLING INFO ====================");
    printf("\n\n\xB2 ENTER THE PROJECT CODE THAT YOU WANT TO DELETE: ");
    fflush(stdin);
    scanf("%d", &p_id);

    filetooperate = fopen("sellinginformation.txt", "r+");
    remove_file = fopen("temp.txt", "a+");
    if (filetooperate == NULL)
    {
        fprintf(stderr, "THIS FILE CAN NOT BE OPENED");
        exit(0);
    }
    while (fread(&sellInfo, sizeof(struct sell), 1, filetooperate))
    {
        if (sellInfo.projectCode != p_id)
        {
            fwrite(&sellInfo, sizeof(struct sell), 1, remove_file);
        }
    }
    fclose(filetooperate);
    fclose(remove_file);

    remove("sellinginformation.txt");
    rename("temp.txt", "sellinginformation.txt");
    printf("\nproject information delete successfuly\n");

delete_record:
    printf("\n\t\xB2 1.DO YOU WANT TO DELETE ANOTHER SELLING HISTORY INFO?\n\t\xB2 2.SELLING HISTORY MENU\n\t\xB2 3.MAIN MENU");
    printf("\n\t\xB2 Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        deleteSellingInformation();
    }
    else if (choice == 2)
    {
        subMenu_4();
    }
    else if (choice == 3)
    {
        menu();
    }
    else
    {
        printf("\n\tINVALID INPUT..........PLEASE ENTER A VALID CHOICE");
        goto delete_record;
    }
}
/////manage employee salary section
void subMenu_5()
{

    system("cls");
     printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    char subMenu_choice;

    printf("\n\n================= EMPLOYEE SALARY SECTION =================\n\n");
    printf("\n\n\xDB\xDB\xB2 A.CREATE NEW EMPLOYEE SALARY INFO");
    printf("\n\n\xDB\xDB\xB2 B.VIEW ALL EMPLOYEE SALARY INFO");
    printf("\n\n\xDB\xDB\xB2 C.UPDATE EXISTING EMPLOYEE SALARY INFO");
    printf("\n\n\xDB\xDB\xB2 D.DELETE AN EMPLOYEE SALARY INFO");
    printf("\n\n\xDB\xDB\xB2 E.BACK TO MAIN MENU");
label4:
    printf("\n\nCHOSE THE OPTION(A/B/C/D/E): ");
    // Choose User Input
    fflush(stdin);
    scanf("%c", &subMenu_choice);
    subMenu_choice = toupper(subMenu_choice);
    switch (subMenu_choice)
    {
    case 'A':
        addNewEmployeeInfo();
        break;
    case 'B':
        viewAllEmployeesInfo();
        break;
    case 'C':
        updateEmployeeSalaryInfo();
        break;
    case 'D':
        deleteEmployeeSalaryInfo();
        break;
    case 'E':
        printf("\nBack Successfully\n");
        menu();
        break;
    default:
        printf("\nInvalid Input!\nTry again!!\n");
        goto label4;
    }
}

void addNewEmployeeInfo()
{
    system("cls");
    struct employee;

    printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n\n=========== CREATE NEW EMPLOYEE INFO ============\n\n");
    fflush(stdin);
    employeeInfo.projectCode = employee_PID() + 1;

    printf("\xB2 Please Enter employee name: ");
    fflush(stdin);
    gets(employeeInfo.employeeName);

    printf("\xB2 Please Enter employee ID: ");
    fflush(stdin);
    gets(employeeInfo.employeeId);

    printf("\xB2 Please Enter employee address: ");
    fflush(stdin);
    gets(employeeInfo.employeeAddress);

    printf("\xB2 Please Provide the employee email: ");
    fflush(stdin);
    gets(employeeInfo.employeeEmail);

    printf("\xB2 Please Enter the employee phone number: ");
    fflush(stdin);
    scanf("%d", &employeeInfo.employeeNumber);

    printf("\xB2 Please Enter the employee salary(TK): ");
    fflush(stdin);
    scanf("%f", &employeeInfo.employeeSalary);

    saveEmployeeInfo();

add_record:
    printf("\n\t\xB2 1.Do You Want To Add Another new Employee info?\n\t\xB2 0.Employee Menu");
    printf("\n\t\xB2 Enter Your Choose: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        addNewEmployeeInfo();
    }
    else if (choice == 0)
    {
        subMenu_5();
    }
    else
    {
        printf("\n\t\xB2 Invalid Input! Please enter a valid choice");
        goto add_record;
    }
}
void saveEmployeeInfo()
{
    filetooperate = fopen("employeeinformation.txt", "a");
    fwrite(&employeeInfo, sizeof(struct employee), 1, filetooperate);
    if (fwrite != 0)
    {
        printf("\nSuccessfully Saved\n");
    }
    else
    {
        printf("\nSomething went wrong\n");
    }
    fclose(filetooperate);
}
int employee_PID()
{
    int current_id = 0;
    filetooperate = fopen("employeeinformation.txt", "r");
    while (fread(&employeeInfo, sizeof(struct employee), 1, filetooperate))
    {
        current_id = employeeInfo.projectCode;
    }
    fclose(filetooperate);
    return current_id;
}
void viewAllEmployeesInfo()
{
    system("cls");
    filetooperate = fopen("employeeinformation.txt", "r");
    printf("\n\n============================ ALL EMPLOYEE INFORMATION ================================\n");
    printf("\n\nPROJECT CODE\tEMPLOYEE ID\tEMPLOYEE NAME\tEMPLOYEE ADDRESS\tEMPLOYEE EMAIL\tEMPLOYEE PHONE\tEMPLOYEE SALARY\n");
    while (fread(&employeeInfo, sizeof(struct employee), 1, filetooperate))
    {
        printf("\n\n%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f TK\n", employeeInfo.projectCode, employeeInfo.employeeId, employeeInfo.employeeName, employeeInfo.employeeAddress, employeeInfo.employeeEmail, employeeInfo.employeeNumber, employeeInfo.employeeSalary);
    }
    fclose(filetooperate);

add_record1:
    printf("\n\t\xB2 1.Employee Menu\n\t\xB2 2.Main Menu\n\t\xB2 3. Exit");
    printf("\n\t\xB2 Enter Your Choose: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        subMenu_5();
    }
    else if (choice == 2)
    {
        menu();
    }
    else if (choice == 3)
    {
        exit(0);
    }
    else
    {
        printf("\n\tInvalid Input! Please enter a valid choice");
        goto add_record1;
    }
}
// UPDATE YOUR EMPLOYEE SALARY INFO
void updateEmployeeSalaryInfo()
{
    system("cls");
     printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    printf("\n\n=============== UPDATE EMPLOYEE SALARY INFORMATION =================\n\n");
    printf("\n\xB2 PLEASE ENTER EMPLOYEE ID YOU WANT TO MODIFY: ");
    int p_id;
    fflush(stdin);
    scanf("%d", &p_id);
    filetooperate = fopen("employeeinformation.txt", "r+");
    int found = 0;
    while (fread(&employeeInfo, sizeof(struct employee), 1, filetooperate))
    {
        if (employeeInfo.projectCode == p_id)
        {
            found = 1;
            printf("\n============ PROVIDE ALL THE NECESSARY INFORMATION ABOUT THE EMPLOYEE ===========\n\n");

            printf("\xB2 Please Enter employee name: ");
            fflush(stdin);
            gets(employeeInfo.employeeName);

            printf("\xB2 Please Enter employee ID: ");
            fflush(stdin);
            gets(employeeInfo.employeeId);

            printf("\xB2 Please Enter employee address: ");
            fflush(stdin);
            gets(employeeInfo.employeeAddress);

            printf("\xB2 Please Provide the employee email: ");
            fflush(stdin);
            gets(employeeInfo.employeeEmail);

            printf("\xB2 Please Enter the employee phone number: ");
            fflush(stdin);
            scanf("%d", &employeeInfo.employeeNumber);

            printf("\xB2 Please Enter the employee salary(TK): ");
            fflush(stdin);
            scanf("%f", &employeeInfo.employeeSalary);

            fseek(filetooperate, -sizeof(employeeInfo), SEEK_CUR);
            fwrite(&employeeInfo, sizeof(struct employee), 1, filetooperate);
            break;
        }
    }
    fclose(filetooperate);
    if (found == 1)
    {
        printf("\nEMPLOYEE INFO HAS UPDATED");
    }
    else
    {
        printf("\nEMPLOYEE ID NOT FOUND ON OUR DATABASE");
    }
update_project:
    printf("\n\t\xB2 1.Do You Want To Modify Another  Employee info?\n\t\xB2 2.Employee Menu\n\t\xB2 3.Main Menu");
    printf("\n\t\xB2 Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        updateEmployeeSalaryInfo();
    }
    else if (choice == 2)
    {
        subMenu_5();
    }
    else if (choice == 3)
    {
        menu();
    }
    else
    {
        printf("\n\tInvalid Input! Please enter a valid choice");
        goto update_project;
    }
}

///.Delete project
void deleteEmployeeSalaryInfo()
{
    FILE *remove_file;
    int p_id;
    printf("\n================================== DELETE YOUR EMPLOYEE INFORMATION ==================================");
    printf("\n\nENTER THE PROJECT CODE THAT YOU WANT TO DELETE: ");
    fflush(stdin);
    scanf("%d", &p_id);

    filetooperate = fopen("employeeinformation.txt", "r+");
    remove_file = fopen("temp.txt", "a+");
    if (filetooperate == NULL)
    {
        fprintf(stderr, "THIS FILE CAN NOT BE OPENED");
        exit(0);
    }
    while (fread(&employeeInfo, sizeof(struct employee), 1, filetooperate))
    {
        if (employeeInfo.projectCode != p_id)
        {
            fwrite(&employeeInfo, sizeof(struct employee), 1, remove_file);
        }
    }
    fclose(filetooperate);
    fclose(remove_file);

    remove("employeeinformation.txt");
    rename("temp.txt", "employeeinformation.txt");
    printf("\nproject information delete successfuly\n");

delete_record:
    printf("\n\t\xB2 1.DO YOU WANT TO DELETE ANOTHER EMPLOYEE INFO?\n\t\xB2 2.EMPLOYEE MENU\n\t\xB2 3.MAIN MENU");
    printf("\n\t\tEnter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        deleteEmployeeSalaryInfo();
    }
    else if (choice == 2)
    {
        subMenu_5();
    }
    else if (choice == 3)
    {
        menu();
    }
    else
    {
        printf("\n\tINVALID INPUT..........PLEASE ENTER A VALID CHOICE");
        goto delete_record;
    }
}

//------------------------ Report Generation Section -------------------------
void reportGeneration()
{
    system("cls");
     printf("\t\t------------------------------------------------------------------------------\n\t\t\xDB\xDB\xB2=================MAZUMDAR'S AGRO & FRISHARIES ADMIN PANEL===============\xB2\xDB\xDB\n\t\t------------------------------------------------------------------------------\n");
    int p_id;
    float total_expense = 0, total_sell = 0, total_feed = 0;
    printf("\n---------------------------------------- WELCOME TO REPORT GENERATION INTERFACE ----------------------------------------\n\n\n");
    printf("\xB2 PLEASE ENTER THE PROJECT CODE THAT YOU WANT TO GENERATE REPORT: ");
    fflush(stdin);
    scanf("%d", &p_id);

    printf("\n\n----------------------------------------- REPORT GENETARION INFORMATION ------------------------------------------");

    filetooperate = fopen("expenseinformation.txt", "r");
    while (fread(&expenseInfo, sizeof(struct expense), 1, filetooperate))
    {
        if (expenseInfo.projectCode == p_id)
        {
            total_expense += expenseInfo.expenseAmount;
        }
    }
    fclose(filetooperate);

    filetooperate = fopen("feedhistoryinformation.txt", "r");
    while (fread(&feedInfo, sizeof(struct feed), 1, filetooperate))
    {
        if (feedInfo.projectCode == p_id)
        {
            total_feed += feedInfo.feedQuantity;
        }
    }
    fclose(filetooperate);

    filetooperate = fopen("sellinginformation.txt", "r");
    while (fread(&sellInfo, sizeof(struct sell), 1, filetooperate))
    {
        if (sellInfo.projectCode == p_id)
        {
            total_sell += sellInfo.totalSellAmount;
        }
    }
    fclose(filetooperate);
    printf("\n\nPROJECT CODE: %d", p_id);
    printf("\n\nTHE TOTAL EXPENSE OF THIS PROJECT: %.3f KG", total_expense);
    printf("\n\nTHE TOTAL FEED WERE GIVEN TO THIS PROJECT: %.3f KG", total_feed);
    printf("\n\nTHE TOTAL SELL OF THIS PROJECT: %.3f", total_sell);
    if (total_sell > total_expense)
    {
        printf("\n\nTHE PROJECT HAS MADE INCURRED PROFIT: %.3f TK", total_sell - total_expense);
    }
    else
    {
        printf("\n\nTHE PROJECT HAS MADE INCURRED LOSS: %.3f TK", total_expense - total_sell);
    }

addRecord:
    printf("\n\n\t\xB2 1.DO YOU WANT TO GENERATE ANOTHER PROJECT REPORT?\n\t\xB2 2.MAIN MENU\n\t\xB2 3.EXIT PROGRAM ");
    printf("ENTER THE CHOICE(1/2/3): ");

    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        reportGeneration();
        break;
    case 2:
        menu();
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("INVALID INPUT!!!!! PLEASE ENTER A VALID INPUT(1/2/3)");
        goto addRecord;
        break;
    }
}
