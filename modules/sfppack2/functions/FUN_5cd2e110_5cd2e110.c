/* Module: sfppack2.dll
   Function: FUN_5cd2e110
   Address: 5cd2e110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd2e110(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_5cd63674 <= uVar3) {
    uVar3 = uVar3 % DAT_5cd63674;
  }
  if (DAT_5cd6366c != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_5cd63674),1000000,
           DAT_5cd6366c);
  }
  return;
}


