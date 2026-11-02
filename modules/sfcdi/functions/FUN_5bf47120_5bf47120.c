/* Module: sfcdi.dll
   Function: FUN_5bf47120
   Address: 5bf47120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf47120(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_4;
  
  local_4 = 0;
  while( true ) {
    piVar1 = *(int **)(param_1 + 0x24);
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    uVar2 = local_4 & 0xffff;
    if (iVar5 <= (int)uVar2) break;
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (iVar5 + -1 < (int)uVar2) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar1[2] + uVar2 * 4);
    }
    piVar1 = *(int **)(param_1 + 8);
    iVar6 = *(byte *)(iVar5 + 6) - 1;
    if (piVar1 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar1;
    }
    if ((iVar6 < 0) || (iVar7 + -1 < iVar6)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = *(uint **)(piVar1[2] + -4 + (uint)*(byte *)(iVar5 + 6) * 4);
    }
    uVar2 = *puVar3;
    piVar1 = *(int **)(uVar2 + 0x30);
    iVar6 = *(byte *)(iVar5 + 7) - 1;
    if (piVar1 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar1;
    }
    if ((iVar6 < 0) || (iVar7 + -1 < iVar6)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar1[2] + -4 + (uint)*(byte *)(iVar5 + 7) * 4);
    }
    uVar8 = 0;
    while( true ) {
      piVar1 = *(int **)(iVar5 + 0x1c);
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      uVar4 = uVar8 & 0xffff;
      if (iVar6 <= (int)uVar4) break;
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      if (iVar6 + -1 < (int)uVar4) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar1[2] + uVar4 * 4);
      }
      FUN_5bf47040(uVar2,iVar5,*(int *)(*(int *)(iVar6 + 4) + 0x10));
      uVar8 = uVar8 + 1;
    }
    local_4 = local_4 + 1;
  }
  return 0;
}


