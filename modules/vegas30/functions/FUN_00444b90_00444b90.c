/* Module: vegas30.exe
   Function: FUN_00444b90
   Address: 00444b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00444b90(int param_1,int param_2)

{
  undefined4 uVar1;
  tagRECT local_10;
  
  if (*(HWND *)(param_1 + 300) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 300));
    *(undefined4 *)(param_1 + 300) = 0;
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffe;
  }
  if ((((param_2 != 0) && (param_1 != 0)) && (*(int *)(param_1 + 0xa8) == 5)) &&
     (*(int *)(param_1 + 0xb0) != 0)) {
    uVar1 = _SfCreateDialogParam_20
                      (DAT_00647204,0x55e,*(undefined4 *)(param_1 + 0x84),&LAB_00444960,param_1);
    *(undefined4 *)(param_1 + 300) = uVar1;
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
    GetClientRect(*(HWND *)(param_1 + 0x84),&local_10);
    FUN_004475b0(param_1,local_10.right - local_10.left,local_10.bottom - local_10.top,0,0);
  }
  return;
}


