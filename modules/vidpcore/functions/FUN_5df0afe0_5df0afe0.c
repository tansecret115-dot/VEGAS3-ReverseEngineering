/* Module: vidpcore.dll
   Function: FUN_5df0afe0
   Address: 5df0afe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5df0afe0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  iVar1 = FUN_5df0a440(param_2,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_5df0a8b0(param_2);
    if (iVar1 < 0) {
      iVar2 = FUN_5df0a990(param_2);
      if (iVar2 == -0x7ffb1eca) goto LAB_5df0b0f0;
      if (iVar2 == 0x4e132) {
        local_8 = 0xffffffff;
        iVar1 = FUN_5df0abf0();
        if ((iVar1 < 0) && (*(int *)(param_1 + 0x67c) == 0)) {
          FUN_5df0b420(1);
        }
        *(undefined4 *)(param_1 + 0x67c) = 1;
        iVar1 = iVar2;
        goto LAB_5df0b0f8;
      }
      iVar1 = FUN_5df0aa00(param_2,&local_8);
      if (iVar1 == 0x4e12e) goto LAB_5df0b0f8;
      iVar2 = FUN_5df0abf0();
      if (iVar2 < 0) {
        iVar1 = iVar2;
        if (*(int *)(param_1 + 0x67c) == 0) {
          FUN_5df0b420(1);
        }
      }
      else {
        iVar2 = FUN_5df0ab50(param_2);
        if (iVar2 < 0) goto LAB_5df0b0f0;
      }
    }
    else {
      local_8 = 0xffffffff;
      iVar2 = FUN_5df0abf0();
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x67c) == 0)) {
        FUN_5df0b420(1);
      }
      *(undefined4 *)(param_1 + 0x67c) = 1;
    }
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_5df0b0f8;
  }
LAB_5df0b0f0:
  local_8 = 0;
  iVar1 = iVar2;
LAB_5df0b0f8:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_8;
  }
  if (local_4 != 0) {
    FUN_5de03b10(local_4);
  }
  return iVar1;
}


