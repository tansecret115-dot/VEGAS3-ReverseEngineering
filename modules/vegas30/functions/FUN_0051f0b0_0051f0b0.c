/* Module: vegas30.exe
   Function: FUN_0051f0b0
   Address: 0051f0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0051f0b0(int param_1)

{
  uint uVar1;
  
  if ((((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0xa8), (uVar1 & 1) != 0)) &&
      (*(int *)(param_1 + 0x98) != 0)) &&
     (((*(int *)(param_1 + 0xa0) != 0 || (*(int *)(param_1 + 0xa4) != 0)) && ((uVar1 & 8) == 0)))) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(uint *)(param_1 + 0xa8) = uVar1 & 0xfffffffe | 8;
    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xe84) = 0;
    if (*(int *)(param_1 + 0x238) != 0) {
      _SfDibFree_8(*(int *)(param_1 + 0x238),0);
      *(undefined4 *)(param_1 + 0x230) = 0;
      *(undefined4 *)(param_1 + 0x238) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
      *(undefined4 *)(param_1 + 0x234) = 0;
    }
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,0);
    return 0;
  }
  return 0x15;
}


