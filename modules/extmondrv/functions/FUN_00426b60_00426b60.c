/* Module: extmondrv.dll
   Function: FUN_00426b60
   Address: 00426b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426b60(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_0045ac64 <= uVar3) {
    uVar3 = uVar3 % DAT_0045ac64;
  }
  if (DAT_0045ac5c != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_0045ac64),1000000,
           DAT_0045ac5c);
  }
  return;
}


