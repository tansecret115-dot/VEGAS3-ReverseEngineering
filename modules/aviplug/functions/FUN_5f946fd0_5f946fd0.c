/* Module: aviplug.dll
   Function: FUN_5f946fd0
   Address: 5f946fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f946fd0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int local_38;
  undefined4 local_28;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f9d7f88;
  puStack_10 = &DAT_5f9d5b26;
  local_14 = ExceptionList;
  local_28 = 0;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0x14);
  ExceptionList = &local_14;
  *(int *)(*(int *)(param_1 + 0x1b0) + 0x14) = param_2;
  uVar2 = 0;
  if (param_3 == 0) {
    uVar2 = 0x8000000;
  }
  if (param_4 != 0) {
    uVar2 = uVar2 | 0x80000000;
  }
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x10000000;
  }
  if (param_5 == 0) {
    local_8 = 0;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x394) + 100))
                      (*(int **)(param_1 + 0x394),uVar2,*(undefined4 *)(param_1 + 0x1b0),
                       *(undefined4 *)(param_1 + 0x374),*(undefined4 *)(param_1 + 0x1fc),
                       *(undefined4 *)(param_1 + 0x2c0));
    if (((*(int *)(*(int *)(param_1 + 0x1b0) + 0x10) == 0x64737664) &&
        (iVar4 = *(int *)(param_1 + 0x1fc), *(short *)(iVar4 + 0xe) == 0x20)) &&
       (*(int *)(iVar4 + 0x10) == 0)) {
      local_38 = *(int *)(param_1 + 0x2c0);
      uVar2 = (uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f;
      iVar7 = 0;
      if (0 < *(int *)(iVar4 + 8)) {
        do {
          iVar6 = 0;
          if (0 < *(int *)(iVar4 + 4)) {
            puVar5 = (undefined1 *)(local_38 + 3);
            do {
              *puVar5 = 0xff;
              puVar5 = puVar5 + 4;
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(*(int *)(param_1 + 0x1fc) + 4));
          }
          local_38 = local_38 + ((int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3);
          iVar7 = iVar7 + 1;
          iVar4 = *(int *)(param_1 + 0x1fc);
        } while (iVar7 < *(int *)(iVar4 + 8));
      }
    }
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x290) + 0x18))
                      (*(int **)(param_1 + 0x290),uVar2,*(undefined4 *)(param_1 + 0x1b0),
                       *(undefined4 *)(param_1 + 0x374),*(undefined4 *)(param_1 + 0x248),
                       *(undefined4 *)(param_1 + 0x2c0));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0x14) = uVar1;
  if (iVar3 < 0) {
    local_28 = 0x8004e01f;
  }
  else if (iVar3 != 0) {
    local_28 = 1;
  }
  ExceptionList = local_14;
  return local_28;
}


