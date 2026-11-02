/* Module: g2plug.dll
   Function: FUN_5f83f880
   Address: 5f83f880
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f83f880(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_5f876f14 != 0) {
    if (DAT_5f876f14 <= uVar3) {
      uVar3 = uVar3 % DAT_5f876f14;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_5f876f14);
  }
  return iVar2;
}


