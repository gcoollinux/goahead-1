#ifndef _JSON_H_
#define _JSON_H_
void jsonDemo(void);
char* jsonNew(void);
char* jsonNewArray(void);
char* jsonClear(char**obj);
int jsonFree(char**obj);
char* jsonAddValue(char**dobj,char*name,char*value);
char* jsonAddObj(char**dobj,char*name,char*obj);
#endif