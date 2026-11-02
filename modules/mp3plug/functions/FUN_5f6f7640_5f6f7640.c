/* Module: mp3plug.dll
   Function: FUN_5f6f7640
   Address: 5f6f7640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6f7640(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  uint local_4c;
  uint uStack_48;
  uint local_3c;
  uint uStack_38;
  
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      fVar1 = *(float *)(param_1 + 0x1e8 + iVar8 * 4);
      fVar2 = *(float *)(param_1 + 0xb0 + iVar8 * 4);
      fVar3 = (_DAT_5f75e398 / *(float *)(param_3 + iVar8 * 4)) *
              *(float *)(param_1 + 0x1e8 + iVar8 * 4);
      fVar3 = fVar3 * fVar3;
      uVar5 = (uint)fVar3 & 0x7fffff;
      uVar6 = uVar5 >> 0x12;
      uVar5 = uVar5 >> 0x10 & 3;
      dVar9 = floor((double)(((float)(int)(((int)fVar3 >> 0x17 & 0xffU) - 0x7f) +
                             *(float *)(&DAT_5f741f74 + uVar5 * 4) *
                             *(float *)(&DAT_5f741ef4 + uVar6 * 4) +
                             *(float *)(&DAT_5f741ef0 + uVar6 * 4) *
                             *(float *)(&DAT_5f741f84 + uVar5 * -4)) * _DAT_5f75e39c * _DAT_5f75e3a0
                            + _DAT_5f75e3a4));
      uStack_48 = (uint)((ulonglong)dVar9 >> 0x20);
      local_4c = SUB84(dVar9,0);
      uVar5 = uStack_48 >> 0x14 & 0x7ff;
      if (uVar5 < 0x3ff) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uStack_48 << 0xb | local_4c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar5 & 0x1f);
        if ((longlong)dVar9 < 0) {
          uVar5 = -uVar5;
        }
      }
      fVar3 = *(float *)(param_4 + iVar8 * 4);
      if (_DAT_5f75e3a8 < fVar3) {
        uVar6 = (uint)(fVar3 * fVar3) & 0x7fffff;
        uVar7 = uVar6 >> 0x12;
        uVar6 = uVar6 >> 0x10 & 3;
        dVar9 = ceil(((double)*(float *)(&DAT_5f741ef0 + uVar7 * 4) *
                      (double)*(float *)(&DAT_5f741f84 + uVar6 * -4) +
                      (double)*(float *)(&DAT_5f741f74 + uVar6 * 4) *
                      (double)*(float *)(&DAT_5f741ef4 + uVar7 * 4) +
                     (double)(int)(((int)(fVar3 * fVar3) >> 0x17 & 0xffU) - 0x7f)) *
                     (double)_DAT_5f75e3ac * _DAT_5f75e3b0 * (double)_DAT_5f75e390 +
                     (double)_DAT_5f75e38c);
        uStack_38 = (uint)((ulonglong)dVar9 >> 0x20);
        local_3c = SUB84(dVar9,0);
        uVar6 = uStack_38 >> 0x14 & 0x7ff;
        if (uVar6 < 0x3ff) {
          uVar6 = 0;
        }
        else {
          uVar6 = (uStack_38 << 0xb | local_3c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar6 & 0x1f)
          ;
          if ((longlong)dVar9 < 0) {
            uVar6 = -uVar6;
          }
        }
        if ((int)uVar5 < (int)uVar6) {
          uVar5 = uVar6;
        }
      }
      if ((fVar2 <= _DAT_5f75e3b8) || (fVar2 <= fVar1)) {
        iVar4 = -9999;
      }
      else {
        iVar4 = -uVar5;
      }
      *(int *)(param_2 + iVar8 * 4) = iVar4;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0xc));
  }
  if (iVar8 < *(int *)(param_1 + 8)) {
    do {
      *(undefined4 *)(param_2 + iVar8 * 4) = 0xffffd8f1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 8));
  }
  return;
}


