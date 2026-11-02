/* Module: mp3plug.dll
   Function: FUN_5f6d51f0
   Address: 5f6d51f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d51f0(float param_1,uint param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  
  if ((DAT_5f7529a4 == 0) || (((param_2 | param_3) & 0xf) != 0)) {
    iVar10 = 0;
    uVar11 = param_4 & 0xfffffffe;
    if (0 < (int)uVar11) {
      if (0 < (int)(param_4 & 0xfffffffc)) {
        do {
          fVar3 = *(float *)(param_2 + iVar10 * 4);
          *(float *)(param_3 + 4 + iVar10 * 4) = *(float *)(param_2 + 4 + iVar10 * 4) * param_1;
          *(float *)(param_3 + iVar10 * 4) = param_1 * fVar3;
          fVar3 = *(float *)(param_2 + 8 + iVar10 * 4);
          *(float *)(param_3 + 0xc + iVar10 * 4) = *(float *)(param_2 + 0xc + iVar10 * 4) * param_1;
          *(float *)(param_3 + 8 + iVar10 * 4) = param_1 * fVar3;
          iVar10 = iVar10 + 4;
        } while (iVar10 < (int)(param_4 & 0xfffffffc));
      }
      if (iVar10 < (int)uVar11) {
        while( true ) {
          fVar3 = *(float *)(param_2 + iVar10 * 4) * param_1;
          fVar4 = param_1 * *(float *)(param_2 + 4 + iVar10 * 4);
          iVar10 = iVar10 + 2;
          if ((int)uVar11 <= iVar10) break;
          *(float *)((param_3 - 8) + iVar10 * 4) = fVar3;
          *(float *)((param_3 - 4) + iVar10 * 4) = fVar4;
        }
        *(float *)((param_3 - 8) + iVar10 * 4) = fVar3;
        *(float *)((param_3 - 4) + iVar10 * 4) = fVar4;
      }
    }
    if (iVar10 < (int)param_4) {
      while( true ) {
        fVar3 = *(float *)(param_2 + iVar10 * 4) * param_1;
        iVar10 = iVar10 + 1;
        if ((int)param_4 <= iVar10) break;
        *(float *)((param_3 - 4) + iVar10 * 4) = fVar3;
      }
      *(float *)((param_3 - 4) + iVar10 * 4) = fVar3;
    }
  }
  else {
    iVar10 = 0;
    if (0 < (int)(param_4 & 0xfffffff8)) {
      do {
        pfVar1 = (float *)(param_2 + iVar10 * 4);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = (float *)(param_2 + 0x10 + iVar10 * 4);
        fVar6 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar2 = (float *)(param_3 + iVar10 * 4);
        *pfVar2 = *pfVar1 * param_1;
        pfVar2[1] = fVar3 * param_1;
        pfVar2[2] = fVar4 * param_1;
        pfVar2[3] = fVar5 * param_1;
        pfVar1 = (float *)(param_3 + 0x10 + iVar10 * 4);
        *pfVar1 = fVar6 * param_1;
        pfVar1[1] = fVar7 * param_1;
        pfVar1[2] = fVar8 * param_1;
        pfVar1[3] = fVar9 * param_1;
        iVar10 = iVar10 + 8;
      } while (iVar10 < (int)(param_4 & 0xfffffff8));
    }
    if (iVar10 + 4 <= (int)param_4) {
      pfVar1 = (float *)(param_2 + iVar10 * 4);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar2 = (float *)(param_3 + iVar10 * 4);
      *pfVar2 = param_1 * *pfVar1;
      pfVar2[1] = param_1 * fVar3;
      pfVar2[2] = param_1 * fVar4;
      pfVar2[3] = param_1 * fVar5;
      iVar10 = iVar10 + 4;
    }
    for (; iVar10 < (int)param_4; iVar10 = iVar10 + 1) {
      *(float *)(param_3 + iVar10 * 4) = *(float *)(param_2 + iVar10 * 4) * param_1;
    }
  }
  return;
}


