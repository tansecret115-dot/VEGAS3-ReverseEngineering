/* Module: sfconfigmgr.dll
   Function: FUN_00414d90
   Address: 00414d90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414d90(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_00422e70 != 0) {
    if (DAT_00422e70 <= uVar3) {
      uVar3 = uVar3 % DAT_00422e70;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_00422e70);
  }
  return iVar2;
}


