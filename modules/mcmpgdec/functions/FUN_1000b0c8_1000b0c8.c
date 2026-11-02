/* Module: mcmpgdec.dll
   Function: FUN_1000b0c8
   Address: 1000b0c8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b0c8(void)

{
  int iVar1;
  float10 fVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar6 = (float10)_DAT_1000b0b0;
  iVar3 = 0;
  do {
    if (iVar3 == 0) {
      fVar7 = SQRT(fVar6);
    }
    else {
      fVar7 = (float10)_DAT_1000b0b8;
    }
    iVar1 = iVar3 + 1;
    fVar8 = (float10)_DAT_1000b0b8;
    iVar5 = 0;
    pdVar4 = (double *)(&DAT_10035ac0 + iVar3 * 8);
    fVar2 = (float10)_DAT_1000b0c0;
    do {
      fVar9 = (float10)iVar5;
      iVar5 = iVar5 + 1;
      fVar9 = (float10)fcos((fVar9 + fVar8) * (float10)iVar3 * fVar2);
      *pdVar4 = (double)(fVar9 * fVar7);
      pdVar4 = pdVar4 + 1;
    } while (iVar5 < 8);
    iVar3 = iVar1;
  } while (iVar1 < 8);
  return;
}


