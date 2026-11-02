/* Module: vidpcore.dll
   Function: FUN_5de179c0
   Address: 5de179c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de179c0(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x28f5c28f;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x90) = 0x40008f5c;
  *(undefined4 *)(param_1 + 0x94) = 4;
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


