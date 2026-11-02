/* Module: vegas30k.dll
   Function: FUN_010c6180
   Address: 010c6180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010c6180(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_01206534 <= uVar3) {
    uVar3 = uVar3 % DAT_01206534;
  }
  if (DAT_0120652c != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_01206534),1000000,
           DAT_0120652c);
  }
  return;
}


