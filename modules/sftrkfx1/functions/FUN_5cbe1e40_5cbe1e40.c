/* Module: sftrkfx1.dll
   Function: FUN_5cbe1e40
   Address: 5cbe1e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbe1e40(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_5cc10f4c <= uVar3) {
    uVar3 = uVar3 % DAT_5cc10f4c;
  }
  if (DAT_5cc10f44 != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_5cc10f4c),1000000,
           DAT_5cc10f44);
  }
  return;
}


