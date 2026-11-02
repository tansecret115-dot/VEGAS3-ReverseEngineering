/* Module: sftrans1.dll
   Function: FUN_00530820
   Address: 00530820
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00530820(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  iVar1 = FUN_0052fc80(param_2,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_005300f0(param_2);
    if (iVar1 < 0) {
      iVar2 = FUN_005301d0(param_2);
      if (iVar2 == -0x7ffb1eca) goto LAB_00530930;
      if (iVar2 == 0x4e132) {
        local_8 = 0xffffffff;
        iVar1 = FUN_00530430();
        if ((iVar1 < 0) && (*(int *)(param_1 + 0x67c) == 0)) {
          FUN_00530c60(1);
        }
        *(undefined4 *)(param_1 + 0x67c) = 1;
        iVar1 = iVar2;
        goto LAB_00530938;
      }
      iVar1 = FUN_00530240(param_2,&local_8);
      if (iVar1 == 0x4e12e) goto LAB_00530938;
      iVar2 = FUN_00530430();
      if (iVar2 < 0) {
        iVar1 = iVar2;
        if (*(int *)(param_1 + 0x67c) == 0) {
          FUN_00530c60(1);
        }
      }
      else {
        iVar2 = FUN_00530390(param_2);
        if (iVar2 < 0) goto LAB_00530930;
      }
    }
    else {
      local_8 = 0xffffffff;
      iVar2 = FUN_00530430();
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x67c) == 0)) {
        FUN_00530c60(1);
      }
      *(undefined4 *)(param_1 + 0x67c) = 1;
    }
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_00530938;
  }
LAB_00530930:
  local_8 = 0;
  iVar1 = iVar2;
LAB_00530938:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_8;
  }
  if (local_4 != 0) {
    FUN_004035f0(local_4);
  }
  return iVar1;
}


