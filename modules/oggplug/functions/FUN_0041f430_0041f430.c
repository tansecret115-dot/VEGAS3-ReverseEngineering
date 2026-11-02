/* Module: oggplug.dll
   Function: FUN_0041f430
   Address: 0041f430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f430(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_00450c7c <= uVar3) {
    uVar3 = uVar3 % DAT_00450c7c;
  }
  if (DAT_00450c74 != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_00450c7c),1000000,
           DAT_00450c74);
  }
  return;
}


