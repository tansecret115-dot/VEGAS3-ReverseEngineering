/* Module: sftrans1.dll
   Function: FUN_0042a8c0
   Address: 0042a8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042a8c0(int param_1)

{
  int *piVar1;
  
  (**(code **)(*(int *)(param_1 + -0x10) + 0x18))(0);
  *(undefined4 *)(param_1 + 0xa0) = 1;
  if (*(HWND *)(param_1 + 0x98) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x98),0x111,*(WPARAM *)(param_1 + 0x9c),0);
  }
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


