/* Module: mp3plug.dll
   Function: FUN_5f704ee0
   Address: 5f704ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f704ee0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar5 = 0;
  if (0 < param_3) {
    do {
      uVar4 = *(uint *)(param_4 + iVar7 * 4);
      iVar6 = 0;
      fVar2 = _DAT_5f7603d0;
      if (0 < (int)uVar4) {
        fVar3 = _DAT_5f7603d0;
        if (0 < (int)(uVar4 & 0xfffffffe)) {
          while( true ) {
            fVar1 = *(float *)(param_1 + iVar5 * 4);
            iVar6 = iVar6 + 2;
            fVar2 = *(float *)(param_1 + (iVar5 + param_2) * 4);
            fVar3 = fVar1 * fVar1 + fVar3;
            fVar2 = fVar2 * fVar2;
            iVar5 = iVar5 + param_2 + param_2;
            if ((int)(uVar4 & 0xfffffffe) <= iVar6) break;
            fVar3 = fVar2 + fVar3;
          }
          fVar2 = fVar2 + fVar3;
        }
        if (iVar6 < (int)uVar4) {
          while( true ) {
            fVar3 = *(float *)(param_1 + iVar5 * 4);
            iVar5 = iVar5 + param_2;
            iVar6 = iVar6 + 1;
            fVar3 = fVar3 * fVar3;
            if ((int)uVar4 <= iVar6) break;
            fVar2 = fVar3 + fVar2;
          }
          fVar2 = fVar3 + fVar2;
        }
      }
      *(float *)(param_5 + iVar7 * 4) = fVar2;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3);
  }
  return;
}


