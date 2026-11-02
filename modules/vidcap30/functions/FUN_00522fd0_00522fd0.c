/* Module: vidcap30.exe
   Function: FUN_00522fd0
   Address: 00522fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00522fd0(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_005b8648 != 0) {
    if (DAT_005b8648 <= uVar3) {
      uVar3 = uVar3 % DAT_005b8648;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_005b8648);
  }
  return iVar2;
}


