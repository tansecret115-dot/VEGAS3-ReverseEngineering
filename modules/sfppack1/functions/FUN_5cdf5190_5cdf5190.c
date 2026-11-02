/* Module: sfppack1.dll
   Function: FUN_5cdf5190
   Address: 5cdf5190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdf5190(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_5ce22eec <= uVar3) {
    uVar3 = uVar3 % DAT_5ce22eec;
  }
  if (DAT_5ce22ee4 != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_5ce22eec),1000000,
           DAT_5ce22ee4);
  }
  return;
}


