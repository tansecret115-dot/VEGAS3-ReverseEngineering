/* Module: sfconfigmgr.dll
   Function: FUN_00414bf0
   Address: 00414bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00414bf0(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_00422e70 <= uVar3) {
    uVar3 = uVar3 % DAT_00422e70;
  }
  return (int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_00422e70);
}


