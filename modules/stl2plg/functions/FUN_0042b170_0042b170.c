/* Module: stl2plg.dll
   Function: FUN_0042b170
   Address: 0042b170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042b170(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = rdtsc();
  iVar2 = (uint)uVar1 - *param_1;
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1);
  if (DAT_00472354 != 0) {
    if (DAT_00472354 <= uVar3) {
      uVar3 = uVar3 % DAT_00472354;
    }
    iVar2 = (int)(CONCAT44(uVar3,iVar2) / (ulonglong)DAT_00472354);
  }
  return iVar2;
}


