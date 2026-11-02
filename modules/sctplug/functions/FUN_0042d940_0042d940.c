/* Module: sctplug.dll
   Function: FUN_0042d940
   Address: 0042d940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042d940(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_0043ca04 <= uVar3) {
    uVar3 = uVar3 % DAT_0043ca04;
  }
  if (DAT_0043c9fc != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_0043ca04),1000000,
           DAT_0043c9fc);
  }
  return;
}


