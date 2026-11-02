/* Module: vidcap30.exe
   Function: FUN_00522dc0
   Address: 00522dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00522dc0(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_005b864c <= uVar3) {
    uVar3 = uVar3 % DAT_005b864c;
  }
  if (DAT_005b8644 != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_005b864c),1000000,
           DAT_005b8644);
  }
  return;
}


