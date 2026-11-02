/* Module: mp3plug.dll
   Function: FUN_5f70ba10
   Address: 5f70ba10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f70ba10(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  double dVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  uint local_3c;
  uint uStack_38;
  
  iVar6 = 0;
  if (0 < param_3) {
    do {
      fVar7 = FUN_5f6d87a0((float *)(param_2 + *(int *)(param_5 + iVar6 * 4) * 4),
                           *(int *)(param_4 + iVar6 * 4));
      iVar4 = *(int *)(param_4 + iVar6 * 4);
      fVar8 = (float10)_DAT_5f760a80;
      fVar2 = _DAT_5f760a7c;
      if (0 < iVar4) {
        iVar5 = 0;
        do {
          fVar9 = (float10)*(float *)(param_2 + iVar5 + *(int *)(param_5 + iVar6 * 4) * 4);
          fVar8 = (fVar9 * fVar9 *
                   (float10)(double)((float10)iVar4 /
                                    (fVar7 * (float10)*(float *)(param_1 + iVar6 * 4) +
                                    (float10)_DAT_5f760a74)) + (float10)_DAT_5f760a84) * fVar8;
          if ((float10)_DAT_5f760a88 < fVar8) {
            fVar9 = (float10)log2((float10)(double)fVar8);
            fVar8 = (float10)_DAT_5f760a90;
            fVar2 = (float)((float10)0.6931471805599453 * fVar9 + (float10)fVar2);
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 < iVar4 * 4);
      }
      fVar7 = (float10)log2(fVar8);
      dVar1 = (double)(((float10)0.6931471805599453 * fVar7 + (float10)fVar2) *
                       (float10)_DAT_5f760a58 + (float10)_DAT_5f760a98);
      uStack_38 = (uint)((ulonglong)dVar1 >> 0x20);
      local_3c = SUB84(dVar1,0);
      uVar3 = uStack_38 >> 0x14 & 0x7ff;
      if (uVar3 < 0x3ff) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uStack_38 << 0xb | local_3c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f);
        if ((longlong)dVar1 < 0) {
          uVar3 = -uVar3;
        }
      }
      *(uint *)(param_6 + iVar6 * 4) = uVar3;
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_3);
  }
  iVar6 = param_3 + -1;
  if (-1 < iVar6) {
    while ((float)_DAT_5f760aa0 < *(float *)(param_1 + iVar6 * 4)) {
      *(undefined4 *)(param_6 + iVar6 * 4) = 0;
      iVar4 = iVar6 + -1;
      if (iVar4 < 0) {
        return;
      }
      if (*(float *)(param_1 + iVar4 * 4) <= (float)_DAT_5f760aa8) {
        return;
      }
      *(undefined4 *)(param_6 + iVar4 * 4) = 0;
      iVar6 = iVar6 + -2;
      if (iVar6 < 0) {
        return;
      }
    }
  }
  return;
}


