/* Module: 28_83260.dll
   Function: FUN_10003ea0
   Address: 10003ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003ea0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = 1;
  fVar7 = _DAT_100070c4;
  fVar5 = _DAT_100070c4;
  fVar6 = _DAT_100070c4;
  iVar9 = iVar8;
  do {
    for (; DAT_1000c9e8 = fVar7, 0 < iVar8; iVar8 = iVar8 + -1) {
      iVar3 = iVar8 * 4;
      fVar4 = (float)(&DAT_1000c9e4)[iVar8];
      pfVar1 = (float *)(&DAT_1000c9fc + iVar8);
      (&DAT_1000c9e8)[iVar8] = fVar4;
      (&DAT_1000ca00)[iVar8] = *pfVar1;
      fVar7 = DAT_1000c9e8 - *(float *)(param_1 + iVar3) * fVar4;
      fVar5 = *(float *)(param_2 + iVar3) * fVar4 + fVar5;
      fVar6 = fVar6 - *(float *)(param_3 + iVar3) * *pfVar1;
    }
    DAT_1000ca00 = fVar6 + fVar5 + DAT_1000c9e8;
    iVar8 = iVar9 + 1;
    fVar7 = _DAT_100070c4;
    fVar5 = _DAT_100070c4;
    fVar6 = _DAT_100070c4;
    iVar9 = iVar8;
  } while (iVar8 < 5);
  iVar8 = 0;
  do {
    puVar2 = (undefined4 *)((int)&DAT_1000ca10 + iVar8);
    iVar8 = iVar8 + -4;
    *param_4 = *puVar2;
    param_4 = param_4 + 1;
  } while (-0x14 < iVar8);
  return;
}


