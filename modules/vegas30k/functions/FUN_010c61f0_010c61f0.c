/* Module: vegas30k.dll
   Function: FUN_010c61f0
   Address: 010c61f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010c61f0(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_01206530 <= uVar3) {
    uVar3 = uVar3 % DAT_01206530;
  }
  return (int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_01206530);
}


