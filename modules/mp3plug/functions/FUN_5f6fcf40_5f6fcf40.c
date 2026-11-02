/* Module: mp3plug.dll
   Function: FUN_5f6fcf40
   Address: 5f6fcf40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6fcf40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = -0x20;
  iVar8 = 0x11;
  iVar9 = 0x12;
  do {
    pfVar6 = (float *)(param_1 + iVar9 * 4);
    fVar1 = *(float *)(iVar7 + 0x5f747048);
    fVar2 = *(float *)((int)&DAT_5f747028 + iVar7);
    iVar5 = -0x1f;
    pfVar4 = (float *)(param_1 + iVar8 * 4);
    while( true ) {
      fVar3 = *pfVar6;
      *pfVar6 = *pfVar6 * fVar1 - *pfVar4 * fVar2;
      fVar3 = *pfVar4 * fVar1 + fVar3 * fVar2;
      pfVar6 = pfVar6 + 0x12;
      iVar5 = iVar5 + 1;
      if (iVar5 == 0) break;
      *pfVar4 = fVar3;
      pfVar4 = pfVar4 + 0x12;
    }
    *pfVar4 = fVar3;
    iVar8 = iVar8 + -1;
    iVar9 = iVar9 + 1;
    iVar7 = iVar7 + 4;
  } while (iVar7 != 0);
  return 0;
}


