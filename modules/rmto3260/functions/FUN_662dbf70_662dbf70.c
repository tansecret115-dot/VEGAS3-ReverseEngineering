/* Module: rmto3260.dll
   Function: FUN_662dbf70
   Address: 662dbf70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662dbf70(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  int local_8;
  
  local_8 = param_1;
  if (*(int *)(param_1 + 0x18) == 4) {
    puVar1 = operator_new(0xe);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 2;
    puVar1[0xc] = 2;
    puVar1[0xd] = 0;
    FUN_662e2a70(&local_14);
    local_14 = 0;
    local_10 = 0;
    local_e = 0;
    local_c = 2;
    uVar2 = (**(code **)(**(int **)(local_8 + 0x10) + 0x2c))(&local_14,puVar1,0xe);
    if (puVar1 != (undefined1 *)0x0) {
      operator_delete(puVar1);
      return uVar2;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 3) {
    puVar1 = operator_new(0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    local_8 = 0x14;
    FUN_662e2a70(&local_14);
    local_14 = 0;
    local_10 = 0;
    local_e = 0;
    local_c = 2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))(&local_14,puVar1,local_8);
    if (puVar1 != (undefined1 *)0x0) {
      operator_delete(puVar1);
      return uVar2;
    }
  }
  else {
    uVar2 = 0x800403d5;
  }
  return uVar2;
}


