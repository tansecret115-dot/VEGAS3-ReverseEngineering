/* Module: sfppack2.dll
   Function: FUN_5cd2e320
   Address: 5cd2e320
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd2e320(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_5cd63670 != 0) {
    if (DAT_5cd63670 <= uVar3) {
      uVar3 = uVar3 % DAT_5cd63670;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_5cd63670);
  }
  return iVar2;
}


