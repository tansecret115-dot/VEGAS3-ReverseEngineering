/* Module: extmondrv.dll
   Function: FUN_0040b1c0
   Address: 0040b1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040b1c0(LPWSTR param_1,int param_2)

{
  char *lpString1;
  CHAR local_104 [259];
  undefined1 uStack_1;
  
  GetModuleFileNameA(DAT_0045b188,local_104,0x104);
  lpString1 = FUN_00414500(local_104);
  lstrcpynA(lpString1,"",(int)&stack0x00000000 - (int)lpString1);
  uStack_1 = 0;
  MultiByteToWideChar(0,1,local_104,-1,param_1,param_2);
  param_1[param_2 + -1] = L'\0';
  return;
}


