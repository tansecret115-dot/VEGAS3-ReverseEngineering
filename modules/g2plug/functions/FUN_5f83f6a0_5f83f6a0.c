/* Module: g2plug.dll
   Function: FUN_5f83f6a0
   Address: 5f83f6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f83f6a0(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_5f876f14 <= uVar3) {
    uVar3 = uVar3 % DAT_5f876f14;
  }
  if (DAT_5f876f0c != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_5f876f14),1000000,
           DAT_5f876f0c);
  }
  return;
}


