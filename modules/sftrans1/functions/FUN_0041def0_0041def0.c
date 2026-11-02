/* Module: sftrans1.dll
   Function: FUN_0041def0
   Address: 0041def0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041def0(int param_1)

{
  int *piVar1;
  
  (**(code **)(*(int *)(param_1 + -0x10) + 0x18))(0);
  *(undefined4 *)(param_1 + 0x610) = 1;
  if (*(HWND *)(param_1 + 0x608) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x608),0x111,*(WPARAM *)(param_1 + 0x60c),0);
  }
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


