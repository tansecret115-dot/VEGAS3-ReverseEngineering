/* Module: mp3plug.dll
   Function: FUN_5f6a48a0
   Address: 5f6a48a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6a48a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_28 [4];
  double local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28[0] = 0;
  local_28[1] = 1;
  local_10 = 0;
  local_c = 0x3fe00000;
  if (_DAT_5f72c7c8 <= *(double *)(param_1 + 0x18)) {
    local_18 = _DAT_5f72c7b8 / *(double *)(param_1 + 0x18);
  }
  else {
    local_18 = *(double *)(param_1 + 0x18) * _DAT_5f72c7b8;
  }
  local_18 = local_18 * _DAT_5f734a98;
  iVar1 = *(int *)(param_1 + 0xc);
  local_8 = 0;
  local_4 = 0xc0590000;
  if (iVar1 == 0) {
LAB_5f6a4960:
    puVar2 = (undefined4 *)(param_1 + 0xd0);
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  else {
    if (iVar1 == 0x10) {
      local_28[2] = 4;
    }
    else if (iVar1 == 0x20) {
      local_28[2] = 8;
    }
    else if (local_28[2] == 0) goto LAB_5f6a4960;
    FUN_5f6c2950(local_28,(undefined4 *)(param_1 + 0xd0));
  }
  if (1 < *(int *)(param_1 + 4)) {
    puVar2 = (undefined4 *)(param_1 + 0xd0);
    puVar3 = (undefined4 *)(param_1 + 0x1b0);
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


