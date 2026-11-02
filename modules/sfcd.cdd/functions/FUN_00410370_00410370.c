/* Module: sfcd.cdd
   Function: FUN_00410370
   Address: 00410370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00410370(undefined4 param_1,HSFCD__ *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  puVar5 = (undefined4 *)*param_3;
  iVar6 = param_3[1];
  iVar1 = *(int *)(param_2 + 0x160);
  if ((*(int *)(iVar1 + 0x1e4) == 0) || (*(uint *)(iVar1 + 0x1d4) <= *(uint *)(iVar1 + 0x1d8))) {
    param_3 = (undefined4 *)FUN_0040f2d0(param_2,puVar5,iVar6);
    *(int *)(iVar1 + 0x1e0) = *(int *)(iVar1 + 0x1e0) + iVar6;
  }
  else {
    uVar4 = *(int *)(iVar1 + 0x1e0) + iVar6;
    while (iVar6 != 0) {
      uVar2 = *(uint *)(iVar1 + 0x1d8);
      iVar7 = iVar6;
      if ((uVar2 < *(uint *)(iVar1 + 0x1d4)) &&
         (uVar3 = *(uint *)(*(int *)(iVar1 + 0x1dc) + uVar2 * 4), uVar3 < uVar4)) {
        *(uint *)(iVar1 + 0x1d8) = uVar2 + 1;
        iVar7 = uVar3 - *(int *)(iVar1 + 0x1e0);
      }
      if (iVar7 != 0) {
        param_3 = (undefined4 *)FUN_0040f2d0(param_2,puVar5,iVar7);
        iVar6 = iVar6 - iVar7;
        *(int *)(iVar1 + 0x1e0) = *(int *)(iVar1 + 0x1e0) + iVar7;
        puVar5 = puVar5 + iVar7 * 0x24c;
      }
    }
  }
  uVar4 = cdr_GetWriteState(param_2);
  if (uVar4 == 2) {
    cdr_SetWriteState(param_2,3);
  }
  return param_3;
}


