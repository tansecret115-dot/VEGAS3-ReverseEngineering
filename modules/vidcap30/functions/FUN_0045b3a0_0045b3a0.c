/* Module: vidcap30.exe
   Function: FUN_0045b3a0
   Address: 0045b3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045b3a0(FILETIME *param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  _SYSTEMTIME local_150;
  CHAR local_140 [80];
  CHAR local_f0 [80];
  CHAR local_a0 [160];
  
  if ((param_2 != (LPSTR)0x0) && (param_1 != (FILETIME *)0x0)) {
    *param_2 = '\0';
    local_140[0] = '\0';
    local_f0[0] = '\0';
    if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
      FileTimeToSystemTime(param_1,&local_150);
      GetTimeFormatA(0x800,2,&local_150,(LPCSTR)0x0,local_140,0x50);
      GetDateFormatA(0x800,1,&local_150,(LPCSTR)0x0,local_f0,0x50);
      SfPrintF(local_a0,"%s %s",local_f0,local_140);
      lstrcpynA(param_2,local_a0,param_3);
      param_2[param_3 + -1] = '\0';
    }
    iVar1 = lstrlenA(param_2);
    return iVar1;
  }
  return 0;
}


