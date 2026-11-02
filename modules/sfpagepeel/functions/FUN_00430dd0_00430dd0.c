/* Module: sfpagepeel.dll
   Function: FUN_00430dd0
   Address: 00430dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00430dd0(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_0047cfdc <= uVar3) {
    uVar3 = uVar3 % DAT_0047cfdc;
  }
  if (DAT_0047cfd4 != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_0047cfdc),1000000,
           DAT_0047cfd4);
  }
  return;
}


