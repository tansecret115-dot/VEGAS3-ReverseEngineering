/* Module: oggplug.dll
   Function: FUN_00438430
   Address: 00438430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float10 __cdecl FUN_00438430(int param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float unaff_EDI;
  float *pfVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  
  FUN_00444a80();
  if (param_4 != -1) {
    iVar9 = param_4 * 4;
    iVar7 = param_4;
    do {
      fVar1 = _DAT_0044d6f0;
      if (iVar7 < param_3) {
        iVar4 = param_3 - iVar7;
        iVar2 = iVar9;
        do {
          iVar4 = iVar4 + -1;
          fVar1 = *(float *)((iVar2 - iVar9) + param_1) * *(float *)(iVar2 + param_1) + fVar1;
          iVar2 = iVar2 + 4;
        } while (iVar4 != 0);
      }
      *(float *)(&stack0xffffffec + iVar9) = fVar1;
      iVar9 = iVar9 + -4;
      bVar11 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar11);
  }
  uVar8 = 0;
  fVar12 = (float10)unaff_EDI;
  if (0 < param_4) {
    pfVar10 = param_2;
    while( true ) {
      pfVar5 = (float *)(&stack0xffffffec + -(int)param_2 + (int)pfVar10);
      fVar13 = -(float10)*(float *)(&stack0xfffffff0 + -(int)param_2 + (int)pfVar10);
      if (fVar12 == (float10)_DAT_0044d6f0) break;
      pfVar3 = param_2;
      uVar6 = uVar8;
      if (0 < (int)uVar8) {
        do {
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + -1;
          uVar6 = uVar6 - 1;
          fVar13 = fVar13 - (float10)*pfVar3 * (float10)fVar1;
          pfVar3 = pfVar3 + 1;
        } while (uVar6 != 0);
      }
      fVar13 = fVar13 / fVar12;
      iVar2 = (int)uVar8 / 2;
      *pfVar10 = (float)fVar13;
      iVar9 = iVar2;
      pfVar3 = param_2;
      iVar7 = 0;
      pfVar5 = pfVar10;
      if (0 < iVar2) {
        do {
          pfVar5 = pfVar5 + -1;
          fVar1 = *pfVar3;
          iVar9 = iVar9 + -1;
          *pfVar3 = (float)(fVar13 * (float10)*pfVar5 + (float10)*pfVar3);
          *pfVar5 = (float)((float10)fVar1 * fVar13 + (float10)*pfVar5);
          pfVar3 = pfVar3 + 1;
          iVar7 = iVar2;
        } while (iVar9 != 0);
      }
      uVar6 = uVar8 & 0x80000001;
      bVar11 = uVar6 == 0;
      if ((int)uVar6 < 0) {
        bVar11 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar11) {
        param_2[iVar7] = (float)((fVar13 + (float10)_DAT_0044d74c) * (float10)param_2[iVar7]);
      }
      uVar8 = uVar8 + 1;
      pfVar10 = pfVar10 + 1;
      fVar12 = ((float10)_DAT_0044d74c - fVar13 * fVar13) * fVar12;
      if (param_4 <= (int)uVar8) {
        return fVar12;
      }
    }
    fVar12 = (float10)_DAT_0044d6f0;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      *param_2 = 0.0;
      param_2 = param_2 + 1;
    }
  }
  return fVar12;
}


