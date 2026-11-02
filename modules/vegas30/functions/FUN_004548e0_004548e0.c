/* Module: vegas30.exe
   Function: FUN_004548e0
   Address: 004548e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004548e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (iVar1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = _DAT_00000000;
    if (*(int *)(param_1 + 0xbc8) != 0) {
      piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar1 = *piVar2;
    }
  }
  *(int *)(param_1 + 0xbc4) = iVar1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x674);
    if (iVar1 <= *(int *)(param_1 + 0xbac)) {
      return *(int *)(param_1 + 0xbac);
    }
  }
  return iVar1;
}


