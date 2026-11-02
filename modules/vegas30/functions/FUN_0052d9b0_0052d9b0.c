/* Module: vegas30.exe
   Function: FUN_0052d9b0
   Address: 0052d9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0052d9b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  int local_c;
  undefined1 local_8 [8];
  
  FUN_004582a0(param_1,local_8,&local_10);
  if (local_10 != 0 || local_c != 0) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar3 = 0;
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
    }
    if ((*(int *)(param_1 + 0xcbc) < 0) || (iVar3 + -1 < *(int *)(param_1 + 0xcbc))) {
      iVar3 = 0;
    }
    else if (*(int *)(param_1 + 0xbc8) == 0) {
      iVar3 = *(int *)(_DAT_00000008 + *(int *)(param_1 + 0xcbc) * 4);
    }
    else {
      iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar3 = *(int *)(*(int *)(iVar3 + 8) + *(int *)(param_1 + 0xcbc) * 4);
    }
    if ((((iVar3 != 0) && (*(int **)(iVar3 + 0x650) != (int *)0x0)) &&
        (iVar1 = **(int **)(iVar3 + 0x650), 0 < iVar1)) &&
       (((-1 < *(int *)(iVar3 + 0x678) && (*(int *)(iVar3 + 0x678) < iVar1)) &&
        (*(int *)(iVar3 + 0x684) != 0)))) {
      return 1;
    }
  }
  return 0;
}


