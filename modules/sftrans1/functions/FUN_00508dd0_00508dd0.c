/* Module: sftrans1.dll
   Function: FUN_00508dd0
   Address: 00508dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00508dd0(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_005764d0 != 0) {
    if (DAT_005764d0 <= uVar3) {
      uVar3 = uVar3 % DAT_005764d0;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_005764d0);
  }
  return iVar2;
}


