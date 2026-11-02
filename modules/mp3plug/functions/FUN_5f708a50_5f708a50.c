/* Module: mp3plug.dll
   Function: FUN_5f708a50
   Address: 5f708a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f708a50(int param_1,int param_2,int param_3,int param_4,int param_5,float param_6,int param_7,
            int param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  iVar8 = 0;
  if (0 < param_4) {
    do {
      uVar6 = *(uint *)(param_5 + iVar10 * 4);
      iVar9 = 0;
      fVar2 = _DAT_5f760940;
      fVar5 = _DAT_5f760944;
      if (0 < (int)uVar6) {
        fVar4 = _DAT_5f760940;
        if (0 < (int)(uVar6 & 0xfffffffe)) {
          while( true ) {
            fVar2 = *(float *)(param_1 + iVar8 * 8);
            fVar3 = *(float *)(param_1 + 4 + iVar8 * 8);
            fVar7 = fVar3 * fVar3 + fVar2 * fVar2;
            fVar2 = *(float *)(param_1 + 8 + iVar8 * 8);
            fVar4 = fVar7 + fVar4;
            fVar3 = *(float *)(param_1 + 0xc + iVar8 * 8);
            fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
            fVar5 = *(float *)(param_2 + 4 + iVar8 * 4) * fVar2 +
                    fVar5 + *(float *)(param_2 + iVar8 * 4) * fVar7;
            iVar9 = iVar9 + 2;
            iVar8 = iVar8 + 2;
            if ((int)(uVar6 & 0xfffffffe) <= iVar9) break;
            fVar4 = fVar2 + fVar4;
          }
          fVar2 = fVar2 + fVar4;
        }
        if (iVar9 < (int)uVar6) {
          while( true ) {
            fVar4 = *(float *)(param_1 + iVar8 * 8);
            fVar3 = *(float *)(param_1 + 4 + iVar8 * 8);
            iVar1 = iVar8 * 4;
            fVar4 = fVar3 * fVar3 + fVar4 * fVar4;
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 1;
            fVar3 = *(float *)(param_2 + iVar1) * fVar4;
            fVar2 = fVar4 + fVar2;
            if ((int)uVar6 <= iVar9) break;
            fVar5 = fVar3 + fVar5;
          }
          fVar5 = fVar3 + fVar5;
        }
      }
      *(float *)(param_7 + iVar10 * 4) = fVar2;
      *(float *)(param_8 + iVar10 * 4) = fVar5;
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_4);
  }
  for (; param_4 < param_3; param_4 = param_4 + 1) {
    uVar6 = *(uint *)(param_5 + param_4 * 4);
    iVar10 = 0;
    fVar2 = _DAT_5f760948;
    if (0 < (int)uVar6) {
      fVar5 = _DAT_5f760948;
      if (0 < (int)(uVar6 & 0xfffffffe)) {
        while( true ) {
          fVar2 = *(float *)(param_1 + iVar8 * 8);
          fVar4 = *(float *)(param_1 + 4 + iVar8 * 8);
          fVar3 = *(float *)(param_1 + 8 + iVar8 * 8);
          fVar5 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5;
          fVar2 = *(float *)(param_1 + 0xc + iVar8 * 8);
          iVar10 = iVar10 + 2;
          iVar8 = iVar8 + 2;
          fVar2 = fVar2 * fVar2 + fVar3 * fVar3;
          if ((int)(uVar6 & 0xfffffffe) <= iVar10) break;
          fVar5 = fVar2 + fVar5;
        }
        fVar2 = fVar2 + fVar5;
      }
      if (iVar10 < (int)uVar6) {
        while( true ) {
          fVar5 = *(float *)(param_1 + iVar8 * 8);
          fVar4 = *(float *)(param_1 + 4 + iVar8 * 8);
          iVar10 = iVar10 + 1;
          iVar8 = iVar8 + 1;
          fVar5 = fVar4 * fVar4 + fVar5 * fVar5;
          if ((int)uVar6 <= iVar10) break;
          fVar2 = fVar5 + fVar2;
        }
        fVar2 = fVar5 + fVar2;
      }
    }
    *(float *)(param_7 + param_4 * 4) = fVar2;
    *(float *)(param_8 + param_4 * 4) = param_6 * fVar2;
  }
  return;
}


