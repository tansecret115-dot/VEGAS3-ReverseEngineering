/* Module: wmfplug2.dll
   Function: FUN_0044b240
   Address: 0044b240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044b240(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_00489a8c != 0) {
    if (DAT_00489a8c <= uVar3) {
      uVar3 = uVar3 % DAT_00489a8c;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_00489a8c);
  }
  return iVar2;
}


