/* Module: vidpcore.dll
   Function: FUN_5de43470
   Address: 5de43470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de43470(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x78) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x7c) = 0;
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


