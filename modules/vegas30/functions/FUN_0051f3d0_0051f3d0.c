/* Module: vegas30.exe
   Function: FUN_0051f3d0
   Address: 0051f3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0051f3d0(int param_1,int param_2)

{
  uint uVar1;
  
  if ((((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0xa8), (uVar1 & 1) != 0)) &&
      (*(int *)(param_1 + 0x98) != 0)) && (param_2 == *(int *)(*(int *)(param_1 + 0x98) + 0x90))) {
    *(uint *)(param_1 + 0xa8) = uVar1 & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if ((int)(uVar1 << 0x1f) < 0) {
      FUN_0051e1d0(param_1);
      InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,0);
      InvalidateRect(*(HWND *)(param_1 + 0x180),(RECT *)0x0,0);
      if (((*(byte *)(param_1 + 0x154) & 1) != 0) && (*(HWND *)(param_1 + 0x168) != (HWND)0x0)) {
        InvalidateRect(*(HWND *)(param_1 + 0x168),(RECT *)0x0,0);
      }
    }
    if (*(int *)(param_1 + 0x238) != 0) {
      _SfDibFree_8(*(int *)(param_1 + 0x238),0);
      *(undefined4 *)(param_1 + 0x230) = 0;
      *(undefined4 *)(param_1 + 0x238) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
      *(undefined4 *)(param_1 + 0x234) = 0;
    }
    return 1;
  }
  return 0;
}


