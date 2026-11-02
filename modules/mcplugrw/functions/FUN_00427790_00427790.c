/* Module: mcplugrw.dll
   Function: FUN_00427790
   Address: 00427790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427790(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_004a648c <= uVar3) {
    uVar3 = uVar3 % DAT_004a648c;
  }
  if (DAT_004a6484 != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_004a648c),1000000,
           DAT_004a6484);
  }
  return;
}


