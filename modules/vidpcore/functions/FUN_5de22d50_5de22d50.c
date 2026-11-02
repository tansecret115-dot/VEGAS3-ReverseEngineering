/* Module: vidpcore.dll
   Function: FUN_5de22d50
   Address: 5de22d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de22d50(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  if (*(HWND *)(param_1 + 0x80) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x80),0x111,*(WPARAM *)(param_1 + 0x84),0);
  }
  piVar1 = *(int **)(param_1 + 0x7c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


