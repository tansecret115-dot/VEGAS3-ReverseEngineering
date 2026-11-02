/* Module: vidpcore.dll
   Function: FUN_5de0ad40
   Address: 5de0ad40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de0ad40(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x74) = 1;
  if (*(HWND *)(param_1 + 0xa0) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xa0),0x111,*(WPARAM *)(param_1 + 0xa4),0);
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


