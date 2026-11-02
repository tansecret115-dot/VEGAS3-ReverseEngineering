/* Module: vidpcore.dll
   Function: FUN_5de15610
   Address: 5de15610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de15610(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  if (*(HWND *)(param_1 + 0x160) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x160),0x111,*(WPARAM *)(param_1 + 0x164),0);
  }
  piVar1 = *(int **)(param_1 + 0x15c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


