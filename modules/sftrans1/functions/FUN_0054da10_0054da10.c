/* Module: sftrans1.dll
   Function: FUN_0054da10
   Address: 0054da10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054da10(int param_1,int param_2)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  uint *puVar5;
  bool bVar6;
  double dVar7;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8);
  pdVar3 = *(double **)(iVar2 + param_2 * 4);
  if (param_2 != 0) {
    pdVar4 = *(double **)(iVar2 + param_2 * 4 + -4);
    dVar1 = *pdVar3;
    dVar7 = (dVar1 - *pdVar4) * pdVar4[8];
    bVar6 = dVar7 != _DAT_00555910;
    pdVar4[10] = dVar7;
    if (bVar6) {
      pdVar4[0xb] = dVar7 * pdVar4[9];
    }
    dVar1 = -((dVar1 - *pdVar4) * pdVar3[3]);
    bVar6 = dVar1 != _DAT_00555910;
    pdVar3[5] = dVar1;
    if (bVar6) {
      pdVar3[6] = dVar1 * pdVar3[4];
    }
  }
  puVar5 = *(uint **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  if (param_2 + 1U < *puVar5) {
    pdVar4 = *(double **)(puVar5[2] + (param_2 + 1U) * 4);
    dVar1 = *pdVar4;
    dVar7 = (dVar1 - *pdVar3) * pdVar3[8];
    bVar6 = dVar7 != _DAT_00555910;
    pdVar3[10] = dVar7;
    if (bVar6) {
      pdVar3[0xb] = dVar7 * pdVar3[9];
    }
    dVar1 = -((dVar1 - *pdVar3) * pdVar4[3]);
    bVar6 = dVar1 != _DAT_00555910;
    pdVar4[5] = dVar1;
    if (bVar6) {
      pdVar4[6] = dVar1 * pdVar4[4];
      return;
    }
  }
  return;
}


