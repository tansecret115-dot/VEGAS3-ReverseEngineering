/* Module: qt4plug.dll
   Function: FUN_5f549a20
   Address: 5f549a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f549a20(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_5f5a3cc0 <= uVar3) {
    uVar3 = uVar3 % DAT_5f5a3cc0;
  }
  return (int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_5f5a3cc0);
}


