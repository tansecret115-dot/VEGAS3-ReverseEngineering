/* Module: sfnetmedia.dll
   Function: FUN_0041f620
   Address: 0041f620
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041f620(HWND param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  short unaff_DI;
  CHAR local_108 [259];
  undefined1 local_5;
  
  iVar1 = 1;
  local_108[0] = '\0';
  if (param_2 != (int *)0x0) {
    FUN_004323c0();
    local_108[0] = '\0';
    iVar1 = (**(code **)(*param_2 + 0x14))(param_2,&stack0xfffffef0,0x104,param_3,1);
    if ((-1 < iVar1) && (unaff_DI != 0)) {
      WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffef0,-1,local_108,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      local_5 = 0;
      if (local_108[0] != '\0') {
        FUN_00417320(param_1,"\t\t%s");
      }
    }
  }
  return iVar1;
}


