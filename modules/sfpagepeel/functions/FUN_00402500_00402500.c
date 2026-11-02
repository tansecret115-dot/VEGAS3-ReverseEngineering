/* Module: sfpagepeel.dll
   Function: FUN_00402500
   Address: 00402500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402500(int param_1)

{
  int *piVar1;
  
  (**(code **)(*(int *)(param_1 + -0x10) + 0x18))(0);
  *(undefined4 *)(param_1 + 0xd0) = 1;
  if (*(HWND *)(param_1 + 200) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 200),0x111,*(WPARAM *)(param_1 + 0xcc),0);
  }
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


