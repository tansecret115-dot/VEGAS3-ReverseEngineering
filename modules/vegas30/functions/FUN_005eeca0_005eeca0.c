/* Module: vegas30.exe
   Function: FUN_005eeca0
   Address: 005eeca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005eeca0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = 0;
  if (DAT_0064a474 != 0) {
    iVar1 = FUN_005ec620();
    if (iVar1 == 0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      local_4 = 0;
      iVar1 = FUN_005ed0e0(param_2,&local_4);
      if (-1 < iVar1) {
        iVar1 = FUN_005eed00(param_1,local_4);
        return iVar1;
      }
    }
  }
  return iVar1;
}


