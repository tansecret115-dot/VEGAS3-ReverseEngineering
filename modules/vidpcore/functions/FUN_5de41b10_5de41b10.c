/* Module: vidpcore.dll
   Function: FUN_5de41b10
   Address: 5de41b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de41b10(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 1;
  if (*(HWND *)(param_1 + 0x148) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x148),0x111,*(WPARAM *)(param_1 + 0x14c),0);
  }
  piVar1 = *(int **)(param_1 + 0x144);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


