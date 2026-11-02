/* Module: vidcap30.exe
   Function: FUN_00488350
   Address: 00488350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00488350(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    _SfMetric_Close_4(*(int *)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    CoUninitialize();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int **)(param_1 + 0x25c) != (int *)0x0) {
    iVar2 = **(int **)(param_1 + 0x25c);
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x25c) + 8) + iVar4 * 4);
        if (iVar3 != 0) {
          FUN_00487910(iVar3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x25c));
    *(undefined4 *)(param_1 + 0x25c) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x25c) = 0;
  return 0;
}


