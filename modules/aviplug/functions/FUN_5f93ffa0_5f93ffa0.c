/* Module: aviplug.dll
   Function: FUN_5f93ffa0
   Address: 5f93ffa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f93ffa0(SIZE_T param_1,int param_2)

{
  uint uVar1;
  SIZE_T SVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  SVar2 = param_1;
  if (*(int *)(param_1 + 0x70) != 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x90);
  uVar5 = (*(undefined4 **)(param_1 + 0x34))[1] + 8 + param_2 * 0x10;
  if (uVar1 != 0) {
    if (uVar1 < 3) {
      SVar3 = uVar5 + (uVar5 & 1);
      goto LAB_5f94001f;
    }
    if (uVar1 == 4) {
      uVar5 = (uVar5 & 1) + uVar5;
      SVar3 = uVar5 + 3 & 0xfffffffc;
      if ((SVar3 != uVar5) && (SVar3 - uVar5 < 8)) {
        SVar3 = SVar3 + 8;
      }
      goto LAB_5f94001f;
    }
  }
  uVar5 = (uVar5 & 1) + uVar5;
  SVar3 = uVar5 + (uVar1 - 1) & ~(uVar1 - 1);
  if ((SVar3 != uVar5) && (SVar3 - uVar5 < 8)) {
    SVar3 = SVar3 + uVar1;
  }
LAB_5f94001f:
  if (*(int *)(param_1 + 0x38) < (int)SVar3) {
    puVar4 = FUN_5f943000(*(undefined4 **)(param_1 + 0x34),SVar3,SVar3 + 0xfffff & 0xfff00000,1,
                          &param_1,(SIZE_T *)0x0);
    if (puVar4 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    *(undefined4 **)(SVar2 + 0x34) = puVar4;
    *(SIZE_T *)(SVar2 + 0x38) = param_1;
  }
  return 0;
}


