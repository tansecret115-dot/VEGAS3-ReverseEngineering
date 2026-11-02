/* Module: wmfplug2.dll
   Function: FUN_00403d80
   Address: 00403d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403d80(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x194) = 0;
  WaitForSingleObject(*(HANDLE *)(param_1 + 8),5000);
  piVar1 = *(int **)(param_1 + 0x198);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1);
  }
  ReleaseMutex(*(HANDLE *)(param_1 + 8));
  piVar1 = *(int **)(param_1 + 0x19c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  return 0;
}


