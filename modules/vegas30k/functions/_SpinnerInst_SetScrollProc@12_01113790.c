/* Module: vegas30k.dll
   Function: _SpinnerInst_SetScrollProc@12
   Address: 01113790
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpinnerInst_SetScrollProc_12(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x113790  1333  _SpinnerInst_SetScrollProc@12 */
  *(undefined4 *)(param_1 + 0xbc) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}


