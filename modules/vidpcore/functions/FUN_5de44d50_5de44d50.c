/* Module: vidpcore.dll
   Function: FUN_5de44d50
   Address: 5de44d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de44d50(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0x80) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x12d687;
  *(undefined4 *)(param_1 + 0xbc) = 1;
  if (*(HWND *)(param_1 + 0x128) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x128),0x111,*(WPARAM *)(param_1 + 300),0);
  }
  piVar1 = *(int **)(param_1 + 0x124);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


