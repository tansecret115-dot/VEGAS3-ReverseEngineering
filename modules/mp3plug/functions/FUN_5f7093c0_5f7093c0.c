/* Module: mp3plug.dll
   Function: FUN_5f7093c0
   Address: 5f7093c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_5f7093c0(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_54;
  
  local_54 = 0;
  iVar4 = 0;
  fVar3 = _DAT_5f7609a0;
  if (0 < param_3) {
    do {
      fVar1 = *(float *)(param_2 + iVar4 * 4);
      fVar2 = *(float *)(param_1 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      if (fVar1 < fVar2) {
        fVar5 = (float10)log2((float10)fVar1 / ((float10)fVar2 + (float10)_DAT_5f760990));
        local_54 = local_54 + 1;
        fVar3 = (float)((float10)fVar3 +
                       (float10)*(int *)(param_4 + -4 + iVar4 * 4) *
                       (float10)0.6931471805599453 * fVar5);
      }
    } while (iVar4 < param_3);
  }
  fVar5 = ((float10)local_54 * (float10)_DAT_5f760998 + (float10)fVar3 * (float10)_DAT_5f76099c) *
          (float10)_DAT_5f760994;
  if (fVar5 < (float10)_DAT_5f7609a8) {
    fVar5 = (float10)_DAT_5f7609ac;
  }
  return fVar5;
}


