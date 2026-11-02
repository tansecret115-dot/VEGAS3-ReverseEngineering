/* Module: stl2plg.dll
   Function: FUN_0042af90
   Address: 0042af90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042af90(LARGE_INTEGER *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (param_1->s).LowPart;
  iVar2 = (param_1->s).HighPart;
  QueryPerformanceCounter(param_1);
  uVar3 = ((param_1->s).HighPart - iVar2) - (uint)((param_1->s).LowPart < uVar1);
  if (DAT_00472354 <= uVar3) {
    uVar3 = uVar3 % DAT_00472354;
  }
  if (DAT_0047234c != 0) {
    MulDiv((int)(CONCAT44(uVar3,(param_1->s).LowPart - uVar1) / (ulonglong)DAT_00472354),1000000,
           DAT_0047234c);
  }
  return;
}


