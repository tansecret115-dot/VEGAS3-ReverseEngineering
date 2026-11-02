/* Module: wmfplug2.dll
   Function: FUN_0044b060
   Address: 0044b060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044b060(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_00489a8c <= uVar3) {
    uVar3 = uVar3 % DAT_00489a8c;
  }
  if (DAT_00489a84 != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_00489a8c),1000000,
           DAT_00489a84);
  }
  return;
}


