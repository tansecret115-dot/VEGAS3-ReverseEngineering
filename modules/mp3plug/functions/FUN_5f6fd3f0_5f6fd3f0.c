/* Module: mp3plug.dll
   Function: FUN_5f6fd3f0
   Address: 5f6fd3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6fd3f0(int param_1,int param_2,float param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar3 = (_DAT_5f75e6a0 + param_3) * _DAT_5f75e6a4;
  fVar4 = (_DAT_5f75e6a8 - param_3) * _DAT_5f75e6ac;
  iVar5 = 0;
  if (0 < (int)param_4) {
    if (0 < (int)(param_4 & 0xfffffffe)) {
      do {
        fVar1 = *(float *)(param_2 + iVar5 * 4);
        fVar2 = *(float *)(param_1 + iVar5 * 4);
        *(float *)(param_2 + iVar5 * 4) =
             *(float *)(param_2 + iVar5 * 4) * fVar3 + *(float *)(param_1 + iVar5 * 4) * fVar4;
        *(float *)(param_1 + iVar5 * 4) = fVar2 * fVar3 + fVar1 * fVar4;
        fVar1 = *(float *)(param_1 + 4 + iVar5 * 4);
        fVar2 = *(float *)(param_2 + 4 + iVar5 * 4);
        *(float *)(param_2 + 4 + iVar5 * 4) =
             *(float *)(param_1 + 4 + iVar5 * 4) * fVar4 +
             *(float *)(param_2 + 4 + iVar5 * 4) * fVar3;
        *(float *)(param_1 + 4 + iVar5 * 4) = fVar2 * fVar4 + fVar1 * fVar3;
        iVar5 = iVar5 + 2;
      } while (iVar5 < (int)(param_4 & 0xfffffffe));
    }
    if (iVar5 < (int)param_4) {
      while( true ) {
        fVar1 = *(float *)(param_1 + iVar5 * 4) * fVar3 + *(float *)(param_2 + iVar5 * 4) * fVar4;
        *(float *)(param_2 + iVar5 * 4) =
             *(float *)(param_2 + iVar5 * 4) * fVar3 + *(float *)(param_1 + iVar5 * 4) * fVar4;
        iVar5 = iVar5 + 1;
        if ((int)param_4 <= iVar5) break;
        *(float *)(param_1 + -4 + iVar5 * 4) = fVar1;
      }
      *(float *)(param_1 + -4 + iVar5 * 4) = fVar1;
    }
  }
  return;
}


