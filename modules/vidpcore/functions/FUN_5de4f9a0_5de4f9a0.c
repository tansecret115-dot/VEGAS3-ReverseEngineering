/* Module: vidpcore.dll
   Function: FUN_5de4f9a0
   Address: 5de4f9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de4f9a0(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x74) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x94) = 1;
  if (*(HWND *)(param_1 + 0xd0) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xd0),0x111,*(WPARAM *)(param_1 + 0xd4),0);
  }
  piVar1 = *(int **)(param_1 + 0xcc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


