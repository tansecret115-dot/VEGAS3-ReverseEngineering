/* Module: mcplug.dll
   Function: FUN_0043a1c0
   Address: 0043a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043a1c0(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_004876f4 != 0) {
    if (DAT_004876f4 <= uVar3) {
      uVar3 = uVar3 % DAT_004876f4;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_004876f4);
  }
  return iVar2;
}


