/* Module: ednt3260.dll
   Function: FUN_630f8ab0
   Address: 630f8ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_630f8ab0(double *param_1,short *param_2,short param_3,short param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  if (0 < iVar2) {
    do {
      if (*param_1 < _DAT_63102b28) {
        if (*param_1 < _DAT_63102b30) {
          *(undefined4 *)param_1 = 0;
          *(undefined4 *)((int)param_1 + 4) = 0xbff00000;
        }
      }
      else {
        *(undefined4 *)param_1 = 0xbf935359;
        *(undefined4 *)((int)param_1 + 4) = 0x3fefffff;
      }
      sVar1 = FUN_630f95c0(*param_1,param_4);
      *param_2 = sVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


