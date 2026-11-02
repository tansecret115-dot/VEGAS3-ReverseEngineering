/* Module: 28_83260.dll
   Function: FUN_100040b0
   Address: 100040b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100040b0(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  fVar1 = _DAT_100070c4;
  iVar5 = iVar4;
  do {
    while (iVar4 < 0x14) {
      iVar2 = iVar4 + 4;
      iVar3 = iVar4 - iVar5;
      iVar4 = iVar2;
      fVar1 = *(float *)(param_1 + iVar3) * *(float *)(param_2 + -4 + iVar2) + fVar1;
    }
    *(float *)(param_3 + iVar5) = fVar1;
    iVar4 = iVar5 + 4;
    fVar1 = _DAT_100070c4;
    iVar5 = iVar4;
  } while (iVar4 < 0x14);
  return;
}


