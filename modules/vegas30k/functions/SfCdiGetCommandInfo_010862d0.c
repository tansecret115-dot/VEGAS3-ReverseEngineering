/* Module: vegas30k.dll
   Function: SfCdiGetCommandInfo
   Address: 010862d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiGetCommandInfo(struct tagSFVMG_INFO *) */

long SfCdiGetCommandInfo(tagSFVMG_INFO *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_4;
  
                    /* 0x862d0  301  ?SfCdiGetCommandInfo@@YGJPAUtagSFVMG_INFO@@@Z */
  local_4 = 0;
  while( true ) {
    piVar2 = *(int **)(param_1 + 0x24);
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    uVar1 = local_4 & 0xffff;
    if (iVar4 <= (int)uVar1) break;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if (iVar4 + -1 < (int)uVar1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar2[2] + uVar1 * 4);
    }
    piVar2 = *(int **)(param_1 + 8);
    iVar7 = *(byte *)(iVar4 + 6) - 1;
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if ((iVar7 < 0) || (iVar5 + -1 < iVar7)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(piVar2[2] + -4 + (uint)*(byte *)(iVar4 + 6) * 4);
    }
    iVar5 = *piVar2;
    piVar2 = *(int **)(iVar5 + 0x30);
    iVar7 = *(byte *)(iVar4 + 7) - 1;
    if (piVar2 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar2;
    }
    if ((iVar7 < 0) || (iVar6 + -1 < iVar7)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(piVar2[2] + -4 + (uint)*(byte *)(iVar4 + 7) * 4);
    }
    uVar1 = 0;
    while( true ) {
      piVar2 = *(int **)(iVar7 + 0x1c);
      if (piVar2 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      uVar3 = uVar1 & 0xffff;
      if (iVar6 <= (int)uVar3) break;
      if (piVar2 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if (iVar6 + -1 < (int)uVar3) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar2[2] + uVar3 * 4);
      }
      FUN_010861f0(iVar5,iVar7,*(undefined4 *)(*(int *)(iVar6 + 4) + 0x10),iVar4);
      uVar1 = uVar1 + 1;
    }
    local_4 = local_4 + 1;
  }
  return 0;
}


