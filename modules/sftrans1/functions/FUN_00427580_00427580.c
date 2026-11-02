/* Module: sftrans1.dll
   Function: FUN_00427580
   Address: 00427580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00427580(int param_1)

{
  int *piVar1;
  
  (**(code **)(*(int *)(param_1 + -0x10) + 0x18))(0);
  *(undefined4 *)(param_1 + 200) = 1;
  if (*(HWND *)(param_1 + 0xc0) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xc0),0x111,*(WPARAM *)(param_1 + 0xc4),0);
  }
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


