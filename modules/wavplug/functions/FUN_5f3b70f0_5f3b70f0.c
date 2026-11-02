/* Module: wavplug.dll
   Function: FUN_5f3b70f0
   Address: 5f3b70f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3b70f0(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_5f3daee4 <= uVar3) {
    uVar3 = uVar3 % DAT_5f3daee4;
  }
  if (DAT_5f3daedc != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_5f3daee4),1000000,
           DAT_5f3daedc);
  }
  return;
}


