/* Module: mp3plug.dll
   Function: FUN_5f70bbc0
   Address: 5f70bbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f70bbc0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  uint local_24;
  uint uStack_20;
  
  iVar5 = 0;
  if (0 < param_6) {
    do {
      fVar2 = *(float *)(param_2 + iVar5 * 4);
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      if (*(float *)(param_3 + iVar1) < fVar2) {
        dVar6 = pow((double)(fVar2 / (float)(*(int *)(param_5 + iVar5 * 4) -
                                            *(int *)(param_5 + -4 + iVar5 * 4))),_DAT_5f760ab8);
        dVar6 = (double)*(float *)(param_4 + -4 + iVar5 * 4) / dVar6 + (double)_DAT_5f760ac4;
        uStack_20 = (uint)((ulonglong)dVar6 >> 0x20);
        local_24 = SUB84(dVar6,0);
        uVar3 = uStack_20 >> 0x14 & 0x7ff;
        if (uVar3 < 0x3ff) {
          uVar3 = 0;
        }
        else {
          uVar3 = (uStack_20 << 0xb | local_24 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f)
          ;
          if ((longlong)dVar6 < 0) {
            uVar3 = -uVar3;
          }
        }
        *(uint *)(param_1 + 0x98 + iVar5 * 4) = uVar3;
        fVar2 = *(float *)(param_2 + -4 + iVar5 * 4);
        fVar2 = fVar2 * fVar2;
        uVar3 = (uint)fVar2 & 0x7fffff;
        uVar4 = uVar3 >> 0x12;
        uVar3 = uVar3 >> 0x10 & 3;
        *(float *)(param_1 + -4 + iVar5 * 4) =
             (*(float *)(&DAT_5f74b9d4 + uVar4 * 4) * *(float *)(&DAT_5f74b9d0 + uVar3 * -4) +
              *(float *)(&DAT_5f74b9c0 + uVar3 * 4) * *(float *)(&DAT_5f74b9d8 + uVar4 * 4) +
             (float)(int)(((int)fVar2 >> 0x17 & 0xffU) - 0x7f)) * _DAT_5f760ac8;
      }
      else {
        *(undefined4 *)(param_1 + -4 + iVar5 * 4) = 0;
        *(undefined4 *)(param_1 + 0x98 + iVar5 * 4) = 0;
      }
    } while (iVar5 < param_6);
  }
  if (param_7 == 2) {
    *(undefined4 *)(param_1 + 0x138) = 0x7d;
    return;
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  return;
}


