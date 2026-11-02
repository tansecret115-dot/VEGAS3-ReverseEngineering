/* Module: vegas30k.dll
   Function: SfCdiGetProgramChainSize
   Address: 01085c20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiGetProgramChainSize(struct tagSFIFO_PGCI *,unsigned int *) */

long SfCdiGetProgramChainSize(tagSFIFO_PGCI *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
                    /* 0x85c20  307  ?SfCdiGetProgramChainSize@@YGJPAUtagSFIFO_PGCI@@PAI@Z */
  if (param_1 == (tagSFIFO_PGCI *)0x0) {
    return -0x7ff8ffa9;
  }
  puVar1 = *(uint **)(param_1 + 0x110);
  if (puVar1 == (uint *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar1;
  }
  iVar3 = 0;
  if (*(int **)(param_1 + 0x114) != (int *)0x0) {
    iVar3 = **(int **)(param_1 + 0x114);
  }
  iVar6 = 0;
  if (*(int **)(param_1 + 0x118) != (int *)0x0) {
    iVar6 = **(int **)(param_1 + 0x118);
  }
  uVar7 = uVar7 + 0xec + (iVar6 + iVar3 * 6) * 4;
  uVar5 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar5 = *puVar1;
  }
  if ((uVar5 & 1) != 0) {
    uVar7 = uVar7 + 1;
  }
  piVar2 = *(int **)(param_1 + 0xf0);
  if ((((piVar2 != (int *)0x0) && (*piVar2 != 0)) ||
      ((*(int **)(param_1 + 0xf4) != (int *)0x0 && (**(int **)(param_1 + 0xf4) != 0)))) ||
     ((*(int **)(param_1 + 0xf8) != (int *)0x0 && (**(int **)(param_1 + 0xf8) != 0)))) {
    iVar3 = 0;
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
    }
    if (*(int **)(param_1 + 0xf4) == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = **(int **)(param_1 + 0xf4);
    }
    iVar4 = 0;
    if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
      iVar4 = **(int **)(param_1 + 0xf8);
    }
    uVar7 = uVar7 + 8 + (iVar4 + iVar6 + iVar3) * 8;
  }
  *param_2 = uVar7;
  return 0;
}


