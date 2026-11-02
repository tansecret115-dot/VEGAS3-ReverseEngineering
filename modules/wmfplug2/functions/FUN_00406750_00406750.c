/* Module: wmfplug2.dll
   Function: FUN_00406750
   Address: 00406750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406750(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 400) = 0;
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),5000);
  piVar1 = *(int **)(param_1 + 0x164);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
  piVar1 = *(int **)(param_1 + 0x168);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x164) = 0;
  if (*(void **)(param_1 + 0x160) != (void *)0x0) {
    free(*(void **)(param_1 + 0x160));
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  return 0;
}


