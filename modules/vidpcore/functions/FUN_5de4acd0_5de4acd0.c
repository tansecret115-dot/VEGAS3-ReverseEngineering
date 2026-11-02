/* Module: vidpcore.dll
   Function: FUN_5de4acd0
   Address: 5de4acd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de4acd0(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x6c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x74) = 1;
  if (*(HWND *)(param_1 + 0x90) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x90),0x111,*(WPARAM *)(param_1 + 0x94),0);
  }
  piVar1 = *(int **)(param_1 + 0x8c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


