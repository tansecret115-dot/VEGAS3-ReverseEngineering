/* Module: vegas30.exe
   Function: FUN_004b8880
   Address: 004b8880
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b8880(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if ((0x9e65 < param_3) && (param_3 < 0x9e78)) {
    piVar3 = (int *)(param_1 + 0x20);
    *piVar3 = param_3 - 0x9e66;
    FUN_004530a0(param_1,0x7fff);
    if (DAT_00647630 == param_1) {
      piVar4 = piVar3;
      piVar5 = &DAT_0064b110;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      DAT_0064767c = DAT_0064767c | 2;
      DAT_006477e0 = DAT_0064b110;
      if (*(int *)(param_1 + 0xbc8) != 0) {
        piVar4 = (int *)(*(int *)(param_1 + 0xbc8) + 0x458);
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
      }
    }
    return 1;
  }
  if ((param_3 == 0x9e7a) || (param_3 == 0x9e7b)) {
    iVar2 = 0;
    local_10 = 0;
    uStack_c = 0;
    if (0 < *(int *)(param_1 + 0xd94)) {
      piVar3 = (int *)(param_1 + 0xd88);
      do {
        if ((*piVar3 != 0) && (*(int *)(*piVar3 + 4) == 3)) {
          if (param_3 == 0x9e7a) {
            if ((*(int *)(param_1 + 0xd50) != 0) && (iVar1 = FUN_005f13f0(3), iVar1 != 0)) {
              local_10 = *(undefined4 *)(iVar1 + 0x48);
              uStack_c = *(undefined4 *)(iVar1 + 0x4c);
              DAT_0064a534 = 1;
            }
          }
          else {
            local_10 = DAT_0064b118;
            uStack_c = DAT_0064b11c;
            DAT_0064a534 = 0;
          }
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xd94));
      if ((double)CONCAT44(uStack_c,local_10) != _DAT_00610fd8) {
        *(undefined4 *)(param_1 + 0x28) = local_10;
        *(undefined4 *)(param_1 + 0x2c) = uStack_c;
        FUN_004a4020(param_1,DAT_006476c8,DAT_006476cc);
        FUN_004530a0(param_1,0x7fff);
      }
    }
  }
  else if (param_3 == 0xa76b) {
    FUN_004b8660(param_1,param_2);
    return 0;
  }
  return 0;
}


