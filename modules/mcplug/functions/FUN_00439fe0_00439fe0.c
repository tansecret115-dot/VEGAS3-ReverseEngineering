/* Module: mcplug.dll
   Function: FUN_00439fe0
   Address: 00439fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00439fe0(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_004876f4 <= uVar3) {
    uVar3 = uVar3 % DAT_004876f4;
  }
  if (DAT_004876ec != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_004876f4),1000000,
           DAT_004876ec);
  }
  return;
}


