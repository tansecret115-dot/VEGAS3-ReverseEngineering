/* Module: mp3plug.dll
   Function: FUN_5f70bd40
   Address: 5f70bd40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f70bd40(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_2c;
  uint uStack_28;
  
  iVar6 = 0;
  *(float *)(param_1 + 0x314) = (float)*(int *)(param_1 + 0x138);
  *(float *)(param_1 + 0x310) = (float)*(int *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (0 < param_4) {
    do {
      fVar1 = *(float *)(param_3 + iVar6 * 4);
      if (*(float *)(param_3 + iVar6 * 4) < *(float *)(param_2 + iVar6 * 4)) {
        fVar1 = fVar1 * fVar1;
        uVar5 = *(uint *)(param_1 + 0x9c + iVar6 * 4);
        uVar7 = (uint)fVar1 & 0x7fffff;
        uVar8 = uVar7 >> 0x12;
        uVar7 = uVar7 >> 0x10 & 3;
        fVar3 = *(float *)(param_1 + iVar6 * 4) -
                (*(float *)(&DAT_5f74b9d4 + uVar8 * 4) * *(float *)(&DAT_5f74b9d0 + uVar7 * -4) +
                 *(float *)(&DAT_5f74b9c0 + uVar7 * 4) * *(float *)(&DAT_5f74b9d8 + uVar8 * 4) +
                (float)(int)(((int)fVar1 >> 0x17 & 0xffU) - 0x7f)) * _DAT_5f760adc;
        fVar1 = *(float *)(param_1 + iVar6 * 4);
        if (fVar3 < _DAT_5f760ad8) {
          fVar4 = (float)(int)uVar5;
          *(float *)(param_1 + 0x13c + iVar6 * 4) = (fVar3 * _DAT_5f760ad4 + _DAT_5f760ad0) * fVar4;
          *(float *)(param_1 + 0x1d8 + iVar6 * 4) = (fVar1 * _DAT_5f760ad4 + _DAT_5f760ad0) * fVar4;
          dVar2 = (double)(fVar4 * _DAT_5f760ad4 + _DAT_5f760ae0);
          uStack_28 = (uint)((ulonglong)dVar2 >> 0x20);
          local_2c = SUB84(dVar2,0);
          uVar5 = uStack_28 >> 0x14 & 0x7ff;
          if (uVar5 < 0x3ff) {
            uVar5 = 0;
          }
          else {
            uVar5 = (uStack_28 << 0xb | local_2c >> 0x15 | 0x80000000) >>
                    (0x1eU - (char)uVar5 & 0x1f);
            if ((longlong)dVar2 < 0) {
              uVar5 = -uVar5;
            }
          }
        }
        else {
          *(float *)(param_1 + 0x13c + iVar6 * 4) = fVar3 * (float)(int)uVar5;
          *(float *)(param_1 + 0x1d8 + iVar6 * 4) = (float)(int)uVar5 * fVar1;
        }
        *(uint *)(param_1 + 0x274 + iVar6 * 4) = uVar5;
      }
      else {
        *(undefined4 *)(param_1 + 0x13c + iVar6 * 4) = 0;
        *(undefined4 *)(param_1 + 0x1d8 + iVar6 * 4) = 0;
        *(undefined4 *)(param_1 + 0x274 + iVar6 * 4) = 0;
      }
      iVar9 = iVar6 * 4;
      *(float *)(param_1 + 0x310) =
           *(float *)(param_1 + 0x13c + iVar9) + *(float *)(param_1 + 0x310);
      iVar6 = iVar6 + 1;
      *(float *)(param_1 + 0x314) =
           *(float *)(param_1 + 0x314) + *(float *)(param_1 + 0x1d8 + iVar9);
      *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x274 + iVar9) + *(int *)(param_1 + 0x318);
    } while (iVar6 < param_4);
  }
  return;
}


