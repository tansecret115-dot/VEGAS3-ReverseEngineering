/* Module: oggplug.dll
   Function: FUN_004065f0
   Address: 004065f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004065f0(LPCSTR param_1,DWORD param_2)

{
  char *lpString1;
  
  GetModuleFileNameA(DAT_00510e90,param_1,param_2);
  lpString1 = FUN_00418870(param_1);
  lstrcpynA(lpString1,"SFWAVPLUG.HLP",(int)(param_1 + (param_2 - (int)lpString1)));
  lpString1[(int)(param_1 + (param_2 - (int)lpString1) + -1)] = '\0';
  return;
}


