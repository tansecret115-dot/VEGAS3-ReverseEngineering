/* Module: extmondrv.dll
   Function: FUN_00426d70
   Address: 00426d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00426d70(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_0045ac60 != 0) {
    if (DAT_0045ac60 <= uVar3) {
      uVar3 = uVar3 % DAT_0045ac60;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_0045ac60);
  }
  return iVar2;
}


