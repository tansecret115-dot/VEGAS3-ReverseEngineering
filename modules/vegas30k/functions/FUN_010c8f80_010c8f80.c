/* Module: vegas30k.dll
   Function: FUN_010c8f80
   Address: 010c8f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_010c8f80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_9;
  
  iVar1 = **(int **)(param_1 + 0x8c);
  if (((*(uint *)(param_1 + 0x88) | 3) == 0) && ((*(uint *)(param_1 + 0x88) | 4) == 0)) {
    uVar4 = 0x14;
    local_34 = 0x14;
  }
  else {
    local_34 = 0x15;
    uVar4 = 0x15;
  }
  iVar3 = _SfDibAlloc_28(&local_3c,uVar4,*(undefined4 *)(param_1 + 0x34),
                         *(undefined4 *)(param_1 + 0x38),0,0,0);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = _SfDibAlloc_28(*(int *)(param_1 + 0x8c) + 4,uVar4,*(undefined4 *)(param_1 + 0x34),
                         *(undefined4 *)(param_1 + 0x38),0,0,0);
  local_38 = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4);
  if (iVar3 < 0) {
    _SfDibFree_8(local_3c,0);
    return iVar3;
  }
  local_18 = ftol();
  local_c = ftol();
  local_14 = ftol();
  local_a = ftol();
  local_1c = ftol();
  local_1e = ftol();
  local_20 = ftol();
  local_1a = ftol();
  local_e = ftol();
  local_f = ftol();
  local_10 = ftol();
  local_d = ftol();
  local_12 = ftol();
  local_9 = ftol();
  local_18 = ftol();
  local_c = ftol();
  switch(*(undefined4 *)(iVar1 + 0x80)) {
  case 0:
    local_24 = 0xf;
    break;
  case 1:
    local_24 = 0x10;
    break;
  case 2:
    local_24 = 0x11;
    break;
  case 3:
    local_24 = 0x10;
    break;
  default:
    goto switchD_010c915a_default;
  }
  FUN_010c7b00(local_3c,param_1,&local_24);
switchD_010c915a_default:
  local_30 = *(double *)(iVar1 + 0x70);
  if (local_30 <= _DAT_011e2e60) {
    _SfDibCopy_36(local_38,0,0,0,local_3c,0,0,0,3);
  }
  else {
    local_30._4_4_ = (undefined4)((ulonglong)local_30 >> 0x20);
    uVar4 = local_30._4_4_;
    if (local_34 == 0x15) {
      uVar2 = (undefined4)local_30;
      FUN_010c85a0(local_38,local_3c,uVar2,uVar4);
    }
    else {
      uVar2 = (undefined4)local_30;
      FUN_010c8ab0(local_38,local_3c,uVar2,uVar4);
    }
  }
  if (*(int *)(iVar1 + 0x88) == 1) {
    _SfDibCopy_36(*(undefined4 *)(param_1 + 0x14),0,0,0,local_38,0,0,0,3);
  }
  else {
    FUN_010c7e70(param_1,*(int *)(iVar1 + 0x84) == 0);
  }
  _SfDibFree_8(local_3c,0);
  _SfDibFree_8(local_38,0);
  return 0;
}


