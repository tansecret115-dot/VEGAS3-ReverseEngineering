/* Module: sfcd.cdd
   Function: FUN_00424f90
   Address: 00424f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00424f90(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_004414c4 != 0) {
    if (DAT_004414c4 <= uVar3) {
      uVar3 = uVar3 % DAT_004414c4;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_004414c4);
  }
  return iVar2;
}


