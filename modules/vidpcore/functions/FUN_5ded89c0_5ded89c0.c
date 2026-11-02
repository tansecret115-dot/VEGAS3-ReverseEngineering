/* Module: vidpcore.dll
   Function: FUN_5ded89c0
   Address: 5ded89c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ded89c0(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_5df3e834 <= uVar3) {
    uVar3 = uVar3 % DAT_5df3e834;
  }
  if (DAT_5df3e82c != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_5df3e834),1000000,
           DAT_5df3e82c);
  }
  return;
}


