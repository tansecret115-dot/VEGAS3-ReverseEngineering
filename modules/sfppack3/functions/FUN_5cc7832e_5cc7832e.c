/* Module: sfppack3.dll
   Function: FUN_5cc7832e
   Address: 5cc7832e
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc7832e(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    CoTaskMemFree(*(LPVOID *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


