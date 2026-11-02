/* Module: wmfplug2.dll
   Function: FUN_00411370
   Address: 00411370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411370(LPCSTR param_1,DWORD param_2)

{
  char *lpString1;
  
  GetModuleFileNameA(DAT_00489d50,param_1,param_2);
  lpString1 = FUN_0042f340(param_1);
  lstrcpynA(lpString1,"SFWMF.HLP",(int)(param_1 + (param_2 - (int)lpString1)));
  lpString1[(int)(param_1 + (param_2 - (int)lpString1) + -1)] = '\0';
  return;
}


