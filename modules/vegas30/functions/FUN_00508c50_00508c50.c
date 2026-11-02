/* Module: vegas30.exe
   Function: FUN_00508c50
   Address: 00508c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508c50(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return 0x80004003;
  }
  if (*(int **)((int)param_1 + 0x120) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)((int)param_1 + 0x120);
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      FUN_00508c50(*(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x120) + 8) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  if (*(int *)((int)param_1 + 0x120) != 0) {
    _SfList_Destroy_4(*(int *)((int)param_1 + 0x120));
  }
  free(param_1);
  return 0;
}


