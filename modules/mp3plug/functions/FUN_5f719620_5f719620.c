/* Module: mp3plug.dll
   Function: FUN_5f719620
   Address: 5f719620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f719620(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_1 + 4) * 0x94;
  iVar7 = 0;
  do {
    iVar5 = *(int *)(param_1 + 0x18) * 0x1bc;
    iVar1 = iVar7 + 1;
    fVar3 = (float)_DAT_5f7663b8;
    if (*(int *)(&DAT_5f7698b0 + iVar7 * 4 + iVar5 + iVar8) <
        *(int *)(&DAT_5f7698b4 + iVar8 + iVar5 + iVar7 * 4)) {
      iVar6 = param_2 + *(int *)(&DAT_5f7698b0 + iVar7 * 4 + iVar5 + iVar8) * 4;
      iVar5 = param_2 + *(int *)(&DAT_5f7698b4 + iVar8 + iVar5 + iVar7 * 4) * 4;
      iVar9 = (iVar5 - iVar6 & 0xfffffff8U) + iVar6;
      if (iVar6 < iVar9) {
        while( true ) {
          fVar3 = *(float *)(iVar6 + 0x6c) * *(float *)(iVar6 + 0x6c) + fVar3;
          fVar4 = *(float *)(iVar6 + 0x70) * *(float *)(iVar6 + 0x70);
          iVar6 = iVar6 + 8;
          if (iVar9 <= iVar6) break;
          fVar3 = fVar4 + fVar3;
        }
        fVar3 = fVar4 + fVar3;
      }
      if (iVar6 < iVar5) {
        while( true ) {
          pfVar2 = (float *)(iVar6 + 0x6c);
          iVar6 = iVar6 + 4;
          fVar4 = *pfVar2 * *pfVar2;
          if (iVar5 <= iVar6) break;
          fVar3 = fVar4 + fVar3;
        }
        fVar3 = fVar4 + fVar3;
      }
    }
    *(float *)(param_2 + 0x96c + iVar7 * 4) = fVar3;
    iVar7 = iVar1;
  } while (iVar1 < 0x16);
  *(undefined4 *)(param_2 + 0x9c8) = 1;
  return;
}


