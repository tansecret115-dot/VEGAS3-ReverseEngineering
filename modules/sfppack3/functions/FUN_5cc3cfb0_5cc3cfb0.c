/* Module: sfppack3.dll
   Function: FUN_5cc3cfb0
   Address: 5cc3cfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cc3cfb0(int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  
  iVar4 = param_2;
  if (param_3 < param_2) {
    iVar4 = param_3;
    param_3 = param_2;
  }
  if ((double)(param_3 - iVar4) != _DAT_5cc87cd8) {
    iVar3 = iVar4 + 1;
    dVar1 = *(double *)(param_1 + param_3 * 8);
    dVar2 = *(double *)(param_1 + iVar4 * 8);
    if (iVar3 < param_3) {
      pdVar6 = (double *)(param_1 + iVar3 * 8);
      do {
        iVar5 = iVar3 - iVar4;
        iVar3 = iVar3 + 1;
        *pdVar6 = (double)iVar5 * ((dVar1 - dVar2) / (double)(param_3 - iVar4)) +
                  *(double *)(param_1 + iVar4 * 8);
        pdVar6 = pdVar6 + 1;
      } while (iVar3 < param_3);
    }
  }
  return;
}


