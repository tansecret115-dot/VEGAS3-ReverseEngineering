/* Module: wavplug.dll
   Function: FUN_5f3822f0
   Address: 5f3822f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3822f0(LPCSTR param_1,DWORD param_2)

{
  char *lpString1;
  
  GetModuleFileNameA(DAT_5f3db378,param_1,param_2);
  lpString1 = FUN_5f3997e0(param_1);
  lstrcpynA(lpString1,"SFWAVPLUG.HLP",(int)(param_1 + (param_2 - (int)lpString1)));
  lpString1[(int)(param_1 + (param_2 - (int)lpString1) + -1)] = '\0';
  return;
}


