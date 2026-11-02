/* Module: qt4plug.dll
   Function: FUN_5f520210
   Address: 5f520210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f520210(LPCSTR param_1,DWORD param_2)

{
  char *lpString1;
  
  GetModuleFileNameA(DAT_5f5a4150,param_1,param_2);
  lpString1 = FUN_5f540b40(param_1);
  lstrcpynA(lpString1,"SFQTPLUG.HLP",(int)(param_1 + (param_2 - (int)lpString1)));
  lpString1[(int)(param_1 + (param_2 - (int)lpString1) + -1)] = '\0';
  return;
}


