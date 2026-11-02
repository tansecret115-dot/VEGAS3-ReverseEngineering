/* Module: sfcdi.dll
   Function: DriveDB_ParseOption
   Address: 5bf09140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall DriveDB_ParseOption(char *,char *,char *,unsigned int) */

int DriveDB_ParseOption(char *param_1,char *param_2,char *param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  size_t _MaxCount;
  int iVar3;
  char local_100 [256];
  
                    /* 0x9140  15  ?DriveDB_ParseOption@@YGHPAD00I@Z */
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    param_1 = FUN_5bf08d70(local_100,param_1,0x100);
    _MaxCount = lstrlenA(param_2);
    iVar3 = strncmp(local_100,param_2,_MaxCount);
    if (iVar3 == 0) break;
    cVar1 = *param_1;
  }
  iVar3 = lstrlenA(param_2);
  pcVar2 = local_100;
  if (local_100[iVar3] == '=') {
    pcVar2 = local_100 + 1;
  }
  strncpy(param_3,pcVar2 + iVar3,param_4);
  return 1;
}


