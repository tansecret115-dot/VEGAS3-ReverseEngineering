/* Module: vegas30.exe
   Function: FUN_004cb3e0
   Address: 004cb3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004cb3e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xbc8) != 0) {
    piVar1 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      goto LAB_004cb3ff;
    }
  }
  iVar2 = 0;
LAB_004cb3ff:
  if ((param_2 < 0) || (iVar2 + -1 < param_2)) {
    iVar2 = 0;
  }
  else if (*(int *)(param_1 + 0xbc8) == 0) {
    iVar2 = *(int *)(_DAT_00000008 + param_2 * 4);
  }
  else {
    iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    iVar2 = *(int *)(*(int *)(iVar2 + 8) + param_2 * 4);
  }
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(uint *)(iVar2 + 0x10) & 4) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x18) & 0x80000) != 0) {
    return *(undefined4 *)(param_1 + 0xbac);
  }
  if ((*(uint *)(iVar2 + 0x10) & 0x10000) != 0) {
    return 0x18;
  }
  return *(undefined4 *)(iVar2 + 0x694);
}


