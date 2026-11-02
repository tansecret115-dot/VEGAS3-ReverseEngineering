/* Module: mp3plug.dll
   Function: FUN_5f6fe000
   Address: 5f6fe000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6fe000(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      *(undefined4 *)(param_4 + iVar4 * 4) = 0;
      if (iVar3 < *(int *)(param_2 + 4 + iVar4 * 4)) {
        if (param_4 + iVar4 * 4 < param_1 + iVar3 * 4) {
          fVar1 = *(float *)(param_4 + iVar4 * 4);
          do {
            fVar2 = *(float *)(param_1 + iVar3 * 4);
            fVar1 = fVar2 * fVar2 + fVar1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_2 + 4 + iVar4 * 4));
          *(float *)(param_4 + iVar4 * 4) = fVar1;
        }
        else {
          do {
            fVar1 = *(float *)(param_1 + iVar3 * 4);
            iVar3 = iVar3 + 1;
            *(float *)(param_4 + iVar4 * 4) = fVar1 * fVar1 + *(float *)(param_4 + iVar4 * 4);
          } while (iVar3 < *(int *)(param_2 + 4 + iVar4 * 4));
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  return;
}


