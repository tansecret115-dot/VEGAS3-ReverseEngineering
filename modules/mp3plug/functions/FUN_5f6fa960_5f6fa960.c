/* Module: mp3plug.dll
   Function: FUN_5f6fa960
   Address: 5f6fa960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6fa960(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = 1;
  if (1 < param_1) {
    do {
      fVar2 = *(float *)(param_4 + -4 + iVar3 * 4) * *(float *)(param_3 + iVar3 * 4);
      fVar1 = *(float *)(param_4 + iVar3 * 4);
      if (fVar2 < fVar1) {
        fVar2 = fVar1;
      }
      *(float *)(param_4 + iVar3 * 4) = fVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1);
  }
  for (iVar3 = param_1 + -2; -1 < iVar3; iVar3 = iVar3 + -1) {
    fVar2 = *(float *)(param_4 + 4 + iVar3 * 4) * *(float *)(param_2 + iVar3 * 4);
    fVar1 = *(float *)(param_4 + iVar3 * 4);
    if (fVar2 < fVar1) {
      fVar2 = fVar1;
    }
    *(float *)(param_4 + iVar3 * 4) = fVar2;
  }
  iVar3 = 1;
  if (1 < param_1 + -1) {
    do {
      fVar1 = *(float *)(param_4 + -4 + iVar3 * 4);
      fVar2 = *(float *)(param_4 + 4 + iVar3 * 4);
      if (fVar2 < fVar1) {
        fVar2 = fVar1;
      }
      fVar1 = *(float *)(param_4 + iVar3 * 4) * _DAT_5f75e408;
      if (fVar2 < *(float *)(param_4 + iVar3 * 4)) {
        if (fVar1 < fVar2) {
          fVar1 = fVar2;
        }
        *(float *)(param_4 + iVar3 * 4) = fVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1 + -1);
  }
  return;
}


