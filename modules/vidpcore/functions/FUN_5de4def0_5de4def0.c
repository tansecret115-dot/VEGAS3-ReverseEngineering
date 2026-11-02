/* Module: vidpcore.dll
   Function: FUN_5de4def0
   Address: 5de4def0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de4def0(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x74) = 0x3dc0c0c1;
  *(undefined4 *)(param_1 + 0x70) = 0x3e8e8e8f;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f71f1f2;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  if (*(HWND *)(param_1 + 0xe0) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xe0),0x111,*(WPARAM *)(param_1 + 0xe4),0);
  }
  piVar1 = *(int **)(param_1 + 0x164);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


