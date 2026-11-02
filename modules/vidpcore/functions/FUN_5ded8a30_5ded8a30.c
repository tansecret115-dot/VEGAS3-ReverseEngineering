/* Module: vidpcore.dll
   Function: FUN_5ded8a30
   Address: 5ded8a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ded8a30(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_5df3e830 <= uVar3) {
    uVar3 = uVar3 % DAT_5df3e830;
  }
  return (int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_5df3e830);
}


