/* Module: sftrkfx1.dll
   Function: FUN_5cbe2020
   Address: 5cbe2020
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbe2020(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_5cc10f4c != 0) {
    if (DAT_5cc10f4c <= uVar3) {
      uVar3 = uVar3 % DAT_5cc10f4c;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_5cc10f4c);
  }
  return iVar2;
}


