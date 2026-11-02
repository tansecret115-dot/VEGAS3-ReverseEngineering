/* Module: rv203260.dll
   Function: entry
   Address: 638b2b20
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_638b67b4 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_638b2b7e:
    iVar1 = FUN_638b2be0(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_638b2a50(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_638b2a50(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_638b67bc != (code *)0x0)) {
        iVar1 = (*DAT_638b67bc)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_638b67bc != (code *)0x0) {
    iVar1 = (*DAT_638b67bc)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_638b2a50(param_1,param_2);
    if (iVar1 != 0) goto LAB_638b2b7e;
  }
  return 0;
}


