/* Module: aviplug.dll
   Function: FUN_5f9c5010
   Address: 5f9c5010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9c5010(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_5f9f3a9c <= uVar3) {
    uVar3 = uVar3 % DAT_5f9f3a9c;
  }
  if (DAT_5f9f3a94 != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_5f9f3a9c),1000000,
           DAT_5f9f3a94);
  }
  return;
}


