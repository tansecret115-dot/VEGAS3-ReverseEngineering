/* Module: aviplug.dll
   Function: FUN_5f9c5250
   Address: 5f9c5250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9c5250(uint *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = rdtsc();
  uVar4 = (uint)((ulonglong)uVar1 >> 0x20);
  uVar2 = (uint)uVar1;
  uVar5 = *param_1;
  iVar3 = uVar2 - *param_1;
  *param_1 = uVar2;
  uVar5 = (uVar4 - param_1[1]) - (uint)(uVar2 < uVar5);
  param_1[1] = uVar4;
  if (DAT_5f9f3a9c != 0) {
    if (DAT_5f9f3a9c <= uVar5) {
      uVar5 = uVar5 % DAT_5f9f3a9c;
    }
    iVar3 = (int)(CONCAT44(uVar5,iVar3) / (ulonglong)DAT_5f9f3a9c);
  }
  return iVar3;
}


