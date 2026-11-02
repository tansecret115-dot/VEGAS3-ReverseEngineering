/* Module: rmbe3260.dll
   Function: FUN_66023ee0
   Address: 66023ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66023ee0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x5c) + iVar2 * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x60));
  }
  FUN_6605cdc0((void *)(param_1 + 0x5c),0,0xffffffff);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x6c) + iVar2 * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x70));
  }
  FUN_6605cdc0((void *)(param_1 + 0x6c),0,0xffffffff);
  return 0;
}


