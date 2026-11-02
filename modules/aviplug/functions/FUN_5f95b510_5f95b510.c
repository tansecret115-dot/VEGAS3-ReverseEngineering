/* Module: aviplug.dll
   Function: FUN_5f95b510
   Address: 5f95b510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f95b510(LPWSTR param_1,int param_2)

{
  char *lpString1;
  CHAR local_104 [259];
  undefined1 uStack_1;
  
  GetModuleFileNameA(DAT_5f9f5970,local_104,0x104);
  lpString1 = FUN_5f98cc80(local_104);
  lstrcpynA(lpString1,"SFAVIPLUG.HLP",(int)&stack0x00000000 - (int)lpString1);
  uStack_1 = 0;
  MultiByteToWideChar(0,1,local_104,-1,param_1,param_2);
  param_1[param_2 + -1] = L'\0';
  return;
}


