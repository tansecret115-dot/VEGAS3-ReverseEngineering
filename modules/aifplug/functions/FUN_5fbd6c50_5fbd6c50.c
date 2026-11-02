/* Module: aifplug.dll
   Function: FUN_5fbd6c50
   Address: 5fbd6c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5fbd6c50(LPCSTR param_1,DWORD param_2)

{
  char *lpString1;
  
  GetModuleFileNameA(DAT_5fc09908,param_1,param_2);
  lpString1 = FUN_5fbf10d0(param_1);
  lstrcpynA(lpString1,"SFWAVPLUG.HLP",(int)(param_1 + (param_2 - (int)lpString1)));
  lpString1[(int)(param_1 + (param_2 - (int)lpString1) + -1)] = '\0';
  return;
}


