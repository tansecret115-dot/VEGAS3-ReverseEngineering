/* Module: vegas30k.dll
   Function: FUN_0101e720
   Address: 0101e720
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0101e720(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  short unaff_DI;
  CHAR local_108 [259];
  undefined1 local_5;
  
  iVar1 = 1;
  local_108[0] = '\0';
  if (param_2 != (int *)0x0) {
    FUN_01002100();
    local_108[0] = '\0';
    iVar1 = (**(code **)(*param_2 + 0x14))(param_2,&stack0xfffffef0,0x104,param_3,1);
    if ((-1 < iVar1) && (unaff_DI != 0)) {
      WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffef0,-1,local_108,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      local_5 = 0;
      if (local_108[0] != '\0') {
        SfMEditPrintF(param_1,&DAT_011db77c,local_108);
      }
    }
  }
  return iVar1;
}


