/* Module: vidpcore.dll
   Function: FUN_5de3d110
   Address: 5de3d110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de3d110(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3fd00000;
  *(undefined4 *)(param_1 + 0x88) = 0x3fd00000;
  *(undefined4 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0xac) = 1;
  if (*(HWND *)(param_1 + 0x108) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x108),0x111,*(WPARAM *)(param_1 + 0x10c),0);
  }
  piVar1 = *(int **)(param_1 + 0x104);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


