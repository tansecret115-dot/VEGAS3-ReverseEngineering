/* Module: Setup.exe
   Function: FUN_00415690
   Address: 00415690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415690(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_00444064 <= uVar3) {
    uVar3 = uVar3 % DAT_00444064;
  }
  if (DAT_0044405c != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_00444064),1000000,
           DAT_0044405c);
  }
  return;
}


