/* Module: sftrkfx1.dll
   Function: FUN_5cbb5070
   Address: 5cbb5070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbb5070(double *param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ftol();
  iVar3 = (param_2 + -2 + iVar2 * 3) * 8;
  dVar1 = (*(double *)(&DAT_5cc0ff18 + iVar3) - *(double *)(&DAT_5cc0ff00 + iVar3)) *
          (*param_1 - (double)iVar2 * _DAT_5cc04740) + *(double *)(&DAT_5cc0ff00 + iVar3);
  if (param_3 == 0) {
    *param_1 = *param_1 / dVar1;
  }
  else {
    *param_1 = dVar1 * *param_1;
  }
  if (_DAT_5cc04118 <= *param_1) {
    *(undefined4 *)param_1 = 0x91d14e3c;
    *(undefined4 *)((int)param_1 + 4) = 0x3fdffe5c;
  }
  return;
}


