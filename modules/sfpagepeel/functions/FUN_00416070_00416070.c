/* Module: sfpagepeel.dll
   Function: FUN_00416070
   Address: 00416070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416070(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 0x40) != 0)) {
    pfVar1 = (float *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    iVar3 = FUN_0043b470(pfVar1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 2;
    }
    iVar3 = FUN_0043b8d0(pfVar1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 1;
    }
    if (*(uint *)(param_1 + 0x1f8) != 0) {
      pfVar2 = (float *)(param_1 + 0x1fc);
      *pfVar2 = *pfVar1;
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x164);
      if ((*(uint *)(param_1 + 0x1f8) | 1) != 0) {
        FUN_0043ba00(pfVar2);
      }
      if ((*(uint *)(param_1 + 0x1f8) | 2) != 0) {
        FUN_0043b5a0(pfVar2);
      }
    }
    return 1;
  }
  return 0;
}


