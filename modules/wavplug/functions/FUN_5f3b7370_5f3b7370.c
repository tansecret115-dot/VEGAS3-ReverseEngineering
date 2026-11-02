/* Module: wavplug.dll
   Function: FUN_5f3b7370
   Address: 5f3b7370
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3b7370(uint *param_1)

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
  if (DAT_5f3daee0 != 0) {
    if (DAT_5f3daee0 <= uVar5) {
      uVar5 = uVar5 % DAT_5f3daee0;
    }
    iVar3 = (int)(CONCAT44(uVar5,iVar3) / (ulonglong)DAT_5f3daee0);
  }
  return iVar3;
}


