/* Module: sfppack3.dll
   Function: FUN_5cc4a220
   Address: 5cc4a220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_5cc4a220(int param_1,float param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  
  iVar1 = ftol();
  fVar2 = (float10)*(double *)(param_1 + 0x20e0) *
          (float10)*(double *)(param_1 + 0x20f0 + param_5 * 8) +
          (float10)*(double *)(param_1 + 0x180 + iVar1 * 8) * (float10)*(double *)(param_1 + 0x178)
          * (float10)param_2 * (float10)*(double *)(param_1 + 0x20e8);
  if (ABS(fVar2) < (float10)_DAT_5cc87d48) {
    fVar2 = (float10)_DAT_5cc87cd8;
  }
  *(double *)(param_1 + 0x20f0 + param_5 * 8) = (double)fVar2;
  return fVar2 + extraout_ST0;
}


