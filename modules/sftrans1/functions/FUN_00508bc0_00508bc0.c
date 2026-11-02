/* Module: sftrans1.dll
   Function: FUN_00508bc0
   Address: 00508bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00508bc0(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_005764d4 <= uVar3) {
    uVar3 = uVar3 % DAT_005764d4;
  }
  if (DAT_005764cc != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_005764d4),1000000,
           DAT_005764cc);
  }
  return;
}


