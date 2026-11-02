/* Module: aviplug.dll
   Function: FUN_5f974550
   Address: 5f974550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f974550(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *local_c;
  int local_8;
  int local_4;
  
  iVar2 = param_2;
  local_4 = param_2 + 0x1e8;
  uVar4 = 0;
  piVar1 = (int *)(param_2 + 0x168);
  local_8 = 0;
  puVar5 = (undefined4 *)(param_2 + 0x20);
  param_2 = 5;
  local_c = piVar1;
  do {
    *puVar5 = local_c;
    puVar5[8] = iVar2 + 0x1e8 + (local_8 + 0x3f >> 6) * 8;
    uVar3 = FUN_5f974410(param_1,puVar5 + -8);
    uVar4 = uVar4 | uVar3;
    puVar5 = puVar5 + 0x12;
    param_1 = param_1 + 0x14;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  *local_c = 0;
  if (*piVar1 != 0) {
    local_c = piVar1;
    if ((0 < local_8) && (uVar4 == 0)) {
      FUN_5f974110(&local_c);
    }
    puVar5 = (undefined4 *)*local_c;
    while (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0x1556;
      *(undefined4 *)(*local_c + 4) = 0;
      local_c = local_c + 1;
      puVar5 = (undefined4 *)*local_c;
    }
  }
  return;
}


