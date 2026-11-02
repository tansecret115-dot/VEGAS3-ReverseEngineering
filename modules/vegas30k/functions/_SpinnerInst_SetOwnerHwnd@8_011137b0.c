/* Module: vegas30k.dll
   Function: _SpinnerInst_SetOwnerHwnd@8
   Address: 011137b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpinnerInst_SetOwnerHwnd_8(int param_1,undefined4 param_2)

{
                    /* 0x1137b0  1332  _SpinnerInst_SetOwnerHwnd@8 */
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    *(undefined4 *)(param_1 + 0x40) = param_2;
    *(undefined4 *)(param_1 + 0x38) = param_2;
  }
  return;
}


