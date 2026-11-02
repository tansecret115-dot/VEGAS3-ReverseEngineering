/* Module: mp3plug.dll
   Function: FUN_5f6fd8b0
   Address: 5f6fd8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_5f6fd8b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11,float param_12,int param_13,
            int param_14,int param_15,int param_16)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  iVar3 = param_9;
  if (param_1 == 0) {
    iVar10 = 7;
  }
  else {
    iVar10 = 0x1f;
  }
  for (; iVar3 < param_10; iVar3 = iVar3 + 1) {
    fVar1 = *(float *)(param_5 + iVar3 * 4);
    fVar2 = *(float *)(param_4 + iVar3 * 4);
    iVar4 = *(int *)(param_8 + iVar3 * 4);
    fVar11 = FUN_5f6d8460((float *)(param_2 + iVar4 * 4),(float *)(param_3 + iVar4 * 4),
                          *(int *)(param_8 + 4 + iVar3 * 4) - iVar4);
    fVar11 = fVar11 * (float10)_DAT_5f75e6d0;
    if (param_11 == 0) {
      iVar4 = 0x16;
    }
    else {
      iVar4 = 0xd;
    }
    if (iVar3 == iVar4) {
      *(undefined4 *)(param_13 + iVar3 * 4) = *(undefined4 *)(param_13 + -4 + iVar3 * 4);
      fVar1 = *(float *)(param_14 + -4 + iVar3 * 4);
      *(undefined4 *)(param_14 + iVar3 * 4) = *(undefined4 *)(param_14 + -4 + iVar3 * 4);
      *(undefined4 *)(param_15 + iVar3 * 4) = *(undefined4 *)(param_15 + -4 + iVar3 * 4);
      *(float *)(param_16 + iVar3 * 4) =
           (float)((float10)fVar1 * (float10)*(float *)(param_15 + -4 + iVar3 * 4) * fVar11);
    }
    else {
      uVar6 = 0;
      uVar8 = 3;
      fVar12 = (float10)_DAT_5f75e6d4;
      if (iVar10 != 0) {
        iVar4 = param_1 * 0xf8;
        do {
          fVar13 = -(float10)*(float *)(&DAT_5f7470cc + uVar6 * 4 + iVar4);
          fVar13 = (float10)*(float *)(&DAT_5f747050 + uVar6 * 4 + iVar4) *
                   (float10)*(float *)(&DAT_5f747050 + uVar6 * 4 + iVar4) * (float10)fVar1 +
                   fVar13 * fVar13 * (float10)fVar2 +
                   (float10)*(float *)(&DAT_5f747050 + uVar6 * 4 + iVar4) * fVar13 * fVar11;
          if (fVar13 < fVar12) {
            uVar8 = uVar6;
            fVar12 = fVar13;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < iVar10);
      }
      iVar4 = param_1 * 0xf8;
      if (param_1 == 0) {
        iVar5 = *(int *)(param_13 + iVar3 * 4);
        uVar6 = iVar5 - 1;
        if (((int)uVar6 <= (int)uVar8) && (uVar6 = uVar8, iVar5 + 1 < (int)uVar8)) {
          uVar6 = iVar5 + 1;
        }
      }
      else {
        if (uVar8 != ((int)(uVar8 + (0x7fffffff < uVar8)) >> 1) * 2) {
          uVar8 = -(uVar8 + 1);
        }
        uVar6 = *(uint *)(param_13 + iVar3 * 4);
        iVar5 = (int)(uVar8 + (0x7fffffff < uVar8)) >> 1;
        if (uVar6 != ((int)(uVar6 + (0x7fffffff < uVar6)) >> 1) * 2) {
          uVar6 = -(uVar6 + 1);
        }
        iVar7 = (int)(uVar6 + (0x7fffffff < uVar6)) >> 1;
        iVar9 = iVar7 + -4;
        if ((iVar9 <= iVar5) && (iVar9 = iVar5, iVar7 + 4 < iVar5)) {
          iVar9 = iVar7 + 4;
        }
        if (iVar9 < 0) {
          uVar6 = iVar9 * -2 - 1;
        }
        else {
          uVar6 = iVar9 * 2;
        }
      }
      *(uint *)(param_13 + iVar3 * 4) = uVar6;
      *(undefined4 *)(param_14 + iVar3 * 4) = *(undefined4 *)(&DAT_5f7470cc + uVar6 * 4 + iVar4);
      fVar1 = *(float *)(&DAT_5f747050 + uVar6 * 4 + iVar4);
      *(undefined4 *)(param_15 + iVar3 * 4) = *(undefined4 *)(&DAT_5f747050 + uVar6 * 4 + iVar4);
      *(float *)(param_16 + iVar3 * 4) =
           (float)((float10)fVar1 * (float10)*(float *)(param_14 + iVar3 * 4) * fVar11);
    }
  }
  while( true ) {
    iVar3 = param_10;
    param_10 = iVar3 + -1;
    if (param_10 < param_9) {
      return iVar3;
    }
    fVar2 = -*(float *)(param_14 + param_10 * 4);
    fVar1 = (*(float *)(param_5 + param_10 * 4) * *(float *)(param_15 + param_10 * 4) *
             *(float *)(param_15 + param_10 * 4) +
            *(float *)(param_4 + param_10 * 4) * fVar2 * fVar2) -
            *(float *)(param_16 + param_10 * 4);
    if (*(float *)(param_7 + param_10 * 4) < *(float *)(param_15 + param_10 * 4) * fVar1 * param_12)
    break;
    if (*(float *)(param_6 + param_10 * 4) < -(fVar2 * fVar1 * param_12)) {
      return iVar3;
    }
  }
  return iVar3;
}


