/* Module: sfconfigmgr.dll
   Function: FUN_00414b80
   Address: 00414b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414b80(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_00422e74 <= uVar3) {
    uVar3 = uVar3 % DAT_00422e74;
  }
  if (DAT_00422e6c != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_00422e74),1000000,
           DAT_00422e6c);
  }
  return;
}


