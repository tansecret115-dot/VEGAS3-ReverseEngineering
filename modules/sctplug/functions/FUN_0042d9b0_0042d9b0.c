/* Module: sctplug.dll
   Function: FUN_0042d9b0
   Address: 0042d9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042d9b0(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_0043ca00 <= uVar3) {
    uVar3 = uVar3 % DAT_0043ca00;
  }
  return (int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_0043ca00);
}


