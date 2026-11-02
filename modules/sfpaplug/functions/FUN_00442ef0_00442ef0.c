/* Module: sfpaplug.dll
   Function: FUN_00442ef0
   Address: 00442ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00442ef0(uint *param_1)

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
  if (DAT_0045be54 != 0) {
    if (DAT_0045be54 <= uVar5) {
      uVar5 = uVar5 % DAT_0045be54;
    }
    iVar3 = (int)(CONCAT44(uVar5,iVar3) / (ulonglong)DAT_0045be54);
  }
  return iVar3;
}


