/* Module: vidpcore.dll
   Function: FUN_5de2fa50
   Address: 5de2fa50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de2fa50(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  if (*(HWND *)(param_1 + 0x110) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x110),0x111,*(WPARAM *)(param_1 + 0x114),0);
  }
  piVar1 = *(int **)(param_1 + 0x10c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


