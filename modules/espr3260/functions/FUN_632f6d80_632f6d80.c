/* Module: espr3260.dll
   Function: FUN_632f6d80
   Address: 632f6d80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f6d80(float *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  
  pfVar6 = (float *)&DAT_632fb0a8;
  pfVar8 = (float *)&DAT_632ffae0;
  fVar4 = _DAT_632fa410;
  do {
    fVar2 = *pfVar6;
    fVar3 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar6 = pfVar6 + 1;
    fVar4 = fVar2 * fVar3 + fVar4;
  } while ((int)pfVar8 < 0x632ffae8);
  iVar10 = 3;
  pfVar8 = param_1;
  do {
    fVar2 = *pfVar6;
    fVar3 = *pfVar8;
    pfVar6 = pfVar6 + 1;
    pfVar8 = pfVar8 + 1;
    iVar10 = iVar10 + -1;
    fVar4 = fVar2 * fVar3 + fVar4;
  } while (iVar10 != 0);
  puVar9 = &DAT_632ffae0;
  *param_1 = fVar4;
  iVar10 = param_2 * 4;
  do {
    iVar5 = iVar10 + -8;
    iVar10 = iVar10 + 4;
    *puVar9 = *(undefined4 *)((int)param_1 + iVar5);
    puVar9 = puVar9 + 1;
  } while ((int)puVar9 < 0x632ffae8);
  pfVar6 = param_1 + param_3 + -2;
  if (1 < param_2 / param_3) {
    pfVar8 = param_1;
    param_1 = (float *)(param_2 / param_3 + -1);
    do {
      pfVar8 = pfVar8 + 1;
      pfVar7 = (float *)&DAT_632fb0a8;
      iVar10 = 5;
      fVar4 = _DAT_632fa410;
      do {
        pfVar1 = (float *)((int)pfVar7 + (int)(pfVar6 + -0x18cbec2a));
        fVar2 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 + -1;
        fVar4 = *pfVar1 * fVar2 + fVar4;
      } while (iVar10 != 0);
      *pfVar8 = fVar4;
      param_1 = (float *)((int)param_1 + -1);
      pfVar6 = pfVar6 + param_3;
    } while (param_1 != (float *)0x0);
  }
  return;
}


