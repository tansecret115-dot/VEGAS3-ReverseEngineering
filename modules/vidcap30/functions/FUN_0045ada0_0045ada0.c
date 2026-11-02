/* Module: vidcap30.exe
   Function: FUN_0045ada0
   Address: 0045ada0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ada0(int *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  
  if (*param_1 == -1) {
    pdVar1 = (double *)(param_1 + 2);
    dVar4 = *pdVar1;
    dVar3 = *pdVar1;
    dVar2 = *pdVar1;
    dVar6 = floor(*pdVar1);
    if (dVar6 == dVar2) {
      iVar5 = 7;
      if (_DAT_0058c288 != dVar3) {
        iVar5 = 3;
      }
      *param_1 = iVar5;
      return;
    }
    if (ABS(dVar4 - _DAT_0058a858) < _DAT_0058a508) {
      *param_1 = 8;
      return;
    }
    *param_1 = 1;
  }
  return;
}


