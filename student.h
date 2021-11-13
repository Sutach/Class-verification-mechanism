//create struct student, subject, stack for each subject
struct student
{
  string name;
  string id;
  string major;
  student* next;
  student* pre;
}

struct subject
{
  string subname;
  string subcode;
  int section;
  int capacity; 
  student* next;
  student* pre;
}

struct teacher
{
  string tname;
  string tid;
  string division;
  student* next;
  student* pre;
}

