/* Module: mp3plug.dll
   Function: FUN_5f6fe0d0
   Address: 5f6fe0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6fe0d0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_4) {
    do {
      *(undefined4 *)(param_5 + iVar3 * 4) = 0;
      *(undefined4 *)(param_6 + iVar3 * 4) = 0;
      if (iVar2 < *(int *)(param_3 + 4 + iVar3 * 4)) {
        do {
          fVar1 = *(float *)(param_2 + iVar2 * 4) + *(float *)(param_1 + iVar2 * 4);
          *(float *)(param_5 + iVar3 * 4) = fVar1 * fVar1 + *(float *)(param_5 + iVar3 * 4);
          fVar1 = *(float *)(param_1 + iVar2 * 4) - *(float *)(param_2 + iVar2 * 4);
          iVar2 = iVar2 + 1;
          *(float *)(param_6 + iVar3 * 4) = fVar1 * fVar1 + *(float *)(param_6 + iVar3 * 4);
        } while (iVar2 < *(int *)(param_3 + 4 + iVar3 * 4));
      }
      fVar1 = (float)_DAT_5f75e788;
      *(float *)(param_5 + iVar3 * 4) = (float)_DAT_5f75e780 * *(float *)(param_5 + iVar3 * 4);
      *(float *)(param_6 + iVar3 * 4) = fVar1 * *(float *)(param_6 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  return;
}


