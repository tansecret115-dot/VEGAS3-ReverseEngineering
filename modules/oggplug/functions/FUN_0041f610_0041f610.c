/* Module: oggplug.dll
   Function: FUN_0041f610
   Address: 0041f610
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041f610(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_00450c7c != 0) {
    if (DAT_00450c7c <= uVar3) {
      uVar3 = uVar3 % DAT_00450c7c;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_00450c7c);
  }
  return iVar2;
}


