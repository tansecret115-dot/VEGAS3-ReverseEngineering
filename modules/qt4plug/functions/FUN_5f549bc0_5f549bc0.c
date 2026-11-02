/* Module: qt4plug.dll
   Function: FUN_5f549bc0
   Address: 5f549bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f549bc0(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_5f5a3cc0 != 0) {
    if (DAT_5f5a3cc0 <= uVar3) {
      uVar3 = uVar3 % DAT_5f5a3cc0;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_5f5a3cc0);
  }
  return iVar2;
}


