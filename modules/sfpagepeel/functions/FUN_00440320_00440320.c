/* Module: sfpagepeel.dll
   Function: FUN_00440320
   Address: 00440320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00440320(int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_a8 [4];
  int local_98;
  int local_94;
  int *local_60 [2];
  int local_58 [4];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00475e90;
  puStack_10 = &DAT_0046d5f6;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff0c;
  ExceptionList = &local_14;
  iVar1 = FUN_0042ae40(*(int *)(param_1 + 4));
  piVar3 = local_58;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0xb0) == 0x1c) {
    if (param_3 == (int *)0x0) {
      iVar2 = *(int *)(iVar1 + 8);
      local_24 = *(int *)(iVar1 + 4);
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_2c = *param_3;
      local_28 = param_3[1];
      local_24 = param_3[2];
      iVar2 = param_3[3];
    }
    local_60[0] = (int *)0x0;
    piVar3 = local_a8;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    local_a8[0] = 0;
    iVar1 = (**(code **)(*param_4 + 0xc))(param_4,&DAT_0046f640,local_60);
    if ((-1 < iVar1) &&
       (iVar1 = (**(code **)(*local_60[0] + 0x1c))(local_60[0],local_a8), -1 < iVar1)) {
      local_48 = local_a8[3] - local_a8[2];
      local_44 = local_94 - local_98;
      if (param_5 == (int *)0x0) {
        if (iVar2 - local_28 <= local_44) {
          local_44 = iVar2 - local_28;
        }
        if (local_24 - local_2c <= local_48) {
          local_48 = local_24 - local_2c;
        }
      }
      else {
        iVar1 = iVar2 - local_28;
        if (local_44 < iVar2 - local_28) {
          iVar1 = local_44;
        }
        iVar2 = local_24 - local_2c;
        if (local_48 < local_24 - local_2c) {
          iVar2 = local_48;
        }
        local_98 = param_5[1];
        local_44 = local_98 + iVar1;
        local_a8[2] = *param_5;
        local_48 = local_a8[2] + iVar2;
      }
      local_8 = 0;
      local_58[0] = *(int *)(param_1 + 0x10) * local_28 + *(int *)(param_1 + 0x28) * local_2c +
                    *(int *)(param_1 + 8);
      local_58[1] = 1;
      local_40 = (*(int *)(param_1 + 0x10) / *(int *)(param_1 + 0x28) - local_48) + local_a8[2];
      local_58[2] = local_a8[2];
      local_58[3] = local_98;
      local_3c = local_a8[2];
      local_38 = local_98;
      local_34 = local_48;
      local_30 = local_44;
      (**(code **)(*param_4 + 0x2c))(param_4,local_58);
      local_8 = 0xffffffff;
      (**(code **)(*local_60[0] + 8))(local_60[0]);
    }
  }
  ExceptionList = local_14;
  return;
}


