/* Module: vfplugs.dll
   Function: FUN_004046a0
   Address: 004046a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004046a0(int param_1)

{
  int *piVar1;
  
  FUN_0040be00((undefined4 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0x658) = 1;
  if (*(HWND *)(param_1 + 0xbf0) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xbf0),0x111,*(WPARAM *)(param_1 + 0xbf4),0);
  }
  piVar1 = *(int **)(param_1 + 0xbec);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


