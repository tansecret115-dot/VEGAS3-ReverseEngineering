/* Module: sfxpfx2.dll
   Function: FUN_5c8c0410
   Address: 5c8c0410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8c0410(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_5c8e8a94 <= uVar3) {
    uVar3 = uVar3 % DAT_5c8e8a94;
  }
  if (DAT_5c8e8a8c != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_5c8e8a94),1000000,
           DAT_5c8e8a8c);
  }
  return;
}


