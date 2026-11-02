/* Module: vidcap30.exe
   Function: FUN_0056ee60
   Address: 0056ee60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0056ee60(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  iVar1 = FUN_0056e2c0(param_2,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_0056e730(param_2);
    if (iVar1 < 0) {
      iVar2 = FUN_0056e810(param_2);
      if (iVar2 == -0x7ffb1eca) goto LAB_0056ef70;
      if (iVar2 == 0x4e132) {
        local_8 = 0xffffffff;
        iVar1 = FUN_0056ea70();
        if ((iVar1 < 0) && (*(int *)(param_1 + 0x67c) == 0)) {
          FUN_0056f2a0(1);
        }
        *(undefined4 *)(param_1 + 0x67c) = 1;
        iVar1 = iVar2;
        goto LAB_0056ef78;
      }
      iVar1 = FUN_0056e880(param_2,&local_8);
      if (iVar1 == 0x4e12e) goto LAB_0056ef78;
      iVar2 = FUN_0056ea70();
      if (iVar2 < 0) {
        iVar1 = iVar2;
        if (*(int *)(param_1 + 0x67c) == 0) {
          FUN_0056f2a0(1);
        }
      }
      else {
        iVar2 = FUN_0056e9d0(param_2);
        if (iVar2 < 0) goto LAB_0056ef70;
      }
    }
    else {
      local_8 = 0xffffffff;
      iVar2 = FUN_0056ea70();
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x67c) == 0)) {
        FUN_0056f2a0(1);
      }
      *(undefined4 *)(param_1 + 0x67c) = 1;
    }
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_0056ef78;
  }
LAB_0056ef70:
  local_8 = 0;
  iVar1 = iVar2;
LAB_0056ef78:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_8;
  }
  if (local_4 != 0) {
    FUN_00404b20(local_4);
  }
  return iVar1;
}


