/* Module: ednt3260.dll
   Function: FUN_630f9550
   Address: 630f9550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f9550(int param_1,int param_2,short param_3,short param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_3;
  if (iVar3 < param_4) {
    iVar2 = param_4 - iVar3;
    psVar1 = (short *)(param_1 + iVar3 * 2);
    do {
      *psVar1 = *psVar1 + *(short *)((param_2 - param_1) + (int)psVar1);
      psVar1 = psVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


