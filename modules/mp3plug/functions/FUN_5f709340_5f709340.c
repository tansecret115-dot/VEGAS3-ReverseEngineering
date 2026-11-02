/* Module: mp3plug.dll
   Function: FUN_5f709340
   Address: 5f709340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f709340(int param_1,int param_2,int param_3,float param_4,int param_5,float param_6,int param_7
            ,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_7) {
    do {
      fVar2 = *(float *)(param_5 + iVar4 * 4) * *(float *)(param_2 + iVar4 * 4);
      fVar1 = *(float *)(param_1 + iVar4 * 4);
      fVar3 = fVar1;
      if (fVar2 < fVar1) {
        fVar3 = fVar2;
      }
      fVar2 = *(float *)(param_3 + iVar4 * 4) * param_6;
      if (fVar2 < fVar3) {
        fVar3 = fVar2;
      }
      if (fVar3 < fVar1 * param_4) {
        fVar3 = fVar1 * param_4;
      }
      *(float *)(param_8 + iVar4 * 4) = fVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_7);
  }
  return;
}


