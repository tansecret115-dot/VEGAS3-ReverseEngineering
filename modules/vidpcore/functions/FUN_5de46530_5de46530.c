/* Module: vidpcore.dll
   Function: FUN_5de46530
   Address: 5de46530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de46530(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x6c) = 0xc28f5c29;
  *(undefined4 *)(param_1 + 0x74) = 0xc28f5c29;
  *(undefined4 *)(param_1 + 0x70) = 0x3fec28f5;
  *(undefined4 *)(param_1 + 0x78) = 0x3fec28f5;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  if (*(HWND *)(param_1 + 200) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 200),0x111,*(WPARAM *)(param_1 + 0xcc),0);
  }
  piVar1 = *(int **)(param_1 + 0xc4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


