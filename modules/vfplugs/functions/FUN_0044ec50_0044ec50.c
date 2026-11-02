/* Module: vfplugs.dll
   Function: FUN_0044ec50
   Address: 0044ec50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044ec50(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_0049405c <= uVar3) {
    uVar3 = uVar3 % DAT_0049405c;
  }
  if (DAT_00494054 != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_0049405c),1000000,
           DAT_00494054);
  }
  return;
}


