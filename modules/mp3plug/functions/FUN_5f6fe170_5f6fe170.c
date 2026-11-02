/* Module: mp3plug.dll
   Function: FUN_5f6fe170
   Address: 5f6fe170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6fe170(int param_1,int param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      fVar3 = *(float *)(param_1 + iVar4 * 4) * param_3;
      fVar2 = *(float *)(param_5 + iVar4 * 4) * param_4;
      *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_5 + iVar4 * 4);
      fVar1 = *(float *)(param_5 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      if (fVar3 < fVar1) {
        *(float *)(param_5 + -4 + iVar4 * 4) = fVar3;
        fVar1 = *(float *)(param_5 + -4 + iVar4 * 4);
      }
      if (fVar1 < fVar2) {
        *(float *)(param_5 + -4 + iVar4 * 4) = fVar2;
      }
    } while (iVar4 < param_2);
  }
  return;
}


