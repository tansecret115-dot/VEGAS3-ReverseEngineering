/* Module: ednt3260.dll
   Function: FUN_630f2850
   Address: 630f2850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f2850(short *param_1,short *param_2,short param_3)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  sVar3 = 0x18;
  psVar1 = param_1;
  iVar2 = iVar4;
  if (0 < iVar4) {
    do {
      if (*psVar1 < sVar3) {
        sVar3 = *psVar1;
      }
      iVar2 = iVar2 + -1;
      psVar1 = psVar1 + 1;
    } while (iVar2 != 0);
  }
  sVar3 = *(short *)(&DAT_63101a38 + sVar3 * 2);
  *param_2 = sVar3;
  sVar3 = (sVar3 + 5) * 3;
  if (0 < iVar4) {
    do {
      if (sVar3 < *param_1) {
        *param_1 = sVar3;
      }
      param_1 = param_1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


