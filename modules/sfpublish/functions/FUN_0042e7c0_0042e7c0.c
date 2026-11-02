/* Module: sfpublish.dll
   Function: FUN_0042e7c0
   Address: 0042e7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042e7c0(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_0044024c != 0) {
    if (DAT_0044024c <= uVar3) {
      uVar3 = uVar3 % DAT_0044024c;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_0044024c);
  }
  return iVar2;
}


