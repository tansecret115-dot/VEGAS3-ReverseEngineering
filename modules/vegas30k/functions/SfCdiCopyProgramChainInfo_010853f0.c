/* Module: vegas30k.dll
   Function: SfCdiCopyProgramChainInfo
   Address: 010853f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiCopyProgramChainInfo(struct tagSFIFO_PGCI *,struct tagSFIFO_PGCI *) */

long SfCdiCopyProgramChainInfo(tagSFIFO_PGCI *param_1,tagSFIFO_PGCI *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  tagSFIFO_PGCI *ptVar9;
  int iVar10;
  tagSFIFO_PGCI *ptVar11;
  
                    /* 0x853f0  294  ?SfCdiCopyProgramChainInfo@@YGJPAUtagSFIFO_PGCI@@0@Z */
  uVar1 = *(undefined4 *)(param_1 + 0xf8);
  piVar2 = *(int **)(param_1 + 0xf0);
  uVar3 = *(undefined4 *)(param_1 + 0x110);
  uVar4 = *(undefined4 *)(param_1 + 0xf4);
  uVar5 = *(undefined4 *)(param_1 + 0x114);
  uVar6 = *(undefined4 *)(param_1 + 0x118);
  ptVar9 = param_2;
  ptVar11 = param_1;
  for (iVar8 = 0x47; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)ptVar11 = *(undefined4 *)ptVar9;
    ptVar9 = ptVar9 + 4;
    ptVar11 = ptVar11 + 4;
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar4;
  *(undefined4 *)(param_1 + 0x110) = uVar3;
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  iVar8 = 0;
  *(int **)(param_1 + 0xf0) = piVar2;
  *(undefined4 *)(param_1 + 0x114) = uVar5;
  *(undefined4 *)(param_1 + 0x118) = uVar6;
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    _SfList_DeleteList_16(piVar2,0,0xffffffff,1);
  }
  piVar2 = *(int **)(param_1 + 0xf4);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    _SfList_DeleteList_16(piVar2,0,0xffffffff,1);
  }
  piVar2 = *(int **)(param_1 + 0xf8);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    _SfList_DeleteList_16(piVar2,0,0xffffffff,1);
  }
  piVar2 = *(int **)(param_1 + 0x110);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    _SfList_DeleteList_16(piVar2,0,0xffffffff,1);
  }
  piVar2 = *(int **)(param_1 + 0x114);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    _SfList_DeleteList_16(piVar2,0,0xffffffff,1);
  }
  piVar2 = *(int **)(param_1 + 0x118);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    _SfList_DeleteList_16(piVar2,0,0xffffffff,1);
  }
  iVar10 = 0;
  while( true ) {
    piVar2 = *(int **)(param_2 + 0xf0);
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (iVar7 <= iVar10) break;
    if (piVar2 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar2;
    }
    if ((iVar10 < 0) || (iVar8 + -1 < iVar10)) {
      iVar8 = 0;
    }
    else {
      iVar8 = piVar2[1] * iVar10 + piVar2[2];
    }
    iVar8 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xf0),0xffffffff,iVar8,1);
    if (iVar8 < 0) break;
    iVar10 = iVar10 + 1;
  }
  iVar10 = 0;
  while( true ) {
    piVar2 = *(int **)(param_2 + 0xf4);
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (iVar7 <= iVar10) break;
    if (piVar2 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar2;
    }
    if ((iVar10 < 0) || (iVar8 + -1 < iVar10)) {
      iVar8 = 0;
    }
    else {
      iVar8 = piVar2[1] * iVar10 + piVar2[2];
    }
    iVar8 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xf4),0xffffffff,iVar8,1);
    if (iVar8 < 0) break;
    iVar10 = iVar10 + 1;
  }
  iVar10 = 0;
  while( true ) {
    piVar2 = *(int **)(param_2 + 0xf8);
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (iVar7 <= iVar10) break;
    if (piVar2 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar2;
    }
    if ((iVar10 < 0) || (iVar8 + -1 < iVar10)) {
      iVar8 = 0;
    }
    else {
      iVar8 = piVar2[1] * iVar10 + piVar2[2];
    }
    iVar8 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xf8),0xffffffff,iVar8,1);
    if (iVar8 < 0) break;
    iVar10 = iVar10 + 1;
  }
  iVar10 = 0;
  while( true ) {
    piVar2 = *(int **)(param_2 + 0x110);
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (iVar7 <= iVar10) break;
    if (piVar2 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar2;
    }
    if ((iVar10 < 0) || (iVar8 + -1 < iVar10)) {
      iVar8 = 0;
    }
    else {
      iVar8 = piVar2[1] * iVar10 + piVar2[2];
    }
    iVar8 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x110),0xffffffff,iVar8,1);
    if (iVar8 < 0) break;
    iVar10 = iVar10 + 1;
  }
  iVar10 = 0;
  while( true ) {
    piVar2 = *(int **)(param_2 + 0x114);
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (iVar7 <= iVar10) break;
    if (piVar2 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar2;
    }
    if ((iVar10 < 0) || (iVar8 + -1 < iVar10)) {
      iVar8 = 0;
    }
    else {
      iVar8 = piVar2[1] * iVar10 + piVar2[2];
    }
    iVar8 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x114),0xffffffff,iVar8,1);
    if (iVar8 < 0) break;
    iVar10 = iVar10 + 1;
  }
  iVar10 = 0;
  while( true ) {
    piVar2 = *(int **)(param_2 + 0x118);
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (iVar7 <= iVar10) {
      return iVar8;
    }
    if (piVar2 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar2;
    }
    if ((iVar10 < 0) || (iVar8 + -1 < iVar10)) {
      iVar8 = 0;
    }
    else {
      iVar8 = piVar2[1] * iVar10 + piVar2[2];
    }
    iVar8 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x118),0xffffffff,iVar8,1);
    if (iVar8 < 0) break;
    iVar10 = iVar10 + 1;
  }
  return iVar8;
}


