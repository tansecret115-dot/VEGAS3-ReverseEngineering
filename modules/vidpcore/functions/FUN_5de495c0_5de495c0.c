/* Module: vidpcore.dll
   Function: FUN_5de495c0
   Address: 5de495c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de495c0(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0x7c) = 1;
  if (*(HWND *)(param_1 + 0xa8) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xa8),0x111,*(WPARAM *)(param_1 + 0xac),0);
  }
  piVar1 = *(int **)(param_1 + 0xa4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


