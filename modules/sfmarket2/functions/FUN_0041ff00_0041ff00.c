/* Module: sfmarket2.dll
   Function: FUN_0041ff00
   Address: 0041ff00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_0041ff00(int param_1,uint param_2,LPCSTR param_3,undefined4 param_4,char *param_5)

{
  long lVar1;
  FILE *pFVar2;
  char *pcVar3;
  undefined4 local_418;
  _SYSTEMTIME local_414;
  LPCRITICAL_SECTION local_404;
  char local_400 [1023];
  undefined1 local_1;
  
  local_418 = 0;
  local_404 = (LPCRITICAL_SECTION)(param_1 + 0x21c);
  EnterCriticalSection(local_404);
  if (*(int *)(param_1 + 4) == 0) {
    local_418 = 0x8004e01b;
  }
  else if ((*(uint *)(param_1 + 0xc) & param_2 & 0xffff) != 0) {
    if ((0 < *(int *)(param_1 + 0x10)) &&
       (lVar1 = ftell(*(FILE **)(param_1 + 8)), *(int *)(param_1 + 0x10) <= lVar1)) {
      fclose(*(FILE **)(param_1 + 8));
      remove((char *)(param_1 + 0x118));
      rename((char *)(param_1 + 0x14),(char *)(param_1 + 0x118));
      pFVar2 = fopen((char *)(param_1 + 0x14),"a+t");
      *(FILE **)(param_1 + 8) = pFVar2;
      if (pFVar2 == (FILE *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        local_418 = 0x8004e007;
        goto LAB_00420128;
      }
    }
    switch(param_2 & 0xffff) {
    case 1:
      pcVar3 = "ERR ";
      break;
    case 2:
      pcVar3 = "WARN";
      break;
    default:
      pcVar3 = "????";
      break;
    case 4:
      pcVar3 = "INFO";
      break;
    case 8:
      pcVar3 = "DBG ";
    }
    sprintf(local_400,pcVar3);
    fprintf(*(FILE **)(param_1 + 8),local_400);
    if ((*(uint *)(param_1 + 0xc) & 0x10000) != 0) {
      local_414.wYear = 0;
      local_414.wMonth = 0;
      local_414.wDayOfWeek = 0;
      local_414.wDay = 0;
      local_414.wHour = 0;
      local_414.wMinute = 0;
      local_414.wSecond = 0;
      local_414.wMilliseconds = 0;
      GetLocalTime(&local_414);
      sprintf(local_400," %02d-%02d-%02d %02d:%02d:%02d ",local_414.wYear,local_414.wMonth,
              local_414.wDay,local_414.wHour,local_414.wMinute,local_414.wSecond);
      fprintf(*(FILE **)(param_1 + 8),local_400);
    }
    if ((*(uint *)(param_1 + 0xc) & 0x20000) != 0) {
      pcVar3 = FUN_004201b0(param_3);
      sprintf(local_400,"%15s(%4d): ",pcVar3,param_4);
      fprintf(*(FILE **)(param_1 + 8),local_400);
    }
    _vsnprintf(local_400,0x3ff,param_5,&stack0x00000018);
    local_1 = 0;
    fprintf(*(FILE **)(param_1 + 8),"%s\n",local_400);
    fflush(*(FILE **)(param_1 + 8));
  }
LAB_00420128:
  LeaveCriticalSection(local_404);
  return local_418;
}


