/* Module: vegas30k.dll
   Function: FUN_010c6390
   Address: 010c6390
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010c6390(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_01206530 != 0) {
    if (DAT_01206530 <= uVar3) {
      uVar3 = uVar3 % DAT_01206530;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_01206530);
  }
  return iVar2;
}


