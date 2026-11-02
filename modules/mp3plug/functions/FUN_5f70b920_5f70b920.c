/* Module: mp3plug.dll
   Function: FUN_5f70b920
   Address: 5f70b920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f70b920(int param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      fVar4 = (float10)*(float *)(param_1 + iVar3 * 4);
      if (fVar4 < (float10)_DAT_5f760a5c) {
        fVar4 = (float10)log2(fVar4);
        fVar4 = (float10)*(int *)(param_3 + iVar3 * 4) *
                (float10)0.6931471805599453 * fVar4 * (float10)_DAT_5f760a58 +
                (float10)_DAT_5f760a54;
      }
      else {
        fVar4 = (float10)_DAT_5f760a70;
      }
      fVar4 = fVar4 * (float10)_DAT_5f760a50;
      if (fVar4 < (float10)_DAT_5f760a60) {
        fVar4 = (float10)_DAT_5f760a64;
      }
      dVar1 = (double)(fVar4 + (float10)_DAT_5f760a68);
      uStack_18 = (uint)((ulonglong)dVar1 >> 0x20);
      local_1c = SUB84(dVar1,0);
      uVar2 = uStack_18 >> 0x14 & 0x7ff;
      if (uVar2 < 0x3ff) {
        uVar2 = 0;
      }
      else {
        uVar2 = (uStack_18 << 0xb | local_1c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar2 & 0x1f);
        if ((longlong)dVar1 < 0) {
          uVar2 = -uVar2;
        }
      }
      *(uint *)(param_4 + iVar3 * 4) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return;
}


