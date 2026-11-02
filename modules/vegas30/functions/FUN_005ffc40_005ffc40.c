/* Module: vegas30.exe
   Function: FUN_005ffc40
   Address: 005ffc40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005ffc40(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  iVar1 = FUN_005ff0a0(param_2,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_005ff510(param_2);
    if (iVar1 < 0) {
      iVar2 = FUN_005ff5f0(param_2);
      if (iVar2 == -0x7ffb1eca) goto LAB_005ffd50;
      if (iVar2 == 0x4e132) {
        local_8 = 0xffffffff;
        iVar1 = FUN_005ff850();
        if ((iVar1 < 0) && (*(int *)(param_1 + 0x67c) == 0)) {
          FUN_00600080(1);
        }
        *(undefined4 *)(param_1 + 0x67c) = 1;
        iVar1 = iVar2;
        goto LAB_005ffd58;
      }
      iVar1 = FUN_005ff660(param_2,&local_8);
      if (iVar1 == 0x4e12e) goto LAB_005ffd58;
      iVar2 = FUN_005ff850();
      if (iVar2 < 0) {
        iVar1 = iVar2;
        if (*(int *)(param_1 + 0x67c) == 0) {
          FUN_00600080(1);
        }
      }
      else {
        iVar2 = FUN_005ff7b0(param_2);
        if (iVar2 < 0) goto LAB_005ffd50;
      }
    }
    else {
      local_8 = 0xffffffff;
      iVar2 = FUN_005ff850();
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x67c) == 0)) {
        FUN_00600080(1);
      }
      *(undefined4 *)(param_1 + 0x67c) = 1;
    }
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_005ffd58;
  }
LAB_005ffd50:
  local_8 = 0;
  iVar1 = iVar2;
LAB_005ffd58:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_8;
  }
  if (local_4 != 0) {
    FUN_0040bfc0(local_4);
  }
  return iVar1;
}


