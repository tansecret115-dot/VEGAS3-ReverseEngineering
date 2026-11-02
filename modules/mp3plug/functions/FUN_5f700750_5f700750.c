/* Module: mp3plug.dll
   Function: FUN_5f700750
   Address: 5f700750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_5f700750(float *param_1,float *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if ((DAT_5f7529a4 == 0) || (((param_3 | param_4 | (uint)param_1) & 0xf) != 0)) {
    FUN_5f6d61f0(param_1,param_2,0x240);
    iVar8 = 0x23e;
    do {
      if (param_2[iVar8 + 1] + param_2[iVar8] != (float)_DAT_5f75f458) break;
      param_2[iVar8] = 0.0;
      param_2[iVar8 + 1] = 0.0;
      *(undefined4 *)(param_3 + iVar8 * 4) = 0;
      *(undefined4 *)(param_3 + 4 + iVar8 * 4) = 0;
      *(undefined4 *)(param_4 + 4 + iVar8 * 4) = 0;
      *(undefined4 *)(param_4 + iVar8 * 4) = 0;
      iVar8 = iVar8 + -2;
    } while (-1 < iVar8);
    uVar1 = iVar8 + 2;
    if (0 < (int)uVar1) {
      iVar8 = 0;
      if (0 < (int)uVar1) {
        do {
          *(float *)(param_4 + iVar8 * 4) = SQRT(SQRT(param_2[iVar8])) * SQRT(param_2[iVar8]);
          *(float *)(param_4 + 4 + iVar8 * 4) =
               SQRT(SQRT(param_2[iVar8 + 1])) * SQRT(param_2[iVar8 + 1]);
          iVar8 = iVar8 + 2;
        } while (iVar8 < (int)uVar1);
      }
      while (iVar8 < (int)uVar1) {
        pfVar2 = param_2 + iVar8;
        iVar8 = iVar8 + 1;
        *(float *)((param_4 - 4) + iVar8 * 4) = SQRT(SQRT(*pfVar2)) * SQRT(*pfVar2);
      }
    }
    iVar8 = 0;
    if (0 < (int)uVar1) {
      do {
        if (_DAT_5f75f460 <= param_1[iVar8]) {
          *(undefined4 *)(param_3 + iVar8 * 4) = 0;
        }
        else {
          *(undefined4 *)(param_3 + iVar8 * 4) = 1;
        }
        iVar9 = iVar8 + 1;
        if ((int)uVar1 <= iVar9) {
          return uVar1;
        }
        if (_DAT_5f75f464 <= param_1[iVar9]) {
          *(undefined4 *)(param_3 + iVar9 * 4) = 0;
        }
        else {
          *(undefined4 *)(param_3 + iVar9 * 4) = 1;
        }
        iVar8 = iVar8 + 2;
      } while (iVar8 < (int)uVar1);
    }
    return uVar1;
  }
  iVar8 = 0x23e;
  do {
    if ((param_1[iVar8] != _DAT_5f75f43c) || (param_1[iVar8 + 1] != _DAT_5f75f440)) break;
    param_2[iVar8 + 1] = 0.0;
    param_2[iVar8] = 0.0;
    *(undefined4 *)(param_3 + 4 + iVar8 * 4) = 0;
    *(undefined4 *)(param_3 + iVar8 * 4) = 0;
    *(undefined4 *)(param_4 + 4 + iVar8 * 4) = 0;
    *(undefined4 *)(param_4 + iVar8 * 4) = 0;
    iVar8 = iVar8 + -2;
  } while (-1 < iVar8);
  uVar1 = iVar8 + 2;
  if (0 < (int)uVar1) {
    iVar8 = 0;
    if (0 < (int)(uVar1 & 0xfffffff8)) {
      do {
        pfVar2 = param_1 + iVar8;
        fVar4 = *pfVar2;
        fVar5 = pfVar2[1];
        fVar6 = pfVar2[2];
        fVar7 = pfVar2[3];
        auVar10._0_8_ = *(ulonglong *)pfVar2 & 0x7fffffff7fffffff;
        auVar10._8_4_ = ABS(fVar6);
        auVar10._12_4_ = ABS(fVar7);
        auVar12 = sqrtps(in_XMM4,auVar10);
        *(undefined1 (*) [16])(param_2 + iVar8) = auVar10;
        auVar10 = sqrtps(auVar10,auVar12);
        piVar3 = (int *)(param_3 + iVar8 * 4);
        *piVar3 = -(uint)(fVar4 < 0.0);
        piVar3[1] = -(uint)(fVar5 < 0.0);
        piVar3[2] = -(uint)(fVar6 < 0.0);
        piVar3[3] = -(uint)(fVar7 < 0.0);
        auVar13._0_4_ = auVar12._0_4_ * auVar10._0_4_;
        auVar13._4_4_ = auVar12._4_4_ * auVar10._4_4_;
        auVar13._8_4_ = auVar12._8_4_ * auVar10._8_4_;
        auVar13._12_4_ = auVar12._12_4_ * auVar10._12_4_;
        *(undefined1 (*) [16])(param_4 + iVar8 * 4) = auVar13;
        pfVar2 = param_1 + iVar8 + 4;
        fVar4 = *pfVar2;
        fVar5 = pfVar2[1];
        fVar6 = pfVar2[2];
        fVar7 = pfVar2[3];
        auVar12._0_8_ = *(ulonglong *)pfVar2 & 0x7fffffff7fffffff;
        auVar12._8_4_ = ABS(fVar6);
        auVar12._12_4_ = ABS(fVar7);
        auVar13 = sqrtps(auVar13,auVar12);
        *(undefined1 (*) [16])(param_2 + iVar8 + 4) = auVar12;
        auVar10 = sqrtps(auVar12,auVar13);
        piVar3 = (int *)(param_3 + 0x10 + iVar8 * 4);
        *piVar3 = -(uint)(fVar4 < 0.0);
        piVar3[1] = -(uint)(fVar5 < 0.0);
        piVar3[2] = -(uint)(fVar6 < 0.0);
        piVar3[3] = -(uint)(fVar7 < 0.0);
        in_XMM4._0_4_ = auVar13._0_4_ * auVar10._0_4_;
        in_XMM4._4_4_ = auVar13._4_4_ * auVar10._4_4_;
        in_XMM4._8_4_ = auVar13._8_4_ * auVar10._8_4_;
        in_XMM4._12_4_ = auVar13._12_4_ * auVar10._12_4_;
        *(undefined1 (*) [16])(param_4 + 0x10 + iVar8 * 4) = in_XMM4;
        iVar8 = iVar8 + 8;
      } while (iVar8 < (int)(uVar1 & 0xfffffff8));
    }
    for (; iVar8 < (int)uVar1; iVar8 = iVar8 + 4) {
      pfVar2 = param_1 + iVar8;
      fVar4 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar6 = pfVar2[2];
      fVar7 = pfVar2[3];
      auVar11._0_8_ = *(ulonglong *)pfVar2 & 0x7fffffff7fffffff;
      auVar11._8_4_ = ABS(fVar6);
      auVar11._12_4_ = ABS(fVar7);
      auVar12 = sqrtps(in_XMM4,auVar11);
      *(undefined1 (*) [16])(param_2 + iVar8) = auVar11;
      auVar10 = sqrtps(auVar11,auVar12);
      piVar3 = (int *)(param_3 + iVar8 * 4);
      *piVar3 = -(uint)(fVar4 < 0.0);
      piVar3[1] = -(uint)(fVar5 < 0.0);
      piVar3[2] = -(uint)(fVar6 < 0.0);
      piVar3[3] = -(uint)(fVar7 < 0.0);
      in_XMM4._0_4_ = auVar12._0_4_ * auVar10._0_4_;
      in_XMM4._4_4_ = auVar12._4_4_ * auVar10._4_4_;
      in_XMM4._8_4_ = auVar12._8_4_ * auVar10._8_4_;
      in_XMM4._12_4_ = auVar12._12_4_ * auVar10._12_4_;
      *(undefined1 (*) [16])(param_4 + iVar8 * 4) = in_XMM4;
    }
  }
  return uVar1;
}


