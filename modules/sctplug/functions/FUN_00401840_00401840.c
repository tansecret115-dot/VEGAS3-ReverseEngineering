/* Module: sctplug.dll
   Function: FUN_00401840
   Address: 00401840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401840(LPCSTR param_1,DWORD param_2)

{
  char *lpString1;
  
  GetModuleFileNameA(DAT_0043cd28,param_1,param_2);
  lpString1 = FUN_0040f1a0(param_1);
  lstrcpynA(lpString1,"SFWAVPLUG.HLP",(int)(param_1 + (param_2 - (int)lpString1)));
  lpString1[(int)(param_1 + (param_2 - (int)lpString1) + -1)] = '\0';
  return;
}


