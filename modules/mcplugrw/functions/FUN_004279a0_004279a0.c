/* Module: mcplugrw.dll
   Function: FUN_004279a0
   Address: 004279a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004279a0(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_004a6488 != 0) {
    if (DAT_004a6488 <= uVar3) {
      uVar3 = uVar3 % DAT_004a6488;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_004a6488);
  }
  return iVar2;
}


