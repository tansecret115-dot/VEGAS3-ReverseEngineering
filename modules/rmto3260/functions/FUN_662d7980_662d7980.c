/* Module: rmto3260.dll
   Function: FUN_662d7980
   Address: 662d7980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_662d7980(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      return 0x80040007;
    }
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < param_2) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14);
      uVar2 = ftol();
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      *(uint *)(param_1 + 0xc) = uVar1;
      *(uint *)(param_1 + 8) = param_2;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x10) + param_3;
    *(int *)(param_1 + 0x10) = iVar3;
    iVar3 = iVar3 - ((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) * *(uint *)(param_1 + 4)) /
                    1000;
    *(int *)(param_1 + 0x14) = iVar3;
    if ((double)*(int *)(param_1 + 0x24) <
        ((double)(*(int *)(param_1 + 0x1c) + iVar3) * _DAT_66307338) /
        (double)*(uint *)(param_1 + 4)) {
      uVar2 = ftol();
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      return 0;
    }
  }
  return 0;
}


